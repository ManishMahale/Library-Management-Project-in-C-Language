#include <stdio.h>
void UpdateBook()
{
    FILE *fptr, *fptr1;
    struct struAddBook b1;
    struct struAddBook b2;
    int Uid, depId,newid;
    
    int quantity, price, count, rack_no;
    char book_name[90];
    char author_name[90];
    int flag = 0,sid;
    
    printf("Enter id which you want to Update : ");
    scanf("%d", &Uid);

    fptr = fopen("Computer.txt", "r+");
    fptr1 = fopen("ComputerCopy.txt", "w");
   
    while(fread(&b1,sizeof(struct struAddBook),1,fptr) >0)
    {
        
         if(b1.bookId == Uid){

          printf("\nEnetr book  new Id : ");
            scanf("%d",&sid);
            b2.bookId=sid;
             fwrite(&b2, sizeof(struct struAddBook), 1, fptr1);
             break;
          
         }
         else
         {
            b2=b1;
             fwrite(&b2, sizeof(struct struAddBook), 1, fptr1);
         } 
    
    }
    fclose(fptr);
    fclose(fptr1);
    remove("Computer.txt");
    rename("ComputerCopy.txt", "Computer.txt");
   printf("\nRecord Updated Succesfully......");
}
