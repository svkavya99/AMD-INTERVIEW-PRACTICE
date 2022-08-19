#include<stdio.h>
int fact(int num);
int main()
{
int num=5;
printf("%d",fact(num));	
return 0;
}
int fact(int num)
{
if(num>=1)
{
return num*fact(num-1);	
}
else
return 1;
}


