#include<stdio.h>
#include<conio.h>
void main()
{
	int no,a=0,b=1,c,i;
	clrscr();
	printf("\n Enter a range:");
	scanf("%d",&no);
	for(i=1;i<no;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n %d",c);

	getch();
}