#include<stdio.h>
int atoi(char s[]);
int main()
{
char s[10];
printf("enter a string\n");
scanf("%s",s);
printf("%d",atoi(s));
return 0;	
}
int atoi(char s[])
{
int sum=0,i;
for(i=0;s[i]!='\0';i++)
{
sum=sum*10;
sum=sum+s[i]-48;
}
return sum;
}

