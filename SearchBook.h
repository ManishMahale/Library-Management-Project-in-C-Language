void searchBook(int sid)
{
    int flag = 0;
    struct struAddBook b;
    FILE *fptr;

    int choice;
    printf("\nEnter which departments Book you want to search\n");
    printf("\n1:Computer");
    printf("\n2:Electrical");
    printf("\n3:Civil");
    printf("\n4:Electronics");
    printf("\n5:Mechanical");
    printf("\n6:Architecture");
    printf("\nPlease Enter choice\n");
    scanf("%d", &choice);
    printf("\nEnter Id for search the Book :\n");
    scanf("%d", &sid);

    switch (choice)
    {
    case 1:
        fptr = fopen("Computer.txt", "a+");
        while (fread(&b, sizeof(struct struAddBook), 1, fptr) != EOF)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("\nBook found\n");
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
        }
        else
        {
            printf("\nBOOk not found\n");
        }

        fclose(fptr);
        break;
    case 2:
        fptr = fopen("Electrical.txt", "a+");
        while (fread(&b, sizeof(struct struAddBook), 1, fptr) != EOF)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("\nBook found\n");
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
        }
        else
        {
            printf("\nBOOk not found\n");
        }

        fclose(fptr);
        break;

    case 3:
        fptr = fopen("Civil.txt", "a+");
        while (fread(&b, sizeof(struct struAddBook), 1, fptr) != EOF)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("\nBook found\n");
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
        }
        else
        {
            printf("\nBOOk not found\n");
        }

        fclose(fptr);
        break;

    case 4:
        fptr = fopen("Electronics.txt", "a+");

        while (fread(&b, sizeof(struct struAddBook), 1, fptr) != EOF)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("\nBook found\n");
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
        }
        else
        {
            printf("\nBOOk not found\n");
        }

        fclose(fptr);
        break;

    case 5:
        fptr = fopen("Mechanical.txt", "a+");

        while (fread(&b, sizeof(struct struAddBook), 1, fptr) != EOF)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("\nBook found\n");
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
        }
        else
        {
            printf("\nBOOk not found\n");
        }

        fclose(fptr);
        break;

    case 6:
        fptr = fopen("Architecture.txt", "a+");
        while (fread(&b, sizeof(struct struAddBook), 1, fptr) != EOF)
        {
            if (sid == b.bookId)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("\nBook found\n");
            printf("%d\t%s\t%s\t%d\t%d\t%d\t%d", b.bookId, b.bookname, b.authorName, b.bookQuantity, b.bookPrice, b.bookCount, b.bookRackno);
        }
        else
        {
            printf("\nBOOk not found\n");
        }

        fclose(fptr);
        break;
    default:
        printf("\nInvalid Input");
        break;
    }
}
