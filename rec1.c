#include<stdio.h>
void print(int num);
int main()
{
int num=1;	
print(num);
return 0;
}
void print(int num)
{
if(num<=100)
{
printf("%d",num);
print(num+1);
}

}
