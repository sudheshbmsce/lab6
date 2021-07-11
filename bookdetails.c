#include<stdio.h>
int main()
{
struct book
{
char title[10],author[20];
int price,pages,DOP;

};
int i,j,highest=0;
struct book b[3];
for(i=0;i<3;i++)
{
printf("enter the book title\t");
scanf("%s",b[i].title);
printf("enter the author name\t");
scanf("%s",b[i].author);
printf("enter the price\t ");
scanf("%d",&b[i].price);
printf("enter number of pages\t");
scanf("%d",&b[i].pages);
printf("enter date of publications\t");
scanf("%d",&b[i].DOP);

}for(i=0;i<3;i++)
{
printf("\nthe book title\t");
printf("%s",b[i].title);
printf(" \nthe author name\t");
printf("%s",b[i].author);
printf(" \nthe price\t ");
printf("%d",b[i].price);
printf("\nnumber of pages\t");
printf("%d",b[i].pages);
printf("\n date of publications\t");
printf("%d",b[i].DOP);}
for(i=0;i<3;i++)
{
    if(b[i].price>=highest)
    {

    highest=b[i].price;
    j=i;}

}printf("\nthe details of the book which has highest price \n");
printf("\nthe book title\t");
printf("%s",b[j].title);
printf(" \nthe author name\t");
printf("%s",b[j].author);
printf(" \nthe price\t ");
printf("%d",b[j].price);
printf("\nnumber of pages\t");
printf("%d",b[j].pages);
printf("\n date of publications\t");
printf("%d",b[j].DOP);

return 0;
}
