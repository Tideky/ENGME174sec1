#include <Arduino.h>

// กำหนดขาของ potentiometer และ LED
#define POT_PIN 36
#define LED_PINS {23, 19, 18, 5, 17, 16, 4, 0}

// ตัวแปรเก็บค่าแรงดันจาก potentiometer
float voltage = 0.0;

// ฟังก์ชันสำหรับการตั้งค่า LED
void setLEDState(int numLEDs) {
    int ledPins[] = LED_PINS;
    for (int i = 0; i < 8; i++) {
        if (i < numLEDs) {
            digitalWrite(ledPins[i], HIGH); // เปิดไฟ LED
        } else {
            digitalWrite(ledPins[i], LOW); // ปิดไฟ LED
        }
    }
}

void setup() {
    // ตั้งค่าขา LED เป็น output
    int ledPins[] = LED_PINS;
    for (int i = 0; i < 8; i++) {
        pinMode(ledPins[i], OUTPUT);
        digitalWrite(ledPins[i], LOW); // เริ่มต้นให้ LED ทุกดวงปิด
    }

    // ตั้งค่า potentiometer
    analogReadResolution(12); // ตั้งความละเอียดการอ่าน ADC เป็น 12 บิต (0-4095)
}

void loop() {
    // อ่านค่าจาก potentiometer
    int rawValue = analogRead(POT_PIN);
    voltage = (rawValue / 4095.0) * 3.3; // แปลงค่า ADC เป็นแรงดันไฟฟ้า (0 - 3.3V)

    // ควบคุม LED ตามแรงดัน
    if (voltage >= 0.0 && voltage <= 0.9) {
        setLEDState(0); // ปิดทุกดวง
    } else if (voltage > 0.9 && voltage <= 2.0) {
        setLEDState(3); // เปิด 3 ดวงแรก
    } else if (voltage > 2.0 && voltage <= 3.0) {
        setLEDState(5); // เปิด 5 ดวงแรก
    } else if (voltage > 3.0) {
        setLEDState(8); // เปิดทุกดวง
    }

    delay(100); // หน่วงเวลา 100ms เพื่อให้การอ่านค่ามีความเสถียร
}
