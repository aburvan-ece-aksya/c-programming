#include<stdio.h>
#include<conio.h>
int main(void)
{
  int p,n,res=1,i;
  scanf("%d",&n);
  scanf("%d",&p);
  for(i=1;i<=p;i++)
  {
    res=res*n;
  }
  printf("%d",res);
}
