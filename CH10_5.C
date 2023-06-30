#include<stdio.h>
#include<conio.h>

main()

{
 int i=1,p;
  clrscr();
  printf("Enter Value = ");
  scanf("%d",&p);
  while(i<=p)
     {
	if(i%2==0)
	{
	 printf("%d\n",i);
	}
	i++;

     }


 getch();
}