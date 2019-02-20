#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,count=0;
scanf("%d",&n);
for(a=2;a<n;a++)
{
if(n%a==0)
count++;
}
if(count==0)
printf("yes");
else
printf("no");
return 0;
}
