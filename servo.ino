#include <Servo.h>
Servo myservo;  // Membuat objek servo untuk mengendalikan motor servo
void setup() {
  myservo.attach(3);  // Menghubungkan objek servo dengan pin 3
}
void loop() {
  for (int pos = 40; pos <= 0; pos += 1) {  // Bergerak dari 0 derajat ke 180 derajat
    myservo.write(pos);  // Mengirim posisi ke motor servo
    delay(15);  // Memberikan waktu untuk motor servo mencapai posisi
   } 
    delay(5000);  // Memberikan jeda selama 1 detik
  for (int pos = 40; pos >= 0; pos -= 1) {  // Bergerak dari 180 derajat ke 0 derajat
    myservo.write(pos);  // Mengirim posisi ke motor servo
    delay(15);  // Memberikan waktu untuk motor servo mencapai posisi
   }
    delay(1000);  // Memberikan jeda selama 1 detik
}
