#include<stdio.h>
#include<conio.h>
int main()
{
struct student
{
int rollno,fees,tmarks;
char name[20],x,department[10];

};
 struct student s1,s2;
printf("enter the rollno of  student \n");
scanf("%d",&s1.rollno);
printf("\nenter the name of the student\n ");
scanf("%s",s1.name);
printf("\nenter the section \n");
scanf(" %c",&s1.x);
printf("\nenter the department of the student\n");
scanf(" %s",s1.department);
printf("\nenter the fees of  student\n");
scanf(" %d",&s1.fees);
printf("\nenter the total marks obtained by  student\n ");
scanf("%d",&s1.tmarks);
printf("enter the rollno of  student \n");
scanf("%d",&s2.rollno);

printf("\nenter the name of the student\n ");
scanf("%s",s2.name);
printf("\nenter the section \n");
scanf(" %c",&s2.x);
printf("\nenter the department of the student\n");
scanf(" %s",s2.department);
printf("\nenter the fees of  student\n");
scanf("%d",&s2.fees);
printf("\nenter the total marks obtained by  student\n ");
scanf("%d",&s2.tmarks);
printf("\ndetails of the highest scorer is\n");
if(s1.tmarks>s2.tmarks)
{printf("\nrollno:%d",s1.rollno);

printf("name %s",s1.name);
printf("\nsection:%c",s1.x);

printf("\ndepartment %s",s1.department);
printf("\nfees:%d",s1.fees);
printf("\ntotal marks:%d",s1.tmarks);
}else
{printf("\nrollno:%d",s2.rollno);
printf("\ name %s",s2.name);
printf("\nsection:%c",s2.x);
printf("\ndepartment%s",s2.department);
printf("\nfees:%d",s2.fees);
printf("\ntotal marks:%d",s2.tmarks);}
return 0;
}
