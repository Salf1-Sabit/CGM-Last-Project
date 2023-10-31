#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

// GLOBAL VARIABLES
const int window_width = 1024;
const int window_height = 640;
const int center_x = window_width / 2;
const int center_y = window_height / 2;

// SCENE 1 & 2 ROAD
void showRoad () {
	// ROAD BACKGROUND
  setfillstyle(SOLID_FILL, DARKGRAY); // CHANGE ROAD COLOR
	rectangle(1, center_y + 100, window_width, window_height); // ROAD BACKGROUND
	floodfill(1 + 2, center_y + 100 + 2, WHITE); // ADD ROAD COLOR

	setcolor(YELLOW); // CHANGED COLOR FOR THE ROAD MID-LINE
  setfillstyle(SOLID_FILL, YELLOW);
	for (int i = 0; i <= window_width; i += 140) { // ROAD YELLOW MID-LINE
		rectangle(1 + i, center_y + 200, 1 + i + 100, center_y + 205);
		floodfill(1 + i + 2, center_y + 200 + 2, YELLOW); // ADD ROAD COLOR
	}
}
// SCENE-1 BACKGROUND
void showSceneBackground1 () {
  int page = 0;
	for (int i = center_y - 40; 140 <= i; --i) {
		page = 1 - page;
		setactivepage(page);
		setvisualpage(1 - page);
		cleardevice();
		delay(.5);
		showRoad();
		setcolor(WHITE); // CHAGED THE BORDER COLORS

		// SKY
		setfillstyle(SOLID_FILL, LIGHTCYAN); // CHANGE SKY COLOR
		rectangle(1, 1, window_width, center_y + 100); // SKY RECT
		floodfill(1 + 2, 1 + 2, WHITE); // ADD SKY COLOR

		setcolor(YELLOW);
		circle(220, i, 100);
		setfillstyle(SOLID_FILL, YELLOW);
		floodfill(220 + 2, i + 2, YELLOW);

		setcolor(DARKGRAY); // RESET BORDER COLORS

		// BUILDING 1
		setfillstyle(SOLID_FILL, LIGHTMAGENTA); // CHANGE BUILDING COLOR
		rectangle(1, center_y - 100, 150, center_y + 100); // BUILDING RECT
		floodfill(1 + 2, center_y - 100 + 2, DARKGRAY); // ADD BUILDING COLOR

		// WINDOWS - BUILDING 1
		setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
		rectangle(1 + 25, center_y - 100 + 25, 150 - 25, center_y - 100 + 60); // WINDOW AREA
		floodfill(1 + 25 + 2, center_y - 100 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		int d1 = abs((1 + 25) - (150 - 25)) / 3;
		line(1 + 25 + d1, center_y - 100 + 25, 1 + 25 + d1, center_y - 100 + 60);
		line(1 + 25 + 2 * d1, center_y - 100 + 25, 1 + 25 + 2 * d1, center_y - 100 + 60);

		rectangle(1 + 25, center_y - 100 + 60 + 25, 150 - 25, center_y - 100 + (2 * 60)); // WINDOW AREA
		floodfill(1 + 25 + 2, center_y - 100 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		line(1 + 25 + d1, center_y - 100 + 60 + 25, 1 + 25 + d1, center_y - 100 + 2 * 60);
		line(1 + 25 + 2 * d1, center_y - 100 + 60 + 25, 1 + 25 + 2 * d1, center_y - 100 + 2 * 60);

		rectangle(1 + 25, center_y - 100 + 2 * 60 + 25, 150 - 25, center_y - 100 + (3 * 60)); // WINDOW AREA
		floodfill(1 + 25 + 2, center_y - 100 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		line(1 + 25 + d1, center_y - 100 + 2 * 60 + 25, 1 + 25 + d1, center_y - 100 + 3 * 60);
		line(1 + 25 + 2 * d1, center_y - 100 + 2 * 60 + 25, 1 + 25 + 2 * d1, center_y - 100 + 3 * 60);


		// BUILDING 2
		setfillstyle(SOLID_FILL, LIGHTBLUE); // CHANGE BUILDING COLOR
		rectangle(150, center_y - 150, 300, center_y + 100); // BUILDING RECT
		floodfill(150 + 2, center_y - 150 + 2, DARKGRAY); // ADD BUILDING COLOR

		// WINDOW - BUILDING 2
		setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
		rectangle(150 + 25, center_y - 150 + 25, 300 - 25, center_y - 150 +  60); // WINDOW AREA
		floodfill(150 + 25 + 2, center_y - 150 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((150 + 25) - (300 - 25)) / 3;
		line(150 + 25 + d1, center_y - 150 + 25, 150 + 25 + d1, center_y - 150 + 60);
		line(150 + 25 + 2 * d1, center_y - 150 + 25, 150 + 25 + 2 * d1, center_y - 150 + 60);

		rectangle(150 + 25, center_y - 150 + 60 + 25, 300 - 25, center_y - 150 + 2 * 60); // WINDOW AREA
		floodfill(150 + 25 + 2, center_y - 150 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((150 + 25) - (300 - 25)) / 3;
		line(150 + 25 + d1, center_y - 150 + 60 + 25, 150 + 25 + d1, center_y - 150 + 2 * 60);
		line(150 + 25 + 2 * d1, center_y - 150 + 60 + 25, 150 + 25 + 2 * d1, center_y - 150 + 2 * 60);

		rectangle(150 + 25, center_y - 150 + 2 * 60 + 25, 300 - 25, center_y - 150 + 3 * 60); // WINDOW AREA
		floodfill(150 + 25 + 2, center_y - 150 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((150 + 25) - (300 - 25)) / 3;
		line(150 + 25 + d1, center_y - 150 + 2 * 60 + 25, 150 + 25 + d1, center_y - 150 + 3 * 60);
		line(150 + 25 + 2 * d1, center_y - 150 + 2 * 60 + 25, 150 + 25 + 2 * d1, center_y - 150 + 3 * 60);

		rectangle(150 + 25, center_y - 150 + 3 * 60 + 25, 300 - 25, center_y - 150 + 4 * 60); // WINDOW AREA
		floodfill(150 + 25 + 2, center_y - 150 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((150 + 25) - (300 - 25)) / 3;
		line(150 + 25 + d1, center_y - 150 + 3 * 60 + 25, 150 + 25 + d1, center_y - 150 + 4 * 60);
		line(150 + 25 + 2 * d1, center_y - 150 + 3 * 60 + 25, 150 + 25 + 2 * d1, center_y - 150 + 4 * 60);

		// BUILDING 3
		setfillstyle(SOLID_FILL, BROWN); // CHANGE BUILDING COLOR
		rectangle(300, center_y - 200, 500, center_y + 100); // BUILDING RECT
		floodfill(300 + 2, center_y - 200 + 2, DARKGRAY); // ADD BUILDING COLOR

		// WINDOW - BUILDING 3
		setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
		rectangle(300 + 25, center_y - 200 + 25, 300 + 100, center_y - 200 +  60); // WINDOW AREA 1
		floodfill(300 + 25 + 2, center_y - 200 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		rectangle(300 + 100 + 25, center_y - 200 + 25, 300 + 100 + 3 * 25, center_y - 200 +  60); // WINDOW AREA 2
		floodfill(300 + 100 + 25 + 2, center_y - 200 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((300 + 25) - (300 + 100)) / 2;
		line(300 + 25 + d1, center_y - 200 + 25, 300 + 25 + d1, center_y - 200 + 60);

		rectangle(300 + 25, center_y - 200 + 60 + 25, 300 + 100, center_y - 200 + 2 * 60); // WINDOW AREA 1
		floodfill(300 + 25 + 2, center_y - 200 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		rectangle(300 + 100 + 25, center_y - 200 + 60 + 25, 300 + 100 + 3 * 25, center_y - 200 + 2 * 60); // WINDOW AREA 2
		floodfill(300 + 100 + 25 + 2, center_y - 200 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((300 + 25) - (300 + 100)) / 2;
		line(300 + 25 + d1, center_y - 200 + 60 + 25, 300 + 25 + d1, center_y - 200 + 2 * 60);

		rectangle(300 + 25, center_y - 200 + 2 * 60 + 25, 300 + 100, center_y - 200 + 3 * 60); // WINDOW AREA 1
		floodfill(300 + 25 + 2, center_y - 200 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		rectangle(300 + 100 + 25, center_y - 200 + 2 * 60 + 25, 300 + 100 + 3 * 25, center_y - 200 + 3 * 60); // WINDOW AREA 2
		floodfill(300 + 100 + 25 + 2, center_y - 200 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((300 + 25) - (300 + 100)) / 2;
		line(300 + 25 + d1, center_y - 200 + 2 * 60 + 25, 300 + 25 + d1, center_y - 200 + 3 * 60);

		rectangle(300 + 25, center_y - 200 + 3 * 60 + 25, 300 + 100, center_y - 200 + 4 * 60); // WINDOW AREA 1
		floodfill(300 + 25 + 2, center_y - 200 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		rectangle(300 + 100 + 25, center_y - 200 + 3 * 60 + 25, 300 + 100 + 3 * 25, center_y - 200 + 4 * 60); // WINDOW AREA 2
		floodfill(300 + 100 + 25 + 2, center_y - 200 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((300 + 25) - (300 + 100)) / 2;
		line(300 + 25 + d1, center_y - 200 + 3 * 60 + 25, 300 + 25 + d1, center_y - 200 + 4 * 60);

		// BUILDING 4
		setfillstyle(SOLID_FILL, LIGHTMAGENTA); // CHANGE BUILDING COLOR
		rectangle(500, center_y - 125, 650, center_y + 100); // BUILDING RECT
		floodfill(500 + 2, center_y - 125 + 2, DARKGRAY); // ADD BUILDING COLOR

		setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
		rectangle(500 + 25, center_y - 125 + 25, 650 - 25, center_y - 125 + 60); // WINDOW AREA
		floodfill(500 + 25 + 2,  center_y - 125 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((500 + 25) - (650 - 25)) / 3;
		line(500 + 25 + d1,  center_y - 125 + 25, 500 + 25 + d1, center_y - 125 + 60);
		line(500 + 25 + 2 * d1,  center_y - 125 + 25, 500 + 25 + 2 * d1, center_y - 125 + 60);

		rectangle(500 + 25, center_y - 125 + 60 + 25, 650 - 25, center_y - 125 + 2 * 60); // WINDOW AREA
		floodfill(500 + 25 + 2,  center_y - 125 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((500 + 25) - (650 - 25)) / 3;
		line(500 + 25 + d1,  center_y - 125 + 60 + 25, 500 + 25 + d1, center_y - 125 + 2 * 60);
		line(500 + 25 + 2 * d1,  center_y - 125 + 60 + 25, 500 + 25 + 2 * d1, center_y - 125 + 2 * 60);

		rectangle(500 + 25, center_y - 125 + 2 * 60 + 25, 650 - 25, center_y - 125 + 3 * 60); // WINDOW AREA
		floodfill(500 + 25 + 2,  center_y - 125 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((500 + 25) - (650 - 25)) / 3;
		line(500 + 25 + d1,  center_y - 125 + 2 * 60 + 25, 500 + 25 + d1, center_y - 125 + 3 * 60);
		line(500 + 25 + 2 * d1,  center_y - 125 + 2 * 60 + 25, 500 + 25 + 2 * d1, center_y - 125 + 3 * 60);

		// BUILDING 5
		setfillstyle(SOLID_FILL, BROWN); // CHANGE BUILDING COLOR
		rectangle(650, center_y - 225, 800, center_y + 100); // BUILDING RECT
		floodfill(650 + 2, center_y - 225 + 2, DARKGRAY); // ADD BUILDING COLOR

		setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
		rectangle(650 + 25, center_y - 225 + 25, 800 - 25, center_y - 225 + 60); // WINDOW AREA
		floodfill(650 + 25 + 2,  center_y - 225 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((650 + 25) - (800 - 25)) / 2;
		line(650 + 25 + d1,  center_y - 225 + 25, 650 + 25 + d1, center_y - 225 + 60);

		rectangle(650 + 25, center_y - 225 + 60 + 25, 800 - 25, center_y - 225 + 2 * 60); // WINDOW AREA
		floodfill(650 + 25 + 2,  center_y - 225 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((650 + 25) - (800 - 25)) / 2;
		line(650 + 25 + d1,  center_y - 225 + 60 + 25, 650 + 25 + d1, center_y - 225 + 2 * 60);

		rectangle(650 + 25, center_y - 225 + 2 * 60 + 25, 800 - 25, center_y - 225 + 3 * 60); // WINDOW AREA
		floodfill(650 + 25 + 2,  center_y - 225 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((650 + 25) - (800 - 25)) / 2;
		line(650 + 25 + d1,  center_y - 225 + 2 * 60 + 25, 650 + 25 + d1, center_y - 225 + 3 * 60);

		rectangle(650 + 25, center_y - 225 + 3 * 60 + 25, 800 - 25, center_y - 225 + 4 * 60); // WINDOW AREA
		floodfill(650 + 25 + 2,  center_y - 225 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((650 + 25) - (800 - 25)) / 2;
		line(650 + 25 + d1,  center_y - 225 + 3 * 60 + 25, 650 + 25 + d1, center_y - 225 + 4 * 60);

		rectangle(650 + 25, center_y - 225 + 4 * 60 + 25, 800 - 25, center_y - 225 + 5 * 60); // WINDOW AREA
		floodfill(650 + 25 + 2,  center_y - 225 + 4 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((650 + 25) - (800 - 25)) / 2;
		line(650 + 25 + d1,  center_y - 225 + 4 * 60 + 25, 650 + 25 + d1, center_y - 225 + 5 * 60);

		// BUILDING 6
		setfillstyle(SOLID_FILL, LIGHTBLUE); // CHANGE BUILDING COLOR
		rectangle(800, center_y - 175, 950, center_y + 100); // BUILDING RECT
		floodfill(800 + 2, center_y - 175 + 2, DARKGRAY); // ADD BUILDING COLOR

		setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
		rectangle(800 + 25, center_y - 175 + 25, 950 - 25, center_y - 175 + 60); // WINDOW AREA
		floodfill(800 + 25 + 2, center_y - 175 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((800 + 25) - (950 - 25)) / 3;
		line(800 + 25 + d1,  center_y - 175 + 25, 800 + 25 + d1, center_y - 175 + 60);
		line(800 + 25 + 2 * d1,  center_y - 175 + 25, 800 + 25 + 2 * d1, center_y - 175 + 60);

		rectangle(800 + 25, center_y - 175 + 60 + 25, 950 - 25, center_y - 175 + 2 * 60); // WINDOW AREA
		floodfill(800 + 25 + 2, center_y - 175 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((800 + 25) - (950 - 25)) / 3;
		line(800 + 25 + d1,  center_y - 175 + 60 + 25, 800 + 25 + d1, center_y - 175 + 2 * 60);
		line(800 + 25 + 2 * d1,  center_y - 175 + 60 + 25, 800 + 25 + 2 * d1, center_y - 175 + 2 * 60);

		rectangle(800 + 25, center_y - 175 + 2 * 60 + 25, 950 - 25, center_y - 175 + 3 * 60); // WINDOW AREA
		floodfill(800 + 25 + 2, center_y - 175 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((800 + 25) - (950 - 25)) / 3;
		line(800 + 25 + d1,  center_y - 175 + 2 * 60 + 25, 800 + 25 + d1, center_y - 175 + 3 * 60);
		line(800 + 25 + 2 * d1,  center_y - 175 + 2 * 60 + 25, 800 + 25 + 2 * d1, center_y - 175 + 3 * 60);

		rectangle(800 + 25, center_y - 175 + 3 * 60 + 25, 950 - 25, center_y - 175 + 4 * 60); // WINDOW AREA
		floodfill(800 + 25 + 2, center_y - 175 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((800 + 25) - (950 - 25)) / 3;
		line(800 + 25 + d1,  center_y - 175 + 3 * 60 + 25, 800 + 25 + d1, center_y - 175 + 4 * 60);
		line(800 + 25 + 2 * d1,  center_y - 175 + 3 * 60 + 25, 800 + 25 + 2 * d1, center_y - 175 + 4 * 60);

		// BUILDING 7
		setfillstyle(SOLID_FILL, LIGHTMAGENTA); // CHANGE BUILDING COLOR
		rectangle(950, center_y - 120, 1100, center_y + 100); // BUILDING RECT
		floodfill(950 + 2, center_y - 120 + 2, DARKGRAY); // ADD BUILDING COLOR

		setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
		rectangle(950 + 25, center_y - 120 + 25, 1100 - 25, center_y - 120 + 60); // WINDOW AREA
		floodfill(950 + 25 + 2, center_y - 120 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((950 + 25) - (1100 - 25)) / 3;
		line(950 + 25 + d1,  center_y - 120 + 25, 950 + 25 + d1, center_y - 120 + 60);
		line(950 + 25 + 2 * d1,  center_y - 120 + 25, 950 + 25 + 2 * d1, center_y - 120 + 60);

		rectangle(950 + 25, center_y - 120 + 60 + 25, 1100 - 25, center_y - 120 + 2 * 60); // WINDOW AREA
		floodfill(950 + 25 + 2, center_y - 120 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((950 + 25) - (1100 - 25)) / 3;
		line(950 + 25 + d1,  center_y - 120 + 60 + 25, 950 + 25 + d1, center_y - 120 + 2 * 60);
		line(950 + 25 + 2 * d1,  center_y - 120 + 60 + 25, 950 + 25 + 2 * d1, center_y - 120 + 2 * 60);

		rectangle(950 + 25, center_y - 120 + 2 * 60 + 25, 1100 - 25, center_y - 120 + 3 * 60); // WINDOW AREA
		floodfill(950 + 25 + 2, center_y - 120 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
		d1 = abs((950 + 25) - (1100 - 25)) / 3;
		line(950 + 25 + d1,  center_y - 120 + 2 * 60 + 25, 950 + 25 + d1, center_y - 120 + 3 * 60);
		line(950 + 25 + 2 * d1,  center_y - 120 + 2 * 60 + 25, 950 + 25 + 2 * d1, center_y - 120 + 3 * 60);
	}

}

void showSceneBackground2 () {
	showRoad();
	setcolor(WHITE); // CHAGED THE BORDER COLORS

	// SKY
	setfillstyle(SOLID_FILL, LIGHTCYAN); // CHANGE SKY COLOR
	rectangle(1, 1, window_width, center_y + 100); // SKY RECT
	floodfill(1 + 2, 1 + 2, WHITE); // ADD SKY COLOR

	setcolor(YELLOW);
	circle(220, 140, 100);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(220 + 2, 140 + 2, YELLOW);

	setcolor(DARKGRAY); // RESET BORDER COLORS

	// BUILDING 1
	setfillstyle(SOLID_FILL, LIGHTMAGENTA); // CHANGE BUILDING COLOR
	rectangle(1, center_y - 100, 150, center_y + 100); // BUILDING RECT
	floodfill(1 + 2, center_y - 100 + 2, DARKGRAY); // ADD BUILDING COLOR

	// WINDOWS - BUILDING 1
	setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
	rectangle(1 + 25, center_y - 100 + 25, 150 - 25, center_y - 100 + 60); // WINDOW AREA
	floodfill(1 + 25 + 2, center_y - 100 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	int d1 = abs((1 + 25) - (150 - 25)) / 3;
	line(1 + 25 + d1, center_y - 100 + 25, 1 + 25 + d1, center_y - 100 + 60);
	line(1 + 25 + 2 * d1, center_y - 100 + 25, 1 + 25 + 2 * d1, center_y - 100 + 60);

	rectangle(1 + 25, center_y - 100 + 60 + 25, 150 - 25, center_y - 100 + (2 * 60)); // WINDOW AREA
	floodfill(1 + 25 + 2, center_y - 100 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	line(1 + 25 + d1, center_y - 100 + 60 + 25, 1 + 25 + d1, center_y - 100 + 2 * 60);
	line(1 + 25 + 2 * d1, center_y - 100 + 60 + 25, 1 + 25 + 2 * d1, center_y - 100 + 2 * 60);

	rectangle(1 + 25, center_y - 100 + 2 * 60 + 25, 150 - 25, center_y - 100 + (3 * 60)); // WINDOW AREA
	floodfill(1 + 25 + 2, center_y - 100 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	line(1 + 25 + d1, center_y - 100 + 2 * 60 + 25, 1 + 25 + d1, center_y - 100 + 3 * 60);
	line(1 + 25 + 2 * d1, center_y - 100 + 2 * 60 + 25, 1 + 25 + 2 * d1, center_y - 100 + 3 * 60);


	// BUILDING 2
	setfillstyle(SOLID_FILL, LIGHTBLUE); // CHANGE BUILDING COLOR
	rectangle(150, center_y - 150, 300, center_y + 100); // BUILDING RECT
	floodfill(150 + 2, center_y - 150 + 2, DARKGRAY); // ADD BUILDING COLOR

	// WINDOW - BUILDING 2
	setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
	rectangle(150 + 25, center_y - 150 + 25, 300 - 25, center_y - 150 +  60); // WINDOW AREA
	floodfill(150 + 25 + 2, center_y - 150 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((150 + 25) - (300 - 25)) / 3;
	line(150 + 25 + d1, center_y - 150 + 25, 150 + 25 + d1, center_y - 150 + 60);
	line(150 + 25 + 2 * d1, center_y - 150 + 25, 150 + 25 + 2 * d1, center_y - 150 + 60);

	rectangle(150 + 25, center_y - 150 + 60 + 25, 300 - 25, center_y - 150 + 2 * 60); // WINDOW AREA
	floodfill(150 + 25 + 2, center_y - 150 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((150 + 25) - (300 - 25)) / 3;
	line(150 + 25 + d1, center_y - 150 + 60 + 25, 150 + 25 + d1, center_y - 150 + 2 * 60);
	line(150 + 25 + 2 * d1, center_y - 150 + 60 + 25, 150 + 25 + 2 * d1, center_y - 150 + 2 * 60);

	rectangle(150 + 25, center_y - 150 + 2 * 60 + 25, 300 - 25, center_y - 150 + 3 * 60); // WINDOW AREA
	floodfill(150 + 25 + 2, center_y - 150 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((150 + 25) - (300 - 25)) / 3;
	line(150 + 25 + d1, center_y - 150 + 2 * 60 + 25, 150 + 25 + d1, center_y - 150 + 3 * 60);
	line(150 + 25 + 2 * d1, center_y - 150 + 2 * 60 + 25, 150 + 25 + 2 * d1, center_y - 150 + 3 * 60);

	rectangle(150 + 25, center_y - 150 + 3 * 60 + 25, 300 - 25, center_y - 150 + 4 * 60); // WINDOW AREA
	floodfill(150 + 25 + 2, center_y - 150 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((150 + 25) - (300 - 25)) / 3;
	line(150 + 25 + d1, center_y - 150 + 3 * 60 + 25, 150 + 25 + d1, center_y - 150 + 4 * 60);
	line(150 + 25 + 2 * d1, center_y - 150 + 3 * 60 + 25, 150 + 25 + 2 * d1, center_y - 150 + 4 * 60);

	// BUILDING 3
	setfillstyle(SOLID_FILL, BROWN); // CHANGE BUILDING COLOR
	rectangle(300, center_y - 200, 500, center_y + 100); // BUILDING RECT
	floodfill(300 + 2, center_y - 200 + 2, DARKGRAY); // ADD BUILDING COLOR

	// WINDOW - BUILDING 3
	setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
	rectangle(300 + 25, center_y - 200 + 25, 300 + 100, center_y - 200 +  60); // WINDOW AREA 1
	floodfill(300 + 25 + 2, center_y - 200 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	rectangle(300 + 100 + 25, center_y - 200 + 25, 300 + 100 + 3 * 25, center_y - 200 +  60); // WINDOW AREA 2
	floodfill(300 + 100 + 25 + 2, center_y - 200 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((300 + 25) - (300 + 100)) / 2;
	line(300 + 25 + d1, center_y - 200 + 25, 300 + 25 + d1, center_y - 200 + 60);

	rectangle(300 + 25, center_y - 200 + 60 + 25, 300 + 100, center_y - 200 + 2 * 60); // WINDOW AREA 1
	floodfill(300 + 25 + 2, center_y - 200 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	rectangle(300 + 100 + 25, center_y - 200 + 60 + 25, 300 + 100 + 3 * 25, center_y - 200 + 2 * 60); // WINDOW AREA 2
	floodfill(300 + 100 + 25 + 2, center_y - 200 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((300 + 25) - (300 + 100)) / 2;
	line(300 + 25 + d1, center_y - 200 + 60 + 25, 300 + 25 + d1, center_y - 200 + 2 * 60);

	rectangle(300 + 25, center_y - 200 + 2 * 60 + 25, 300 + 100, center_y - 200 + 3 * 60); // WINDOW AREA 1
	floodfill(300 + 25 + 2, center_y - 200 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	rectangle(300 + 100 + 25, center_y - 200 + 2 * 60 + 25, 300 + 100 + 3 * 25, center_y - 200 + 3 * 60); // WINDOW AREA 2
	floodfill(300 + 100 + 25 + 2, center_y - 200 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((300 + 25) - (300 + 100)) / 2;
	line(300 + 25 + d1, center_y - 200 + 2 * 60 + 25, 300 + 25 + d1, center_y - 200 + 3 * 60);

	rectangle(300 + 25, center_y - 200 + 3 * 60 + 25, 300 + 100, center_y - 200 + 4 * 60); // WINDOW AREA 1
	floodfill(300 + 25 + 2, center_y - 200 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	rectangle(300 + 100 + 25, center_y - 200 + 3 * 60 + 25, 300 + 100 + 3 * 25, center_y - 200 + 4 * 60); // WINDOW AREA 2
	floodfill(300 + 100 + 25 + 2, center_y - 200 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((300 + 25) - (300 + 100)) / 2;
	line(300 + 25 + d1, center_y - 200 + 3 * 60 + 25, 300 + 25 + d1, center_y - 200 + 4 * 60);

	// BUILDING 4
	setfillstyle(SOLID_FILL, LIGHTMAGENTA); // CHANGE BUILDING COLOR
	rectangle(500, center_y - 125, 650, center_y + 100); // BUILDING RECT
	floodfill(500 + 2, center_y - 125 + 2, DARKGRAY); // ADD BUILDING COLOR

	setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
	rectangle(500 + 25, center_y - 125 + 25, 650 - 25, center_y - 125 + 60); // WINDOW AREA
	floodfill(500 + 25 + 2,  center_y - 125 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((500 + 25) - (650 - 25)) / 3;
	line(500 + 25 + d1,  center_y - 125 + 25, 500 + 25 + d1, center_y - 125 + 60);
	line(500 + 25 + 2 * d1,  center_y - 125 + 25, 500 + 25 + 2 * d1, center_y - 125 + 60);

	rectangle(500 + 25, center_y - 125 + 60 + 25, 650 - 25, center_y - 125 + 2 * 60); // WINDOW AREA
	floodfill(500 + 25 + 2,  center_y - 125 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((500 + 25) - (650 - 25)) / 3;
	line(500 + 25 + d1,  center_y - 125 + 60 + 25, 500 + 25 + d1, center_y - 125 + 2 * 60);
	line(500 + 25 + 2 * d1,  center_y - 125 + 60 + 25, 500 + 25 + 2 * d1, center_y - 125 + 2 * 60);

	rectangle(500 + 25, center_y - 125 + 2 * 60 + 25, 650 - 25, center_y - 125 + 3 * 60); // WINDOW AREA
	floodfill(500 + 25 + 2,  center_y - 125 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((500 + 25) - (650 - 25)) / 3;
	line(500 + 25 + d1,  center_y - 125 + 2 * 60 + 25, 500 + 25 + d1, center_y - 125 + 3 * 60);
	line(500 + 25 + 2 * d1,  center_y - 125 + 2 * 60 + 25, 500 + 25 + 2 * d1, center_y - 125 + 3 * 60);

	// BUILDING 5
	setfillstyle(SOLID_FILL, BROWN); // CHANGE BUILDING COLOR
	rectangle(650, center_y - 225, 800, center_y + 100); // BUILDING RECT
	floodfill(650 + 2, center_y - 225 + 2, DARKGRAY); // ADD BUILDING COLOR

	setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
	rectangle(650 + 25, center_y - 225 + 25, 800 - 25, center_y - 225 + 60); // WINDOW AREA
	floodfill(650 + 25 + 2,  center_y - 225 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((650 + 25) - (800 - 25)) / 2;
	line(650 + 25 + d1,  center_y - 225 + 25, 650 + 25 + d1, center_y - 225 + 60);

	rectangle(650 + 25, center_y - 225 + 60 + 25, 800 - 25, center_y - 225 + 2 * 60); // WINDOW AREA
	floodfill(650 + 25 + 2,  center_y - 225 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((650 + 25) - (800 - 25)) / 2;
	line(650 + 25 + d1,  center_y - 225 + 60 + 25, 650 + 25 + d1, center_y - 225 + 2 * 60);

	rectangle(650 + 25, center_y - 225 + 2 * 60 + 25, 800 - 25, center_y - 225 + 3 * 60); // WINDOW AREA
	floodfill(650 + 25 + 2,  center_y - 225 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((650 + 25) - (800 - 25)) / 2;
	line(650 + 25 + d1,  center_y - 225 + 2 * 60 + 25, 650 + 25 + d1, center_y - 225 + 3 * 60);

	rectangle(650 + 25, center_y - 225 + 3 * 60 + 25, 800 - 25, center_y - 225 + 4 * 60); // WINDOW AREA
	floodfill(650 + 25 + 2,  center_y - 225 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((650 + 25) - (800 - 25)) / 2;
	line(650 + 25 + d1,  center_y - 225 + 3 * 60 + 25, 650 + 25 + d1, center_y - 225 + 4 * 60);

	rectangle(650 + 25, center_y - 225 + 4 * 60 + 25, 800 - 25, center_y - 225 + 5 * 60); // WINDOW AREA
	floodfill(650 + 25 + 2,  center_y - 225 + 4 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((650 + 25) - (800 - 25)) / 2;
	line(650 + 25 + d1,  center_y - 225 + 4 * 60 + 25, 650 + 25 + d1, center_y - 225 + 5 * 60);

	// BUILDING 6
	setfillstyle(SOLID_FILL, LIGHTBLUE); // CHANGE BUILDING COLOR
	rectangle(800, center_y - 175, 950, center_y + 100); // BUILDING RECT
	floodfill(800 + 2, center_y - 175 + 2, DARKGRAY); // ADD BUILDING COLOR

	setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
	rectangle(800 + 25, center_y - 175 + 25, 950 - 25, center_y - 175 + 60); // WINDOW AREA
	floodfill(800 + 25 + 2, center_y - 175 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((800 + 25) - (950 - 25)) / 3;
	line(800 + 25 + d1,  center_y - 175 + 25, 800 + 25 + d1, center_y - 175 + 60);
	line(800 + 25 + 2 * d1,  center_y - 175 + 25, 800 + 25 + 2 * d1, center_y - 175 + 60);

	rectangle(800 + 25, center_y - 175 + 60 + 25, 950 - 25, center_y - 175 + 2 * 60); // WINDOW AREA
	floodfill(800 + 25 + 2, center_y - 175 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((800 + 25) - (950 - 25)) / 3;
	line(800 + 25 + d1,  center_y - 175 + 60 + 25, 800 + 25 + d1, center_y - 175 + 2 * 60);
	line(800 + 25 + 2 * d1,  center_y - 175 + 60 + 25, 800 + 25 + 2 * d1, center_y - 175 + 2 * 60);

	rectangle(800 + 25, center_y - 175 + 2 * 60 + 25, 950 - 25, center_y - 175 + 3 * 60); // WINDOW AREA
	floodfill(800 + 25 + 2, center_y - 175 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((800 + 25) - (950 - 25)) / 3;
	line(800 + 25 + d1,  center_y - 175 + 2 * 60 + 25, 800 + 25 + d1, center_y - 175 + 3 * 60);
	line(800 + 25 + 2 * d1,  center_y - 175 + 2 * 60 + 25, 800 + 25 + 2 * d1, center_y - 175 + 3 * 60);

	rectangle(800 + 25, center_y - 175 + 3 * 60 + 25, 950 - 25, center_y - 175 + 4 * 60); // WINDOW AREA
	floodfill(800 + 25 + 2, center_y - 175 + 3 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((800 + 25) - (950 - 25)) / 3;
	line(800 + 25 + d1,  center_y - 175 + 3 * 60 + 25, 800 + 25 + d1, center_y - 175 + 4 * 60);
	line(800 + 25 + 2 * d1,  center_y - 175 + 3 * 60 + 25, 800 + 25 + 2 * d1, center_y - 175 + 4 * 60);

	// BUILDING 7
	setfillstyle(SOLID_FILL, LIGHTMAGENTA); // CHANGE BUILDING COLOR
	rectangle(950, center_y - 120, 1100, center_y + 100); // BUILDING RECT
	floodfill(950 + 2, center_y - 120 + 2, DARKGRAY); // ADD BUILDING COLOR

	setfillstyle(SOLID_FILL, WHITE); // WINDOW COLOR
	rectangle(950 + 25, center_y - 120 + 25, 1100 - 25, center_y - 120 + 60); // WINDOW AREA
	floodfill(950 + 25 + 2, center_y - 120 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((950 + 25) - (1100 - 25)) / 3;
	line(950 + 25 + d1,  center_y - 120 + 25, 950 + 25 + d1, center_y - 120 + 60);
	line(950 + 25 + 2 * d1,  center_y - 120 + 25, 950 + 25 + 2 * d1, center_y - 120 + 60);

	rectangle(950 + 25, center_y - 120 + 60 + 25, 1100 - 25, center_y - 120 + 2 * 60); // WINDOW AREA
	floodfill(950 + 25 + 2, center_y - 120 + 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((950 + 25) - (1100 - 25)) / 3;
	line(950 + 25 + d1,  center_y - 120 + 60 + 25, 950 + 25 + d1, center_y - 120 + 2 * 60);
	line(950 + 25 + 2 * d1,  center_y - 120 + 60 + 25, 950 + 25 + 2 * d1, center_y - 120 + 2 * 60);

	rectangle(950 + 25, center_y - 120 + 2 * 60 + 25, 1100 - 25, center_y - 120 + 3 * 60); // WINDOW AREA
	floodfill(950 + 25 + 2, center_y - 120 + 2 * 60 + 25 + 2, DARKGRAY); // ADD BUILDING COLOR
	d1 = abs((950 + 25) - (1100 - 25)) / 3;
	line(950 + 25 + d1,  center_y - 120 + 2 * 60 + 25, 950 + 25 + d1, center_y - 120 + 3 * 60);
	line(950 + 25 + 2 * d1,  center_y - 120 + 2 * 60 + 25, 950 + 25 + 2 * d1, center_y - 120 + 3 * 60);
}

int add = 1;
void draw_moving_car (int i) {
        // Set color of car as red
        setcolor(RED);

        // These lines for bonnet and
        // body of car
        int d = 140;
        setfillstyle(SOLID_FILL, RED);
        rectangle(0 + i, 300 + d, 210 + i, 330 + d);
        floodfill(0 + i + 2, 300 + d + 2, RED);
        int poly[] = {50 + i, 300 + d, 75 + i, 270 + d, 150 + i, 270 + d, 165 + i, 300 + d, 50 + i, 300 + d};
        setcolor(CYAN);
        setfillstyle(SOLID_FILL, CYAN);
        fillpoly(5, poly);
//        line(50 + i, 300, 75 + i, 270);
//        line(75 + i, 270, 150 + i, 270);
//        line(150 + i, 270, 165 + i, 300);
//        line(0 + i, 300, 0 + i, 330);
//        line(210 + i, 300, 210 + i, 330);

        // For left wheel of car
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        circle(65 + i, center_y + d, 15);
        floodfill(65 + i + 6, center_y + d + 6, BLACK);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(65 + i, center_y + d, 5);
        floodfill(65 + i + 2, center_y + d + 2, BLACK);

        // For right wheel of car
        setfillstyle(SOLID_FILL, BLACK);
        circle(145 + i, center_y + d, 15);
        floodfill(145 + i + 6, center_y + d + 6, BLACK);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(145 + i, center_y + d, 2);
        floodfill(65 + i + 2, center_y + d + 2, BLACK);
}

int main () {
	initwindow(window_width, window_height);

	// INITIAL BG WITH ELEVATED SUN
	showSceneBackground1();

	int page = 0;
	for (int i = 1; i <= window_width - 300; ++i) {
		setactivepage(page);
		setvisualpage(page ^ 1);
		cleardevice();
		showSceneBackground2();

		draw_moving_car(i);


		page ^= 1;
	}

  getch();
  closegraph();
}
