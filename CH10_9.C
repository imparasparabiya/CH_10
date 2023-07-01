#include<stdio.h>
#include<conio.h>

void main()

{
    int i=1,p,f=1;
    clrscr();
    printf("Enter Value for Factorial P = ");
    scanf("%d",&p);
    while(i<=p)
	 {
	   f=f*i;
	   i++;

	 }
    printf("F = %d is  %d",p,f);
    getch();


}