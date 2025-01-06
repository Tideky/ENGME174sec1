// #include <Wire.h>
// // YWROBOT
// // Compatible with the Arduino IDE 1.0
// // Library version:1.1
// #include <LiquidCrystal_I2C.h>

// LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

// int menu = 0;

// int sw_next = 15;
// int sw_ok = 2;

// int led1 = 23, led2 = 19, led3 = 18, led4 = 5, led5 = 17, led6 = 16, led7 = 4, led8 = 0;

// void setup()
// {
//     lcd.init(); // initialize the lcd
//     // Print a message to the LCD.
//     lcd.backlight();

//     pinMode(sw_next, INPUT_PULLUP);
//     pinMpde(sw_ok, INPUT_PULLUP);

//     pinMode(led1, OUTPUT);
//     pinMode(led2, OUTPUT);
//     pinMode(led3, OUTPUT);
//     pinMode(led4, OUTPUT);
//     pinMode(led5, OUTPUT);
//     pinMode(led6, OUTPUT);
//     pinMode(led7, OUTPUT);
//     pinMode(led8, OUTPUT);
// }

// void loop()
// {
//     int status_next = digitalRead(sw_next);

//     if (status_next == low)
//     {
//         menu++;
//         if (menu == 6)
//         {
//             menu = 0;
//         }
//         lcd.clear();
//         lcd.setCursor(0, 0);
//         led.print("Menu: ");
//         lcd.print(menu);
//     }

//     int status_ok = digitalRead(sw_ok);
//     if (status_ok == LOW)
//     {
//         if (menu == 0)
//         {
//             // pen all LED
//         }
//         else if (menu == 1)
//         {
//             // เปิด
//         }
//         else if (menu == 2)
//         {
//             // เปิด
//         }
//         else if (menu == 3)
//         {
//             // เปิด
//         }
//         else if (menu == 4)
//         {
//             // เปิด
//         }
//         else if (menu == 5)
//         {
//             // เปิด
//         }
//     }
// }