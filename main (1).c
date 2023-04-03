#include <kipr/wombat.h>

int main()
{
    enable_servos (0);
    
    analog(0);
    
    create_connect();
    create_drive_direct(80,80);
    msleep(2000);
    
    set_servo_position(0,1024);
    msleep(1000);
    
    create_drive_direct(100,0);
    msleep(1700);
    
    create_drive_direct(100,100);
    msleep(10000);
    
    set_servo_position(0,1600);
        
    create_drive_direct(100,100);
    msleep(3900);
    
    set_servo_position(0,1000);
    msleep(1200);
    
    create_drive_direct(-100,-100);
    msleep(3000);
    
    create_drive_direct(100,-100);
    msleep(3400);
    

    ;create_stop();
    msleep(500);
    
    create_stop();
        msleep(500);    
    printf("Hello World\n");
    create_disconnect();
    return 0;
    
}
