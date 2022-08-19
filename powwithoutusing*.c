#include<stdio.h>
int main()
{
int base,pow,i,j;
printf("ENTER BASE AND POWER VALUES\n");
scanf("%d%d",&base,&pow);
int result=base;
int k=base;
for(i=1;i<pow;i++)
{
for(j=1;j<base;j++)
{
result=result+k;	
}
k=result;	
}
printf("%d",result);
return 0;
}
