#include <iostream>
#include <graphics.h>
#include <stdio.h>
using namespace std;

void drawCircle(int xc, int yc, int r){
	int x = 0, y =r;
	int d= 3-2*r;
	while(x<=y){
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc-y,yc+x,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc-x,WHITE);
	
	if(d<=0){
		d = d+4*x+6;
	} else{
		d = d+4*(x-y)+10;
		y--;
	}
	x++;
}
}
int main(){
	initwindow(1000,800);
	int xc = 320, yc = 240, r = 100;
	drawCircle(xc,yc,r);
	getch();
	return 0;
}



