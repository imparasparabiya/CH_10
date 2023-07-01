#include<stdio.h>
#include<conio.h>

main()
{
  int i=1,p;
  clrscr();
  printf("Enter A Value = ");
  scanf("%d",&p);
  i=p;
  while(i>0)
  {
    printf("%d\n",i);
    i--;

  }
  getch();
}