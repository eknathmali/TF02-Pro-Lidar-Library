#include <lidar.h>
#include "lidar.h"
lidar lidar_obj;     // Object to the class Lidar
unsigned long dis = 0;
void setup() {
//   ldr.begin();
  // put your setup code here, to run once:
Serial3.begin(115200);  // Use Serial port at which connections has been done..
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
dis =  lidar_obj.start();    // start() is  Return type function of class Lidar , always use to obtain distance via Lidar ..
Serial.print(F("dis  = "));
Serial.println(dis);
}
