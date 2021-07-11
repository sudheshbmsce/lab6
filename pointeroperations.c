#include<stdio.h>
int main()
{
int a,b,*pa,*pb,x;
printf("enter the two numbers\n");
scanf("%d%d",&a,&b);
pa=&a;
pb=&b;
printf("options available\n");
printf("1:PRODUCT\n");
printf("2:SUM\n");
printf("3:division\n");
printf("4:difference\n");
printf("5:exit\n");
printf("enter the option\n");
scanf("%d",&x);
switch (x)
{
case 1:printf("product of two numbers %d",*pa**pb);
break;
case 2:printf("sum of two numbers is %d",*pa+*pb);
break;

case 3:printf("quotient is %d",*pa/(*pb));
break;
case 4:printf("difference of two numbers is %d",*pa-*pb);
break;
case 5:break;}
return 0;
}
