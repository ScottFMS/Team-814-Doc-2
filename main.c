#include <kipr/wombat.h>

int main()
{
//turning left
 motor(0,-60);// left wheel
 motor(3,60);// right wheel
 msleep(500);
 
 
 motor(0,60);
 motor(3,60);
 msleep(6000);   
    
    return 0;
}
