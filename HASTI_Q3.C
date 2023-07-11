#include<stdio.h>
#include<conio.h>

void main()
{
     int a[5],b[5];
     int sum[5];
     int i;

     clrscr();

     printf("Enter the first array: \n");

     for(i=0;i<=4;i++)
     {
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
     }

     printf("Enter the second array: \n");

     for(i=0;i<=4;i++)
     {
	printf("b[%d]=",i);
	scanf("%d",&b[i]);
     }

     for(i=0;i<=4;i++)
     {
     sum[i] = a[i]+b[i];
     }
	printf("Array c is: \n");

     for(i=0;i<=4;i++)
     {
	printf("sum [%d]= %d\n",i,sum[i]);
     }

     getch();
     }

