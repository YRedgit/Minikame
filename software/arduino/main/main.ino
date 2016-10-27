#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <Servo.h>
#include "webserve.h"
#include "octosnake.h"
#include "minikame.h"
#define LED     D0        // Led in NodeMCU at pin GPIO16 (D0).
const char* ssid = "Minikame";
const char* password = "1234abcd";
const char* ssid_local = "";
const char* pass_local = "";

MiniKame robot;
WiFiServer server(80);
bool running=0;
int prev_wpage=1;
int curr_wpage=1;
int startup=1;
IPAddress IPaddr = {{0},{0},{0},{0}};

void setup() {
    //WiFi.mode(WIFI_AP);
    //server.begin();
    WiFi.mode(WIFI_AP);
    WiFi.softAP(ssid, password);
    server.begin();
    
    pinMode(LED, OUTPUT);
    Serial.begin(115200);
    pinMode(12, INPUT_PULLUP);

    delay(1000);    
    robot.init();
    Serial.println("\n\rHello There!\n\rmy name is MiniKame\n\rPlease connect to the MiniKame AP Wifi\n\rThen with your favorite web browser reach the following address\n\r192.168.1.4\n\n\rEnjoy!!!!");
}

void connect_AP (const char* ssidSTA,const char * pass) {
    WiFi.persistent(false);
    WiFi.mode(WIFI_OFF); 
    delay(500);
    WiFi.mode(WIFI_AP_STA);
    delay(500);
    WiFi.begin(ssidSTA,pass);
}

void parseData(String data){

    //switch (data.substring(0,plusIndex).toInt()){
    switch (data.toInt()){

        case 1:
            robot.walk(1,550);
            running = 1;
            break;

        case 2:
            robot.walk_back(1,550);
            running = 1;
            break;

        case 3:
            robot.turnL(1,550);
            running = 1;
            break;

        case 4:
            robot.turnR(1,550);
            running = 1;
            break;

        case 5:
            //STOP
            running = 0;
            break;

        case 6: //heart
            robot.pushUp(2,1400);
            break;

        case 7: //fire
            robot.upDown(4,250);
            break;

        case 8: //skull
            robot.jump();
            break;

        case 9: //cross
            robot.hello();
            robot.home();
            break;

        case 10: //punch
        robot.frontBack(4,200);
            break;

        case 11: //mask
            robot.dance(2,1000);
            robot.moonwalkL(4,2000);
            robot.dance(2,1000);
            break;

        default:
            robot.home();
            break;
    }
}

String input;

void print_wpage(WiFiClient client,int page_num, IPAddress myaddr) {

    switch (page_num) {
    case 1:
      client.print(web_page1);
      client.print(web_page2); 
      break;
    case 2:
      client.print(web_page3);
      client.print(web_page4); 
      client.print(String("<html><br>Get ip addr:") + String(myaddr[0]) + String(".") + String(myaddr[1]) + String(".") + String(myaddr[2]) + String(".")  + String(myaddr[3]) + String(" </br></html>")); 
      digitalWrite(LED, HIGH);
      break;
    case 3:
      client.print(web_page5);
      client.print(web_page6); 
      digitalWrite(LED, HIGH);
      break;
    default:
      break;
  }
}

void loop() {
    //Serial.println(analogRead(A0));
  WiFiClient client = server.available();
  if (!client) {
    //delay(10);
    return;
  }    

  if (client.connected()) {
    String request = client.readStringUntil('\r'); 
    if (request.indexOf("/Left") != -1){ 
      digitalWrite(LED, LOW); 
      parseData("3");
      digitalWrite(LED, HIGH);
    } else if (request.indexOf("/Right") != -1){ 
      digitalWrite(LED, LOW);
      parseData("4");
      digitalWrite(LED, HIGH);
    } else if (request.indexOf("/Forward") != -1){ 
      digitalWrite(LED, LOW);
      parseData("1");
      digitalWrite(LED, HIGH);
    } else if (request.indexOf("/Backward") != -1){ 
      digitalWrite(LED, LOW);
      parseData("2");
      digitalWrite(LED, HIGH);  
    } else if (request.indexOf("/Home") != -1){ 
      digitalWrite(LED, LOW);
      robot.home();
      digitalWrite(LED, HIGH);
    } else if (request.indexOf("/Pushup") != -1){ 
      digitalWrite(LED, LOW);
      parseData("6");
      digitalWrite(LED, HIGH);
    } else if (request.indexOf("/Updown") != -1){ 
      digitalWrite(LED, LOW);
      parseData("7");
      digitalWrite(LED, HIGH);
    } else if (request.indexOf("/Hello") != -1){ 
      digitalWrite(LED, LOW);
      parseData("9");
      digitalWrite(LED, HIGH);
      } else if (request.indexOf("/Frontback") != -1){ 
      digitalWrite(LED, LOW);
      parseData("10");
      digitalWrite(LED, HIGH);
      } else if (request.indexOf("/Dance") != -1){ 
      digitalWrite(LED, LOW);
      parseData("11");
      digitalWrite(LED, HIGH);
    } else if (request.indexOf("/index") != -1){ 
      curr_wpage = 1;
    } else if (request.indexOf("/page1") != -1){ 
      curr_wpage = 2;
    } else if (request.indexOf("/page2") != -1){ 
      curr_wpage = 3;
    } else if (request.indexOf("Wname") != -1){ 
      digitalWrite(LED, LOW);
      int start_of_wname = request.indexOf("Wname=");
      int end_of_wname   = request.indexOf("&Wpass=");
      String wname       = request.substring(start_of_wname+6,end_of_wname);
      int start_of_wpass = request.indexOf("Wpass=");
      int end_of_wpass   = request.indexOf("&Wip=");
      String wpass       = request.substring(start_of_wpass+6,end_of_wpass);  
      connect_AP(wname.c_str(),wpass.c_str());
      delay(5000);
      IPaddr = WiFi.localIP();
    }
  }

  client.flush();
  print_wpage(client,curr_wpage,IPaddr);
  delay(1);
}
