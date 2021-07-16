#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char ch1[25];
int x=185,y=100,m=283,n=9,score=0;
void page2();
void page4()
{
char ch[25];
int i;
gotoxy(260,2);
for(i=1;i<=5;i++)
{
sound(6000);
delay(50);
nosound();
cout<<i;
delay(1200);
gotoxy(260,2);
if(kbhit())
{
gotoxy(m,n);
gets(ch);
if(strcmpi(ch,ch1)==0)
{
y=y+50;
outtextxy(x,y,"right answer");
score=score+10;
gotoxy(71,2);
cout<<score;
}
else
{
y=y+50;
outtextxy(x,y,"wrong answer");
}
y=y+50;
n=n+6;
break;
}
if(i==5)
{
y=y+50;
outtextxy(x,y,"time over");
y=y+50;
n=n+6;
break;
}
}
}
void page3()
{
int a,v;
x=185,y=100,m=283,n=9,score=0;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(USERBIT_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(180,2,"LEVEL-1");
settextstyle(SMALL_FONT,HORIZ_DIR,6);
outtextxy(170,60,"complete the spaces...");
outtextxy(500,12,"score=");
gotoxy(71,2);
cout<<score;
for(a=1;a<=3;a++)
{
randomize();
v=random(4);
switch(a+v)
{
case 1:outtextxy(x,y,"A_P_E");
       strcpy(ch1,"apple");
       page4();
       break;
case 2:outtextxy(x,y,"_H_SI_S");
       strcpy(ch1,"physics");
       page4();
       break;
case 3:outtextxy(x,y,"p_y_h_l_g_");
       strcpy(ch1,"psychology");
       page4();
       break;
case 4:outtextxy(x,y,"E_U_A_IO_");
       strcpy(ch1,"Education");
       page4();
       break;
case 5:outtextxy(x,y,"Q_I_T_Y");
       strcpy(ch1,"Quietly");
       page4();
       break;
case 6:outtextxy(x,y,"_UC_E_F_L");
       strcpy(ch1,"Succesful");
       page4();
}
}
x=185,y=100,m=283,n=9;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(USERBIT_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(180,2,"LEVEL-2");
settextstyle(SMALL_FONT,HORIZ_DIR,6);
outtextxy(170,60,"pick the odd one out....");
outtextxy(500,12,"score=");
gotoxy(71,2);
cout<<score;
for(a=1;a<=3;a++)
{
randomize();
v=random(4);
switch(a+v)
{
case 1:outtextxy(x,y,"A   E   V   I  O");
       strcpy(ch1,"V");
       page4();
       break;
case 2:outtextxy(x,y,"Pigeon  Bat  Crow  Sparrow");
       strcpy(ch1,"Bat");
       page4();
       break;
case 3:outtextxy(x,y,"Calculus  Algebra  Geometry  Relativity");
       strcpy(ch1,"Relativity");
       page4();
       break;
case 4:outtextxy(x,y,"Virat  Sachin  Dhoni  Messi");
       strcpy(ch1,"Messi");
       page4();
       break;
case 5:outtextxy(x,y,"P    Q    W    A ");
       strcpy(ch1,"A");
       page4();
       break;
case 6:outtextxy(x,y,"cout   cin   break   Delete");
       strcpy(ch1,"Delete");
       page4();
}
}
getch();
page2();
}
void page1()
{
int gdriver=DETECT,gmode,i,x1=100,t1,t2,j=100,a;
char ch[]="1";
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(65,50,"HAVA PRESENTS");
outtextxy(155,125,"THE I.Q.");
setcolor(WHITE);
rectangle(638,478,1,1);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(50,250,"LOADING.......");
delay(1200);
for(i=0;i<400;i++)
{
if(i==0)
{
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(75,320,"1");
}
else if(i==399)
{
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(500,320," 100");
}
else
{
setcolor(YELLOW);
outtextxy(j,320,"()");
j++;
delay(30);
}
}
for(a=100;a>0;a--)
{
sound(2000);
delay(50);
nosound();
delay(a);
}
outtextxy(150,400,"lets start....");
}
void page2()
{
clrscr();
int gdriver=DETECT,gmode,i;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setbkcolor(LIGHTBLUE);
setcolor(RED);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
outtextxy(180,160,"1:New game");
outtextxy(180,195,"2:Controls");
outtextxy(180,230,"3:About Game");
outtextxy(180,265,"4:Quit");
gotoxy(290,20);
cin>>i;
closegraph();
if(i==1)
{
page3();
}
else if(i==3)
{
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setcolor(BLUE);
setbkcolor(LIGHTRED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(50,50,"THE I.Q.is a low level game designed by HAVA i.e. its");
outtextxy(50,100,"programmers HIMANSHU,ANURAG,VARUN AND AKSHAT.");
outtextxy(50,150,"Through this game one can check his/her I.Q. .");
outtextxy(50,200,"It contains 2 levels one is complete the spaces and");
outtextxy(50,250,"other is pick the odd one out.");
outtextxy(50,350,"HAVE FUN FRIENDS....");
getch();
page2();
}
else if(i==2)
{
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setcolor(BLUE);
setbkcolor(LIGHTRED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(50,50,"The game will start from LEVEL-1 which is to fill spaces.");
outtextxy(50,100,"You have 5 seconds to answer a single question,type the");
outtextxy(50,150,"answer using keyboard,if answer is right your score will");
outtextxy(50,200,"increase by 10 and in case of wrong answer nothing is");
outtextxy(50,250,"lost.There are 3 questions in 1st level.");
outtextxy(50,300,"LEVEL-2 is all about to pick the odd one out.The rest");
outtextxy(50,350,"is same as level 1st.");
outtextxy(50,400,"BEST OF LUCK FRIENDS....");
getch();
page2();
}
else if(i==4)
{
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setlinestyle(DASHED_LINE,1,THICK_WIDTH);
rectangle(638,478,1,1);
setcolor(YELLOW);
setbkcolor(LIGHTRED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,10);
outtextxy(100,150,"QUITING....");
delay(1500);
}
}
void main()
{
clrscr();
page1();
delay(1000);
page2();
}
