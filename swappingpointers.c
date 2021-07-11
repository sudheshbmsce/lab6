#include<stdio.h>
void swap(int *a,int *b);
int main()
{
int x,y;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
printf("\nnumbers before swapping\n ");
printf("%d%2d",x,y);
swap(&x,&y);
printf("\nnumbers after swapping\n");
printf("%d%2d",x,y);
return 0;
}
void swap(int *a,int *b)
{int temp;
temp=*a;
*a=*b;
*b=temp;

}
