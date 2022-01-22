#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	clrscr();
	fp=fopen("demo2.txt","w");
	if(fp==NULL)
	{
		printf("\n file can not created");
	}
	else
	{
		printf("\n File created :");
		fprintf(fp,"hello world this is second file");

	}
	fclose(fp);
	getch();
}

