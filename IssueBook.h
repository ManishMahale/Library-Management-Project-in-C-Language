#include "struIssueBookName.h"
void issueBooks()
{

  struct IssuedBookList b1;
	FILE *fptr;
    fptr=fopen("BookIssue.txt","a+");
    printf("\nStudent Id : ");
    scanf("%d",&b1.id);
    printf("\nEnterr student name : ");
    _flushall();
    gets(b1.studentName);
    printf("\nBook Name : ");
   
    gets(b1.bookName);
    printf("\nIssued Date : ");
   
    gets(b1.date);

    fprintf(fptr,"\n%d\t%s\t%s\t%s\n",b1.id,b1.studentName,b1.bookName,b1.date);
    fclose(fptr);
}
