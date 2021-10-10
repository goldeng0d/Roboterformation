/* WiFi softAP Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <Arduino.h>
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"

#include "lwip/err.h"
#include "lwip/sys.h"
#include <L298NX2.h>
// librarys possible Motor_PID or L298N + Encoder

#define EXAMPLE_ESP_WIFI_SSID "mywifissid"
#define EXAMPLE_ESP_WIFI_PASS "mywifipass"
#define EXAMPLE_MAX_STA_CONN (3)

// Pin definition
//Motor1
const unsigned int EN_A = 16;
const unsigned int IN1_A = 17;
const unsigned int IN2_A = 18;
const unsigned int ENC1_A = ;
const unsigned int ENC1_A = ;

//Motor2
const unsigned int IN1_B = 32;
const unsigned int IN2_B = 33;
const unsigned int EN_B = 19;
const unsigned int ENC2_A = ;
const unsigned int ENC2_B = ;

// Initialize both motors
L298NX2 motors(EN_A, IN1_A, IN2_A, EN_B, IN1_B, IN2_B);

void setup()
{
    Serial.begin(115200);
    Serial.print("setup() running on core ");
    Serial.println(xPortGetCoreID());
}

void app_main()
{
    Serial.print("main() running on core ")
    Serial.println(xPortGetCoreID());
}