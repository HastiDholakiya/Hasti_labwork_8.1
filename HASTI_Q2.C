#include<stdio.h>
#include<conio.h>

void main()
{
     int marks[5]={12,42,18,50,26};
     int i;
     int average=0;

     clrscr();
     for(i=0;i<=4;i++)
     {
	printf("a[%d] = %d\n",i,marks[i]);
	average=average+marks[i];
     }
	printf("average of array = %d",average/5);

     getch();
}