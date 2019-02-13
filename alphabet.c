#include<stdio.h>
#include<conio.h>
void main()
{
char n;
scanf("%c",&n);
if(n>='a' && n<='z' || n>='A' && n<='Z')
{
    printf("\n alphabet");
}
else
    printf("\n no alphabet");
getch();
}
