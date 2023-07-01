#include<stdio.h>
#include<conio.h>

main()
{
  int a=1,p,x;
  clrscr();
  printf("Enter Int. Tebal = ");
  scanf("%d",&p);
    printf("How Many Times = ");
    scanf("%d",&x);
    while(a<=x)
      {
	 printf(" %d * %d = %d\n",p,a,p*a);
	 a++;
      }

  getch();
}