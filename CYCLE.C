#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int graphdriver=DETECT,graphmode,i;
initgraph(&graphdriver,&graphmode,"c:\\turboc3\\BGI");
setcolor(CYAN);
line(10,401,630,401);
setcolor(YELLOW);
circle(40,370,30);
circle(150,370,30);
setcolor(GREEN);
line(40,370,100,370);
setcolor(MAGENTA);
line(40,370,60,340);
setcolor(RED);
line(100,370,120,340);
line(120,340,60,340);
setcolor(BLUE);
line(60,340,60,335);
line(55,335,65,335);
line(150,370,100,320);
setcolor(BROWN);
line(100,320,90,320);
getch();
closegraph();
return 0;
}