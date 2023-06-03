#include<stdio.h>
#include<conio.h>

void Jadd(){


    char question[100];
    char a[20];
    char b[20];
    char c[20];
    char d[20];
system("cls");
printf("*************************JAVA Question***********************");
fflush(stdin);
     printf("\n\t Enter the Question : ");
    gets(question);
    printf("\n\t Enter Option A : ");
    gets(a);
    printf("\n\t Enter Option B : ");
    gets(b);
    printf("\n\t Enter Option C : ");
    gets(c);
    printf("\n\t Enter Option D : ");
    gets(d);
      FILE *fp;
    fp = fopen("JQues.txt", "a");
    if (fp == NULL) {
        printf("Error: could not open file\n");
        return;
    }

     
    
   
    fflush(stdin);
   
    fprintf(fp, "\nQuestion => %s\n", question);
    fprintf(fp, "A. %s\n", a);
    fprintf(fp, "B. %s\n", b);
    fprintf(fp, "C. %s\n", c);
    fprintf(fp, "D. %s\n", d);
    fprintf(fp,"\n-------------------------------------");
    fclose(fp);
}



