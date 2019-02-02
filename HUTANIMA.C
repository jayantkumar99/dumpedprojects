#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
 int graphdriver=0,graphmode,j,i,k;
 initgraph(&graphdriver,&graphmode,"c:\\turboc3\\BGI");
 for(j=340;j<450;j+=10)
 {
 setcolor(8);
 line(j,240,j,303);
 }
   for(j=240;j<300;j+=2)
{
setcolor(8);
line(340,j,449,j);
}
line(450,240,450,290);
line(450,290,340,305);
line(280,280,340,305);
line(290,285,290,250);
line(318,255,318,295);
line(280,230,280,280);
  for(j=250;j<280;j++)
{
setcolor(YELLOW);
line(290,j,318,j);
}
setcolor(BROWN);
line(295,200,420,200);
line(300,200,280,230);
line(300,200,340,240);
line(340,240,450,240);
line(420,200,450,240);
line(300,205,420,205);
line(305,210,425,210);
line(310,215,430,215);
line(315,220,435,220);
line(320,225,440,225);
line(325,230,445,230);
line(330,235,450,235);
setcolor(BROWN);
line(310,200,355,245);
line(320,200,365,245);
line(330,200,375,245);
line(340,200,385,245);
line(350,200,395,245);
line(360,200,405,245);
line(370,200,415,245);
line(380,200,425,245);
line(390,200,435,245);
line(400,200,445,245);
line(410,200,455,245);

 setcolor(8);
for(j=510;j<900;j+=10)
{
  setcolor(8);
line(j,230,j,330);
}
  for(j=230;j<330;j+=2)
{
  setcolor(8);
line(503,j,710,j);
}
  line(435,295,435,305);
  line(435,305,510,330);
  line(460,265,460,310);
  line(485,268,485,320);
  line(510,330,650,328);
for(j=256;j<310;j++)
{
 setcolor(YELLOW);
line(460,j,485,j);
}
     setcolor(BROWN);
line(480,160,640,160);
line(510,230,650,230);
line(435,220,480,160);
line(480,160,510,230);
line(475,165,645,165);
line(478,170,650,170);
line(481,175,655,175);
line(484,180,660,180);
line(487,185,665,185);
line(490,190,670,190);
line(493,195,675,195);
line(496,200,680,200);
line(499,205,685,205);
line(500,210,690,210);
line(501,215,695,215);
line(502,220,700,220);
line(503,230,710,225);
line(490,160,520,235);
line(500,160,530,235);
line(510,160,540,235);
line(520,160,550,235);
line(530,160,560,235);
line(540,160,570,235);
line(550,160,580,235);
line(560,160,590,235);
line(570,160,600,235);
line(580,160,610,235);
line(590,160,620,235);
line(600,160,630,235);
line(610,160,640,235);
line(620,160,650,235);
line(630,160,660,235);
line(640,160,670,235);
 setcolor(BROWN);
line(630,160,620,120);
line(620,120,595,100);
line(630,120,600,100);
line(630,118,635,95);
setcolor(LIGHTGREEN);
 arc(610,110,190,300,15);
 arc(590,110,170,300,15);
 arc(570,105,170,300,20);
 arc(550,75,170,300,30);
 arc(540,45,170,300,30);
 arc(560,30,60,190,30);
 arc(535,40,90,270,30);
 setcolor(LIGHTBLUE);
 arc(80,80,90,270,20);
 arc(90,85,190,300,20);
 arc(85,78,360,180,20);
 arc(120,78,360,180,10);
 arc(150,78,360,180,10);
 arc(120,100,170,360,20);
 arc(140,90,260,50,25);
 arc(100,80,90,270,10);
 arc(110,85,190,300,10);
 arc(105,78,360,180,10);
setcolor(WHITE);
line(0,370,580,370);
setfillstyle(SOLID_FILL,BLACK);
circle(40,40,35);
floodfill(40,40,BLACK);
 setcolor(BLUE);
rectangle(100+k,300,200+k,350);
setcolor(GREEN);
circle(120+k,360,10);
circle(180+k,360,10);
delay(10);

setcolor(WHITE);
outtextxy(200,400,"*****MADE BY JAYANT KUMAR*****");
getch() ;










































































































































   cleardevice();
getch();
closegraph();
return 0;
}
