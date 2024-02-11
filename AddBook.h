#include <stdio.h>
#include "struAddBook.h"
#include "struID.h"
//new

// void AddBook(struct struAddBook b,struct struID d)
void AddBook(struct struAddBook b)
{
   FILE *fptr;
   // FILE *fptr3;
   int choice,x;
   printf("\n1:Computer");
   printf("\n2:Electrical");
   printf("\n3:Civil");
   printf("\n4:Electronics");
   printf("\n5:Mechanical");
   printf("\n6:Architecture");
   printf("\nEnter choice\n");
   scanf("%d",&choice);
        
   switch (choice)
   {
   case 1:
   fptr = fopen("Computer.txt", "a+");
      fwrite(&b,sizeof(struct struAddBook),1,fptr);
      
      fclose(fptr);
      
      printf("\nBook added Succesfully\n");
       break;
   case 2:
   
      fptr = fopen("Electrical.txt", "a+");
      
       fwrite(&b,sizeof(struct struAddBook),1,fptr);
      fclose(fptr) ;
      printf("\nBook added Succesfully\n");
      break;

   case 3:
      fptr = fopen("Civil.txt", "a+");
      
      fwrite(&b,sizeof(struct struAddBook),1,fptr);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;
   case 4:
      fptr = fopen("Electronics.txt", "a+");
      
      fwrite(&b,sizeof(struct struAddBook),1,fptr);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;
   case 5:
      fptr = fopen("Mechanical.txt", "a+");
      
     fwrite(&b,sizeof(struct struAddBook),1,fptr);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;

   case 6:
      fptr = fopen("Architecture.txt", "a+");
      
      fwrite(&b,sizeof(struct struAddBook),1,fptr);
      fclose(fptr);
      printf("\nBook added Succesfully\n");
       break;

   default:
      printf("\nInvalid Input");
      break;
   }
} 
