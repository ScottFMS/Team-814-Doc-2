#include <kipr/wombat.h>

int main()
{
while
    (analog,1>170);

    enable_servo(0);
    set_servo_position(0,2035);
   msleep(1000);
enable_servo(2);  
    set_servo_position(2,1131);
  
  //turning left

 motor(0,0);// left wheel
 motor(3,100);// right wheel
 msleep(450);

 motor(0,100);
 motor(3,100);
 msleep(1500);   
    
 motor(0,100);
 motor(3,0);
 msleep(300);
    
 motor(0,100);
 motor(3,100);
 msleep(500);
enable_servos(0); // Enable (turn on) all servo por 
set_servo_position(0,1225); // set servo on port #0 to position 294.
msleep(1500);
    disable_servo(0);
    msleep(500);
    enable_servo(2); 
    set_servo_position(2,1801);
    msleep(1900);
    enable_servo(0);
        set_servo_position(0,2035);
    msleep(1000);
motor(0,-60);
motor(3,-60);
msleep(1500);
    
    
 return 0;
    
}
