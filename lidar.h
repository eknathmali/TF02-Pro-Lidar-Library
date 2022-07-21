#ifndef LIDAR_H
#define LIDAR_H
#include<Arduino.h>
class lidar {
 
  
  public :

int dist;
int strength; 
float temprature;
int check; 
int i;
int uart[9]; 
const int HEADER=0x59; 

int start();
};

#endif