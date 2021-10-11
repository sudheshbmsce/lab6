#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define  size 5
#include<process.h>

void push();
void pop();
int isfull();
int stack[size],ele,top=-1;
int isempty();
int main()
{
int a,i,b;
while(1)
{
printf("options\n");
printf("1-push\n");
printf("2-pop\n");
printf("3-display elements\n");
printf("4-exit\n");
printf("enter your option\n");
scanf("%d",&a);

switch (a)
{
case 1:push();
       break;
case 2:pop();
      break;

case 3:for(i=0;i<=top;i++)
       printf("%d\t",stack[i]);
       break;
case 4: exit(0);
        break;

}
}
}
void push()
{
if(isfull())
printf("stack is full");
else
{
top=top+1;
printf("enter the element to be inserted");
scanf("%d",&ele);
stack[top]=ele;
}
}

void pop()
{
if(isempty())
printf("stack is empty");
else
{ele=stack[top];
top=top-1;
printf("%d is poped",ele);
}
}
isfull()
{
if(top==size-1)
return 1;
else
return 0;

}
isempty()
{if(top==-1)
return 1;
else
return 0;
}
