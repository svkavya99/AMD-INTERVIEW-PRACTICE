#include<stdio.h>
int main()
{
int d,m,y;	
char *month[]={"jan","feb","mar","april","may","june","july"};
printf("ENTER DATE\n");
scanf("%d%d%d",&d,&m,&y);
printf("%d,%s,%d",d,month[m-1],y);
return 0;
}
