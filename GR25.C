#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include"intro2.h"

int i,j,ch;
int count=0;
int counts=0;
char n[10];
char elements[10][10];
char qelements[10][10];
void push();
void pop();
void stack();

void insert();  void rem();
void queue();
int front=0;
int rear=0;
void insert()
{
		int j=0;
		bar(100,50,500,100);
	outtextxy(100,50,"Enter any number: ");
	gotoxy(50,4);
	scanf("%s",qelements[rear++]);
	bar(50,30,500,100);


      j=60-20*(count-1);
	      for(i=0;i<=420-20*count ;i++)
	{
						//	setfillstyle(1,10);
		//bar(350,j-2-i,475,j+18-i);
		setcolor(0);
		bar(j-1+i,150,j+34+i,190);
		setcolor(15);
		//rectangle(350,j-3-i,430,j+17-i);
		rectangle(j+i,150,j+35+i,190);

		outtextxy(j+8+i,165,qelements[rear-1]);
	       //	outtextxy(j+i,160,elements[count-1]);
		//floodfill(1,1,2);
		delay(5);
      }
      /*if(count>1)
		outtextxy(436,j+20,"<-top");
      if(count==1)
		bar(350,420,450,422);
	bar(325,220,550,140);     */
						// j--;
}


void rem()
{
	int j=0;
      /*	if(count==0)
	{
		printf("Invalid operation");
		exit(0);
	} */

      j=401-20*(count-1);
	      for(i=460;i<=640 ;i++)
	{
						//	setfillstyle(1,10);
		setcolor(2);
		bar(i,150,i+35,190);
		setcolor(6);
		//rectangle(350,j-3-i,430,j+17-i);
		rectangle(i+1,150,i+36,190);
		outtextxy(i+10,160,qelements[front]);
		//outtextxy(375,j+i,elements[count-1]);

		delay(5);
      }

       for(j=1;j<(rear-front);j++)
       {
       for(i=460-j*40;i<=460-(j-1)*40 ;i++)
       {
						//	setfillstyle(1,10);
		setcolor(0);
		bar(i,150,i+35,190);
		setcolor(15);
		//rectangle(350,j-3-i,430,j+17-i);
		rectangle(i+1,150,i+36,190);
		outtextxy(i+10,160,qelements[front+j]);
		//outtextxy(375,j+i,elements[count-1]);

		delay(5);
      }
      }
      front++;
						// j--;

}



void queue()
{
setcolor(6);
setfillstyle(1,3);//8small rectangle fill colour

 setcolor(2); //small r. border colour

rectangle(15,340,500,450); //rectangle size
floodfill(19,350,2);
						//setfillstyle(1,9);
						//floodfill(150,150,10);
						//setfillstyle(1,2);
bar(70,370,150,400);
setcolor(7);               //color of text
outtextxy(30,360,"Queue"); //To enter text
setcolor(6);
//outtextxy(220,60,"Enter number:-");
setcolor(4);
//setfillstyle(1,2);
bar(70,370,150,400);
outtextxy(157,380,"1.Insert");

bar(70,370,150,400);
outtextxy(259,382,"2.Remove");

bar(70,370,150,400);
outtextxy(379,382,"3.Back");
setcolor(10);    //2line color
line(100,120,500,120);
line(100,225,500,225);
//line(500,220,500,450);

setfillstyle(1,2);
setcolor(6);
    setfillstyle(1,0);
     j=1;

    do
    {
	bar(100,50,500,100);
	outtextxy(100,50,"Enter any choice: ");
	gotoxy(50,4);
	scanf("%d",&ch);
	bar(50,30,500,100);
      switch(ch)
      {
       case 1:if(rear==8)
       {
	outtextxy(100,50,"Queue Full , can't insert ");
	getch();
	}
		else
		{
			count++;
			insert();

		}
	      break;

       case 2:if(count>0)
	      {
	      count--;
	      rem();

	      }
	      else
	      {
	     // rem();
	      outtextxy(100,50,"Queue empty, can't delete... ");
	      getch();

	      }
		break;
       case 3: cleardevice();
		 break;

      }
    }while(ch!=3);

}

void main()
{
    int gd=DETECT,gm;
    int n;
    int ch,mch;
    //char mch;
//clrscr();
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//Main menu
    do
    {   ///settextstyle(2,0,7);
    // settextstyle(8,0,1);




    setfillstyle(1,5);//8small rectangle fill colour


 setcolor(15); //small r. border colour

//rectangle(15,340,500,450); //rectangle size
floodfill(19,350,1);
    setfillstyle(0,1);
  // settextstyle(3,0,3);   //set size of text
     outtextxy(120,50,"Graphical Representation of Data Struture");
     // settextstyle(2,0,4);
       setcolor(11);
    outtextxy(100,100,"Enter your choice:-");
    //setcolor(0);
    outtextxy(100,130,"1.Introduction");
    outtextxy(100,160,"2.Working of Stack");
    outtextxy(100,190,"3.Working of Queue");
    outtextxy(100,220,"4.Exit");




  /*   outtextxy(100,50,"Graphical Representation of Data Struture");
     // settextstyle(2,0,4);
    printf("\n\n\n\n\nEnter your choice:- \n\n\n1.Introduction \n\n\n");
    printf("2.Working of Stack \n\n\n3.Working of Queue\n\n\n4.Exit ");
 //outtextxy(100,50,"Enter any cnhoice:- \n\n1.AboutUs\n\n 2.Stack\n\n 3.Queue\n\n 4.Exit");
//1      gotox
*/
      scanf("%d",&mch);                          //
//      bar(50,30,500,100);
//mch=getch();
clrscr();
      switch(mch)
      {
       case 1:intro();
       //printf("hi");
	      break;
       case 2:cleardevice();
	      stack();
		break;
       case 3:cleardevice();
	      queue();
		//printf("Queue");
		break;
      // case 4:printf("About Us");
	//	break;
       case 4:break;
      }

    }while(mch!=4);

}




//////////////////////////////////Stack//////////////////////////////////////

void pop()
{
	int j=0;
      /*	if(count==0)
	{
		printf("Invalid operation");
		exit(0);
	} */

      j=401-20*(counts-1);
	      for(i=0;i<=340-20*counts ;i++)
	{
						//	setfillstyle(1,10);
		bar(350,j-2-i,475,j+18-i);
		setcolor(15);
		rectangle(350,j-3-i,430,j+17-i);
		outtextxy(375,j+3-i,elements[counts-1]);

		delay(5);
      }
      if(counts>1)
		outtextxy(436,j+20,"<-top");
      if(counts==1)
		bar(350,420,450,422);
	bar(325,220,550,140);

						// j--;

}



void push()
{
      outtextxy(100,50,"Enter any no.");
      gotoxy(30,4);//to input number...
      scanf("%s",n);
      strcpy(elements[counts],n);
      bar(50,30,400,100);
      j=counts;
		for(i=0;i<=300-20*j;i++)
		 {

			bar(350,98+i,470,118+i);
			setcolor(15);
			rectangle(350,100+i,430,120+i);
			outtextxy(375,105+i,n);

			delay(5);
		  }
	//printf("%d",120+i);    //for position
      outtextxy(434,100+i,"<-top");
      bar(434,120+i,473,140+i);

      j++;
}


void stack()
{
setcolor(6);
setfillstyle(1,7);//small rectangle fill colour

 setcolor(2); //small r. border colour

rectangle(15,200,200,450); //rectangle size
floodfill(19,210,2);
						//setfillstyle(1,9);
						//floodfill(150,150,10);
						//setfillstyle(1,2);
bar(70,370,150,400);
setcolor(1);               //color of text
outtextxy(30,240,"Stack"); //To enter text
setcolor(4);
//outtextxy(220,60,"Enter number:-");
setcolor(9);
//setfillstyle(1,2);
bar(70,370,150,400);
outtextxy(87,300,"1.Push");

bar(70,370,150,400);
outtextxy(89,345,"2.Pop");

bar(70,370,150,400);
outtextxy(89,390,"3.Back");
setcolor(2);
line(330,450,500,450);
line(330,450,330,220);
line(500,220,500,450);

setfillstyle(1,2);
setcolor(6);
    setfillstyle(1,0);
     j=1;

    do
    {
	bar(100,50,500,100);
	outtextxy(100,50,"Enter any choice: ");
	gotoxy(50,4);
	scanf("%d",&ch);
	bar(50,30,500,100);
      switch(ch)
      {
       case 1:if(j==9)
       {
	outtextxy(100,50,"Overflow , can't push ");
	getch();
	}
		else
		{
	      push();
	      counts++;
	      }
	      break;

       case 2:if(counts>0)
	      {
	      pop();
	      counts--;
	      }
	      else
	      {
	      outtextxy(100,50,"Stack empty, can't pop... ");
	      getch();

	      }
		break;
       case 3: cleardevice();
       break;
      }
    }while(ch!=3);

}