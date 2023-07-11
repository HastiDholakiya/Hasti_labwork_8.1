#include<stdio.h>
#include<conio.h>

void main()
{
     int marks[5];
     int i;

     clrscr();

     for(i=0;i<=4;i++)
     {
	printf("Enter your marks = ");
	scanf("%d",&marks[i]);
     }

     for(i=0;i<=4;i++)
     {
     if(marks[i]>=90)
     {
	printf("%d =A1\n",marks[i]);
     }else if(marks[i]>=80)
     {
	printf("%d =A2\n",marks[i]);
     }else if(marks[i]<=33)
	printf("failed %d\n",marks[i]);
     }

     getch();
     }
