#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<stdio.h>

int main()
{

   float x,y,x1,y1,x2,y2,len,dx,dy;
   int i,gd,gm;
   printf("Enter the Value of : x1 , x2 , y1 , y2 \n");
   scanf("%f %f %f %f ", &x1,&x2,&y1,&y2);
   detectgraph(&gd,&gm);
   initgraph(&gd,&gm," ");
   dx=abs(x2-x1);
   dy=abs(y2-y1);
 
   if(dx>=dy)
   {
      len=dx;
   } 
   else
   {
     len=dy;
   }

   dx=(x2-x1)/len;
   dy=(y2-y1)/len;
   x=x1+0.5;
   y=y1+0.5;
   i=1;
   while(i<=len)
   {
      putpixel(x,y,12);
      x=x+dx;
      y=y+dy;
      i++;
   }

  closegraph(); 
   return 0;
} 