
#include <stdio.h>
void deleteBook()
{
  FILE *fptr, *fptr1;
  int did, depId;
  struct struAddBook b1,b2;

  printf("\n1:Computer");
  printf("\n2:Electrical");
  printf("\n3:Civil");
  printf("\n4:Electronics");
  printf("\n5:Mechanical");
  printf("\n6:Architecture");

  printf("\nPlease enter which departments book you want to delete...:\n");
  scanf("%d", &depId);

  switch (depId)
  {
  case 1:
   
    fptr = fopen("Computer.txt", "r+");
    fptr1 = fopen("ComputerCopy.txt", "w");
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }

      printf("Enter id which you want to delete : ");
      scanf("%d", &did);
       printf("\n***you are come in case 1 ***\n");
      while (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
        if (b1.bookId == did)
        {  
          continue;
        }
        else{
             printf("\n##### you are in if block \n");
          fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
        }
         
      }
    // printf("\n***you are come in case after while loop***\n");

    fclose(fptr);
    fclose(fptr1);

    remove("Computer.txt");
    rename("ComputerCopy.txt", "Computer.txt");
    printf("delete record successfully.....");
    break;

  case 2:
    fptr = fopen("Electrical.txt", "a+");
    fptr1 = fopen("ElectricalCopy.txt", "w");
     printf("Enter id which you want to delete : ");
      scanf("%d", &did);
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
     while (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
    if (b1.bookId == did)
        {  
          continue;
        }
        else{
             printf("\n##### you are in if block \n");
          fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
        }
    }

    fclose(fptr);
    fclose(fptr1);

    remove("Electrical.txt");

    rename("ElectricalCopy.txt", "Electrical.txt");
    printf("delete record successfully.....");
    break;
  case 3:
    fptr = fopen("Civil.txt", "a+");
    fptr1 = fopen("CivilCopy.txt", "w+");
     printf("Enter id which you want to delete : ");
      scanf("%d", &did);
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
      {
    if (b1.bookId == did)
        {  
          continue;
        }
        else{
             printf("\n##### you are in if block \n");
          fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
        }
    }

    fclose(fptr);
    fclose(fptr1);

    remove("Civil.txt");

    rename("CivilCopy.txt", "Civil.txt");
    printf("delete record successfully.....");
    break;

  case 4:
    fptr = fopen("Electronics.txt", "a+");
    fptr1 = fopen("ElectronicsCopy.txt", "w+");
     printf("Enter id which you want to delete : ");
      scanf("%d", &did);
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (fread(&b1, sizeof(struct struAddBook), 1, fptr) >0)
    {
      if (b1.bookId == did)
      {
        continue;
      }
      else{
        fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
      }
    }

    fclose(fptr);
    fclose(fptr1);

    remove("Electronics.txt");

    rename("ElectronicsCopy.txt", "Electronics.txt");
    printf("delete record successfully.....");
    break;

  case 5:
    fptr = fopen("Mechanical.txt", "a+");
    fptr1 = fopen("MechanicalCopy.txt", "w+");
    printf("Enter which you want to delete Id : ");
    scanf("%d",&did);
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    while (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0)
    {
      if (b1.bookId != did)
      {
        fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
      }
      else{
        continue;
      }
    }

    fclose(fptr);
    fclose(fptr1);

    remove("Mechanical.txt");

    rename("MechanicalCopy.txt", "Mechanical.txt");
    printf("delete record successfully.....");
    break;
  case 6:
    printf("\nI TOOK ID\n");
    fptr = fopen("Architecture.txt", "a+");
    fptr1 = fopen("ArchitectureCopy.txt", "w+");
    printf("Enter id which you want to delete : ");
    scanf("%d",&did);
    if (fptr == NULL || fptr1 == NULL)
    {
      printf("record is not exist...");
    }
    printf("\nI TOOK ID 2\n");
    while (fread(&b1, sizeof(struct struAddBook), 1, fptr) > 0 ) 
    {

      if (b1.bookId != did)
      {
        fwrite(&b1, sizeof(struct struAddBook), 1, fptr1);
      }
      else{
        continue;
      }
    }

    fclose(fptr);
    fclose(fptr1);

    remove("Architecture.txt");

    rename("ArchitectureCopy.txt", "Architecture.txt");
    printf("delete record successfully.....");
    break;

  default:
    printf("\nInvalid Input....");
    break;
  }
}
