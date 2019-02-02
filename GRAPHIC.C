#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
int graphdriver=DETECT,graphmode,i;
initgraph(&graphdriver,&graphmode,"c:\\turboc3\\BGI");

  setcolor(RED);
  setfillstyle(SOLID_FILL,RED);
  ellipse(100,260,0,360,90,100);
  floodfill(100,260,RED);
  setcolor(BLACK);
  for(i=0;i<20;i++)
{
  setcolor(RED);
 ellipse(80,174,0,240,55,20-i);
 ellipse(40,190,90,290,40,10-i);
}
 setcolor(BLACK);
 for(i=1;i<15;i++)
{
   setcolor(BLACK);
 line(90,220+i,140,230+i);
}



for(i=0;i<20;i++)
{
   setcolor(BLACK);
  line(140,230+i,180,205+i);
}

 for(i=0;i<100;i++)
{
   setcolor(WHITE);
arc(120,242,165,370,20-i);
arc(160,233,190,30,18-i);
}
 setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(130,244,5);
floodfill(130,244,BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(170,232,5);
floodfill(170,232,BLACK);

line(120,280,143,250);
line(143,250,185,260);
for(i=1;i<15;i++)

{
   setcolor(YELLOW);
line(120+(i+2),280-(2*i),185-(2*i),260-i);
}

for(i=1;i<300;i+=2)

{
  setcolor(YELLOW);
arc(155,280+(i+2),180,290+i,35-i);
}

 line(175,263,165,315);
for(i=0;i<9;i+=2)
{
  setcolor(YELLOW);
line(120,280+i,165,313+i);
}
for(i=0;i<10;i+=2)
{
  setcolor(YELLOW);
line(165+i,265,165,315);
}

for(i=374;i<416;i++)
{
  setcolor(6);
arc(120,i,28+i,172-i,60);
}
setcolor(8);
for(i=1;i<7;i++)
{
  setcolor(BROWN);
line(10-i,260,3,230);
}
setcolor(8);
for(i=1;i<7;i++)
{
  setcolor(BROWN);
line(0+i,260,0,280);
}

setcolor(BLUE);
circle(200,180,10);


settextstyle(DEFAULT_FONT,0,2);
outtextxy(140,80,"HELLO FRIENDS");



   setcolor(RED);
  settextstyle(DEFAULT_FONT,0,2);
outtextxy(250,400,"MADE BY: JAYANT KUMAR" );  setcolor(BLUE);

 circle(210,150,10);






























































getch();
closegraph();
return 0;
}
