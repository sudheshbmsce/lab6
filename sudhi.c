#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE getnode()

{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("memory full");
        exit(0);
    }
    return x;
}
NODE insert_front(NODE first,int item)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
        return temp;
    temp->link=first;
    first=temp;
    return first;
}
NODE insert_rear(NODE first ,int item)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first ==NULL)
    {
        return temp;
    }
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}
NODE delete_front(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("list is empty cannot delete\n");
        return first;
    }
    else
    {
        temp=first;
        temp=temp->link;
        printf("item deleted at front end is %d\n",first->info);
        free(first);
        return temp;
    }
}
NODE delete_rear(NODE first)
{
    NODE cur,prev;
    if(first==NULL)
    {
        printf("list is empty cannot delete\n");
        return first;
    }
    if(first->link==NULL)
    {
        printf("item deleted is %d\n",first->info);
        free(first);
        return NULL;
    }
    cur=first;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    printf("item deleted at rear end is %d",cur->info);
    free(cur);
    prev->link=NULL;
    return first;
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
        printf("list is empty cannot display items|n");
    for(temp=first; temp!=NULL; temp=temp->link)
    {
        printf("%d\n",temp->info);
    }
}
void main()
{
    int ch=0,item;
    NODE first=NULL;
    while(ch!=6)
    {
        printf("\n1.insert front\n");
        printf("2.insert rear\n");
        printf("3.delete front\n");
        printf("4.delete rear\n");
        printf("5.display\n");
        printf("6.exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("enter the item to be inserted \n");
            scanf("%d",&item);
            first=insert_front(first,item);
            break;
        case 2:
            printf("enter the item to be inserted \n");
            scanf("%d",&item);
            first=insert_rear(first,item);
            break;
        case 3:
            first=delete_front(first);
            break;
        case 4:
            first=delete_rear(first);
            break;
        case 5:
            display(first);
            break;
        default:
            printf("wrong input\n");
            break;
        }
    }
}






