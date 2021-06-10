#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let x = 0, y = 0, deg = -360;
    angleMode(DEGREES);
    while (notQuit) {
        deg++;
        if (deg > 360) {
            deg = -360;
            clear(0);
        }
       x = cos(deg) * 100;
       y = sin(deg) * 100;
        mathAxis(360);
        stroke(160,200,160);
        strokeWeight(20);
        mathPoint(deg, y);
        stroke(160, 200, 255);
        mathPoint(deg, x);

    }
    
}
