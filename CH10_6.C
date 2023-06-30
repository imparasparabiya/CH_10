#include<stdio.h>
#include<conio.h>

main()

{
  int i=0,p;
  clrscr();
  printf("Enter A Value = ");
  scanf("%d",&p);
  while(i<=p)
      {
	if(i%2==1)
	  {
	    printf("%d\n",i);
	  }


       i++;
      }


  getch();
}