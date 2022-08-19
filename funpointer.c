#include<stdio.h>
int add(int a ,int b);
int sub(int a,int b);
int main()
{
int (*fp)(int,int)=add;	
int result=fp(5,4);
printf("%d",result);
int (*fp1)(int,int)=sub;
int k=fp1(5,4);
printf("%d",k);
return 0;
}
int add(int a ,int b)
{
return a+b;	
}
int sub(int a,int b)
{
return a-b;	
}
/*int mul(int a,int b)
{
return a*b;	
}*/
