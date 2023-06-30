#include<stdio.h>
#include<conio.h>

main()
{
  int i=1,p,sum=0;
  clrscr();
  printf("Enter A Value = ");
  scanf("%d",&p);
  while(i<=p)
   {
     sum=sum+i;
     i++;
   }
   printf("%d",sum);

  getch();
}