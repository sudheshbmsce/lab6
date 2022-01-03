#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};
typedef struct node *NODE;
NODE getnode()

{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("memory full");

    }
    return x;
}
NODE insert_front(NODE head,int item)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    cur=head->rlink;
    head->rlink=temp;
    temp->llink=head;
    temp->rlink=cur;
    cur->llink=temp;

    return head;
}
NODE insert_rear(NODE head ,int item)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    cur=head->llink;
    head->llink=temp;
    temp->rlink=head;

    temp->llink=cur;
    cur->rlink=temp;
    return head;

}
NODE delete_front(NODE head)
{
    NODE cur,next;
    if(head->rlink==head)
    {
        printf("list is empty cannot delete\n");
        return head;
    }
    else
    {
        cur=head->rlink;
        next=cur->rlink;
        head->rlink=next;
        next->llink=head;

        printf("item deleted at front end is %d\n",cur->info);
        free(cur);
        return head;
    }
}
NODE delete_rear(NODE head)
{
    NODE cur,prev;
    if(head->rlink==head)
    {
        printf("list is empty cannot delete\n");
        return head;
    }

    cur=head->llink;
    prev=cur->llink;
    head->llink=prev;
    prev->rlink=head;

    printf("item deleted is %d\n",cur->info);
    free(cur);
    return head;


}
void display(NODE head)
{
    NODE temp;
    if(head->rlink==head)
    {
        printf("list is empty cannot display items\n");
        return;
    }
    printf("contents of dq\n");
    temp=head->rlink;
    while(temp!=head)
    {

        printf("%d",temp->info);

        temp=temp->rlink;

  printf("\n");
    }

}
void main()
{
    int ch=0,item;
    NODE head,last;
    head=getnode();
    head->rlink=head;
    head->llink=head;

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
            head=insert_front(head,item);
            break;
        case 2:
            printf("enter the item to be inserted \n");
            scanf("%d",&item);
            head=insert_rear(head,item);
            break;
        case 3:
            head=delete_front(head);
            break;
        case 4:
            head=delete_rear(head);
            break;
        case 5:
            display(head);
            break;
        default:
            printf("wrong input\n");
            break;
        }
    }
}





