#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "AddBook.h"
#include "SearchBook.h"
#include "ViewBookList.h"
#include "IssueBook.h"
#include "DeleteBook.h"
#include "Login.h"
#include "UpdateBook.h"
//Username = abc
//Password =123

struct struAddBook b;
int choice, size, sid, i;

int main()
{
    int result;
    do
    {
        result = login();
        if (result == 1)
        {

            do
            {
                printf("\n1 : Add Book : ");
                printf("\n2 : Delete Book : ");
                printf("\n3 : Search Book : ");
                printf("\n4 : Issue Book : ");
                printf("\n5 : View Book List : ");
                printf("\n6 : Edit Book Record : (Not Working)");
                printf("\n7 : Close The Application : ");
                printf("\nEnter which operation you want to do :");
                scanf("%d", &choice);
                struct struAddBook *b1;
                

                switch (choice)
                {
                case 1:
                    _flushall();
                    printf("\nEnter how many books you want to add: \n");
                    scanf("%d", &size);

                    b1 = (struct struAddBook *)malloc(sizeof(struct struAddBook) * size);
                    int x=1;

                    for (i = 0; i < size; i++)
                    {
                        printf("Enter Boook ID ");
                        scanf("%d", &b1[i].bookId);

                        _flushall();
                        printf("Enter Book Name: ");
                        gets(b1[i].bookname);
                        
                        printf("Enter Auther Name: ");
                        gets(b1[i].authorName);
                        
                        printf("Enter Book_Quantity: ");
                        scanf("%d",&b1[i].bookQuantity);
                        
                        printf("Enter Book Price: ");
                        scanf("%d",&b1[i].bookPrice);
                        
                        printf("Enter Book Count: ");
                        scanf("%d",&b1[i].bookCount);
                        
                        printf("Enter Book Rack: ");
                        scanf("%d",&b1[i].bookRackno);
                        
                        AddBook(b1[i]);
                    }
                    break;
                case 2:
                    deleteBook();
                    break;
                case 3:
                    searchBook(sid);
                    break;
                case 4:
                    issueBooks();
                    break;
                case 5:
                    viewBookList();
                    break;
                case 6:
                    UpdateBook();
                    break;
                case 7:
                    printf("Closed....");
                    exit(0);
                    break;
                default:
                    printf("Invalid Input ...");
                    break;
                }
            } while (choice < 8);
        }
        else
        {
            printf("\nEnter valid login ID");
        }
    } while (1);
}
