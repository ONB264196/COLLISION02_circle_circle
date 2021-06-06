#define _マウス操作_

#ifdef _マウス操作_
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    struct CIRCLE {
        float x, y, r;
    };
    struct CIRCLE c1, c2;
    c1.x = width / 2;
    c1.y = height / 2;
    c1.r = 100;
    c2.x = 0;
    c2.y = 0;
    c2.r = 100;


    while (notQuit) {
        clear(31, 30, 51);

        c2.x = mouseX;
        c2.y = mouseY;

        float a = c2.x - c1.x;
        float b = c2.y - c1.y;
        float distance = sqrt(a * a + b * b);

        strokeWeight(0);
        if (distance <= c1.r + c2.r) {
            fill(187, 30, 94, 200);
        }
        else {
            fill(224, 225, 204, 120);
        }
        circle(c1.x, c1.y, c1.r * 2);
        circle(c2.x, c2.y, c2.r * 2);


        stroke(224, 225, 204);
        strokeWeight(5);
        line(c1.x, c1.y, c2.x, c2.y);
        line(c1.x, c1.y, c2.x, c1.y);
        line(c2.x, c2.y, c2.x, c1.y);

        fill(224, 225, 204);
        textSize(50);
        text(distance, 0, 60);
    }
}
#endif


//以下未完成
/*
#ifdef _キー操作_
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    struct CIRCLE {
        float x, y, r;
    };
    struct CIRCLE c1, c2;
    c1.x = width / 2;
    c1.y = height / 2;
    c1.r = 100;
    c2.x = 0;
    c2.y = 0;
    c2.r = 100;


    while (notQuit) {
        clear(31, 30, 51);

        c2.x = mouseX;
        c2.y = mouseY;

        float a = c2.x - c1.x;
        float b = c2.y - c1.y;
        float distance = sqrt(a * a + b * b);

        strokeWeight(0);
        if (distance <= c1.r + c2.r) {
            fill(187, 30, 94, 200);
        }
        else {
            fill(224, 225, 204, 120);
        }
        circle(c1.x, c1.y, c1.r * 2);
        circle(c2.x, c2.y, c2.r * 2);


        stroke(224, 225, 204);
        strokeWeight(5);
        line(c1.x, c1.y, c2.x, c2.y);
        line(c1.x, c1.y, c2.x, c1.y);
        line(c2.x, c2.y, c2.x, c1.y);

        fill(224, 225, 204);
        textSize(50);
        text(distance, 0, 60);
    }
}
#endif
*/