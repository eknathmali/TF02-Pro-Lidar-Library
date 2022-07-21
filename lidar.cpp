#include "lidar.h"



int lidar :: start() {
   if (Serial3.available()) {
    if (Serial3.read() == HEADER) {
      uart[0] = HEADER;
      for (i = 1; i < 9; i++) {
        uart[i] = Serial3.read();
      }
      check = uart[0] + uart[1] + uart[2] + uart[3] + uart[4] + uart[5] + uart[6] + uart[7];
      if (uart[8] == (check & 0xff)) {
        dist = (uart[2] + uart[3] * 256) - 11;
        Serial.print("dist = ");
        Serial.println(dist);
        return dist;
      }
    }
  }

}