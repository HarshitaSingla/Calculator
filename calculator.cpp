#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void rect()
{
  //int gd=DETECT ,gm,l,b,clr,clr2,pattern;
  //initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
  int midx=getmaxx()/2;
  int midy=getmaxy()/2;
  rectangle(midx-120,midy-150,midx+120,midy+150);
  line(midx-120,midy-120,midx+120,midy-120);
  line(midx-120,midy-30,midx+120,midy-30);
  int i,j;
  for(i=1;i<=5;i++)
  for(j=1;j<5;j++)
  rectangle(midx-120+(10*i)+(36*(i-1)),midy-150+30+90+(30*(j-1))+(12*j),midx-120+(10*i)+(36*(i)),midy-150+30+90+(30*j)+(12*j));
  settextstyle(0,0,2);
  outtextxy(midx-120+10+12,midy-150+30+90+12+9,"+");
  outtextxy(midx-120+10*2+12+36*1,midy-150+30+90+12*1+9+30*0,"-");
  outtextxy(midx-120+10*3+12+36*2,midy-150+30+90+12*1+9+30*0,"X");
  outtextxy(midx-120+10*4+12+36*3,midy-150+30+90+12*1+9+30*0,"/");
  outtextxy(midx-120+10*5+12+36*4,midy-150+30+90+12*1+9+30*0,"=");
  outtextxy(midx-120+10+12,midy-150+30+90+12*2+9+30*1,"1");
  outtextxy(midx-120+10*2+12+36*1,midy-150+30+90+12*2+9+30*1,"2");
  outtextxy(midx-120+10*3+12+36*2,midy-150+30+90+12*2+9+30*1,"3");
  outtextxy(midx-120+10*1+12+36*0,midy-150+30+90+12*3+9+30*2,"4");
  outtextxy(midx-120+10*4+4+36*3,midy-150+30+90+12*2+9+30*1,"^2");
  outtextxy(midx-120+10*5+4+36*4,midy-150+30+90+12*2+9+30*1,"^3");
  outtextxy(midx-120+10*2+12+36*1,midy-150+30+90+12*3+9+30*2,"5");
  outtextxy(midx-120+10*3+12+36*2,midy-150+30+90+12*3+9+30*2,"6");
  outtextxy(midx-120+10*4+12+36*3,midy-150+30+90+12*3+9+30*2,"!");
  outtextxy(midx-120+10*5+2+36*4,midy-150+30+90+12*3+9+30*2,"rt");
  outtextxy(midx-120+10*1+12+36*0,midy-150+30+90+12*4+9+30*3,"7");
  outtextxy(midx-120+10*2+12+36*1,midy-150+30+90+12*4+9+30*3,"8");
  outtextxy(midx-120+10*3+12+36*2,midy-150+30+90+12*4+9+30*3,"9");
  outtextxy(midx-120+10*4+2+36*3,midy-150+30+90+12*4+9+30*3,"lg");
  settextstyle(0,0,1);
  outtextxy(midx-120+10*5+6+36*4,midy-150+30+90+12*4+12+30*3,"del");
  outtextxy(midx-38,midy-150+12,"CALCULATOR");
}
void blink(int x , int y)
{
 // int gd=DETECT ,gm,l,b,clr,clr2,pattern;
  //initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
  int midx=getmaxx()/2;
  int midy=getmaxy()/2;
  rectangle(midx-120,midy-150,midx+120,midy+150);
  line(midx-120,midy-120,midx+120,midy-120);
  line(midx-120,midy-30,midx+120,midy-30);
  int i,j;
  for(i=1;i<=5;i++)
  for(j=1;j<5;j++)
  rectangle(midx-120+(10*i)+(36*(i-1)),midy-150+30+90+(30*(j-1))+(12*j),midx-120+(10*i)+(36*(i)),midy-150+30+90+(30*j)+(12*j));
  setfillstyle(1,15);
  floodfill(midx+x,midy+y,15);
  settextstyle(0,0,2);
  outtextxy(midx-120+10+12,midy-150+30+90+12+9,"+");
  outtextxy(midx-120+10*2+12+36*1,midy-150+30+90+12*1+9+30*0,"-");
  outtextxy(midx-120+10*3+12+36*2,midy-150+30+90+12*1+9+30*0,"X");
  outtextxy(midx-120+10*4+12+36*3,midy-150+30+90+12*1+9+30*0,"/");
  outtextxy(midx-120+10*5+12+36*4,midy-150+30+90+12*1+9+30*0,"=");
  outtextxy(midx-120+10+12,midy-150+30+90+12*2+9+30*1,"1");
  outtextxy(midx-120+10*2+12+36*1,midy-150+30+90+12*2+9+30*1,"2");
  outtextxy(midx-120+10*3+12+36*2,midy-150+30+90+12*2+9+30*1,"3");
  outtextxy(midx-120+10*1+12+36*0,midy-150+30+90+12*3+9+30*2,"4");
  outtextxy(midx-120+10*4+4+36*3,midy-150+30+90+12*2+9+30*1,"^2");
  outtextxy(midx-120+10*5+4+36*4,midy-150+30+90+12*2+9+30*1,"^3");
  outtextxy(midx-120+10*2+12+36*1,midy-150+30+90+12*3+9+30*2,"5");
  outtextxy(midx-120+10*3+12+36*2,midy-150+30+90+12*3+9+30*2,"6");
  outtextxy(midx-120+10*4+12+36*3,midy-150+30+90+12*3+9+30*2,"!");
  outtextxy(midx-120+10*5+2+36*4,midy-150+30+90+12*3+9+30*2,"rt");
  outtextxy(midx-120+10*1+12+36*0,midy-150+30+90+12*4+9+30*3,"7");
  outtextxy(midx-120+10*2+12+36*1,midy-150+30+90+12*4+9+30*3,"8");
  outtextxy(midx-120+10*3+12+36*2,midy-150+30+90+12*4+9+30*3,"9");
  outtextxy(midx-120+10*4+2+36*3,midy-150+30+90+12*4+9+30*3,"lg");
  settextstyle(0,0,1);
  outtextxy(midx-120+10*5+6+36*4,midy-150+30+90+12*4+12+30*3,"del");
  outtextxy(midx-38,midy-150+12,"CALCULATOR");
  delay(100);
  cleardevice();
}



void main()
{
  clrscr();

 int gd=DETECT ,gm;
 initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

  rect();
  char a;
  while(a!='.')
  {
    a=getch();
    if(a=='+')
  {
   blink(-105,-15);
   rect();
  }
  if(a=='-')
  {
   blink(-60,-15);
   rect();
  }
 if(a=='*')
  {
   blink(10,-15);
   rect();
  }
 if(a=='/')
  {
   blink(60,-15);
   rect();
  }
  if(a=='=')
  {
   blink(100,-15);
   rect();
  }
  if(a=='1')
  {
   blink(-105,39);
   rect();
  }
  if(a=='2')
  {
   blink(-60,39);
   rect();
  }
 if(a=='3')
  {
   blink(10,39);
   rect();
  }
 if(a=='^')
  {
   int n;
   n=getch();
   if(n=='2')
   blink(60,39);
   else if(n=='3')
   blink(100,39);
   rect();
  }
  if(a=='4')
  {
   blink(-105,81);
   rect();
  }
  if(a=='5')
  {
   blink(-60,81);
   rect();
  }
 if(a=='6')
  {
   blink(10,81);
   rect();
  }
 if(a=='!')
  {
   blink(60,81);
   rect();
  }
  if(a=='r')
  {
   a=getch();
   if(a=='t')
   blink(100,81);
   rect();
  }
  if(a=='7')
  {
   blink(-105,123);
   rect();
  }
  if(a=='8')
  {
   blink(-60,123);
   rect();
  }
 if(a=='9')
  {

   blink(10,123);
   rect();
  }
 if(a=='l')
  {
   a=getch();
   if(a=='g')
   blink(60,123);
   rect();
  }
  if(a=='\b')
  {
   blink(100,123);
   rect();
  }

 }
 closegraph();
}