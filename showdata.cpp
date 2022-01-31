/* Copyright (c) 2022 Perlatecnica
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/****************************************************
*            RAPID PROTOTYPING WITH NUCLEO          *
* Example Code 00: Light sensor 6283A1              *
* Author: Mauro D'Angelo                            *
* Organization: Perlatecnica APS ETS				*
*****************************************************/


#include "mbed.h"
#include "LightSensor.h"

// It creates an instance of the DigitalOut class.
// myled is the name of the variable (instance).
// The instance shall 'point' to the pin LED1, that is the led on the board
DigitalOut myled(LED1);

BufferedSerial pc(USBTX, USBRX);

// it gets the instance of Light Sensor driver
LightSensor* ls = LightSensor::getInstance();

// Entry point
int main() {
    printf("STM32NucleoF401RE Example 29 - Light Sensor 6283A1\r\n");

    ls->show();

    while(true){;}
}


