/*WAP to open a file*/
#include<stdio.h>
#include<conio.h>
void main( )
{
FILE *fp; // file pointer
char ch;
clrscr();
fp = fopen("demo.docx","r");
while ( 1 )
{
ch = fgetc ( fp ); //Each character of the file is read and stored in the character file.  
if ( ch == EOF )
break;
printf("%c",ch);
}
fclose (fp );
getch();
}