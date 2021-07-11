#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char something[100],ch;
fp=fopen("BMSCE.DAT","w");
if(fp==NULL)
{printf("\n the file could not be opened\n");
return (0);
}
printf("enter some data");
gets(something);

fputs(something,fp);
fclose(fp);
printf("\ndata has been entered to the file\n");
fp=fopen("BMSCE.DAT","r");
printf("content present in file are\t");
while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
fclose(fp);
return 0;
}
