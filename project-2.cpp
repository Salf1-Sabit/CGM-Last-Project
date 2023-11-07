#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void smallTree (int x, int y) {
  /**TREE ROOT**/
  setfillstyle(SOLID_FILL, BROWN);
  rectangle(x, y, x + 40, y + 91);
  floodfill(x + 2, y + 2, WHITE);

  /**TREE LEAVES**/
  setfillstyle(SOLID_FILL, GREEN);
  int leaf1[] = {x - 30, y, x + 20, y - 70, x + 70, y, x - 30, y};
  fillpoly(4, leaf1);

  setfillstyle(SOLID_FILL, LIGHTGREEN);
  int leaf2[] = {x - 20, y - 30, x + 20, y - 100, x + 60, y - 30, x - 20, y - 30};
  fillpoly(4, leaf2);
}

void bigTree (int x, int y) {
  /**TREE ROOT**/
  setfillstyle(SOLID_FILL, BROWN);
  rectangle(x, y, x + 40, y + 91);
  floodfill(x + 2, y + 2, WHITE);

  /**TREE LEAVES**/
  setfillstyle(SOLID_FILL, GREEN);
  int leaf1[] = {x - 50, y + 20, x + 20, y - 100, x + 90, y + 20, x - 50, y + 20};
  fillpoly(4, leaf1);

  setfillstyle(SOLID_FILL, LIGHTGREEN);
  int leaf2[] = {x - 40, y - 10, x + 20, y - 120, x + 80, y - 10, x - 40, y - 10};
  fillpoly(4, leaf2);
}

void roadLines (int y) {
  for (int i = 0; i < getmaxx(); i += 60) {
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(i, y, i + 30,y + 5);
    floodfill(i + 2, y + 2, WHITE);

  }
}


void car () {
  int page = 0;
  for (int i=0; i<500; i++) {

    /**ALTERNATE PAGE**/
    page = 1 - page;
    setactivepage(page);
    setvisualpage(1 - page);
    cleardevice();
    delay(10);

    /**SKY**/
    setfillstyle(SOLID_FILL, CYAN);
    rectangle(1, 1, getmaxx(), 391);
    floodfill(3, 3, WHITE);

    /**SUN**/
    setfillstyle(SOLID_FILL, YELLOW);
    circle(100, 100, 40);
    floodfill(100 + 2, 100 + 2, WHITE);

    /**Wheels**/
    setfillstyle(SOLID_FILL, YELLOW);
    circle(110+i,370,17);
    floodfill(110 + i + 2, 370 + 2, WHITE);
    circle(240+i,370,17);
    floodfill(240 + i + 2, 370 + 2, WHITE);

    /**TREE**/
    smallTree(100, 300);
    smallTree(250, 300);
    bigTree(175, 300);


    /***CAR BODY ******/
    setfillstyle(SOLID_FILL, LIGHTMAGENTA);
    int carBody[] = {50+i,370, 300+i,370, 300+i,350, 240+i,330, 200+i,300, 110+i,300, 80+i,330, 50+i,340, 50+i,370};
    fillpoly(9, carBody);

    /***CAR Windows***/
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    int window1[] = {165+i, 305, 165+i,330, 230+i,330, 195+i,305, 165+i,305};
    fillpoly(5, window1);

    line(160+i,305,160+i,330);
    line(160+i,330,95+i,330);
    line(95+i,330,120+i,305);
    line(120+i,305,160+i,305);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    int window2[] = {160+i,305, 160+i,330,95+i,330, 120+i,305, 160+i,305};
    fillpoly(5, window2);



    roadLines((390 + abs(390 - getmaxy()) / 2) - 5);

    line(0,390,639,390);  //ROAD
  }
}

int main() {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"");

  car();

  getch();
}
