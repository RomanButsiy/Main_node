/*
    Розробив Roman
    Канал на YouTube: https://goo.gl/x8FL2o
    Відео з проектом: 
    Схема: https://easyeda.com/Targaryen/Main_node
    Github: https://github.com/RomanButsiy/Main_node
    2019 Roman
*/

//Налаштування Arduino IDE для програмування WiFi модуля ESP8266 http://geekmatic.in.ua/ua/arduino_ide_with_wifi_esp8266
#include <ESP8266HTTPUpdateServer.h>
#include <ESP8266WebServer.h>   
#include <ESP8266WiFi.h> 
#include <ESP8266SSDP.h>     
#include <ArduinoJson.h>  // Ставимо через менеджер бібліотек 
#include <FS.h> 

//--------------------------------------------------------------------
//  Default data:
//--------------------------------------------------------------------
// Об'єкт для оновлення web сторінки
ESP8266HTTPUpdateServer httpUpdater;
// Web інтерфейс для пристрою
ESP8266WebServer HTTP(80);
// Для файлової системи
File fsUploadFile;

String configSetup = "{}";
String configJson = "{}";

void setup() {
  Serial.begin(115200);
}

void loop() {

}
