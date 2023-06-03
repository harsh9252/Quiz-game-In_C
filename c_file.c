#include<stdio.h>
#include<conio.h>

void c_Quiz() {
    system("cls");
    printf("\n----- C Quiz -----\n");
    int score = 0;
    fflush(stdin);
     char name[20];
    char gender[20];
    char city[20];
     //printf("Welcome to the Quiz!\n\n");
     printf("\n\t Enter the Name : ");
    gets(name);
    // printf("\n\t Enter the Age : ");
    // scanf("%d",&age);
    fflush(stdin);
    printf("\n\t Enter the Gender : ");
    gets(gender);
    printf("\n\t Enter the City : ");
    gets(city);

  // Question 1
 system("cls");
    printf("1. What is the output of the following code?\n");
    printf("   int a = 10;\n");
    printf("   printf(\"%%d\", a++);\n");
    printf("\n   A. 10\n");
    printf("   B. 11\n");
    printf("   C. 12\n");
    printf("   D. None of the above\n");
    char answer;
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
// Question 2
system("cls");
    printf("2. Which of the following is not a valid data type in C?\n");
    printf("\n   A. int\n");
    printf("   B. float\n");
    printf("   C. bool\n");
    printf("   D. char\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 3
  system("cls");
    printf("3. What is the output of the following code?\n");
    printf("   int a = 5, b = 3;\n");
    printf("   printf(\"%%d\", a / b);\n");
    printf("\n   A. 1\n");
    printf("   B. 1.5\n");
    printf("   C. 2\n");
    printf("   D. 2.5\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 4
  system("cls");
    printf("4. What is the value of x after the following code is executed?\n");
    printf("   int x = 5;\n");
    printf("   x += x -= x *= x;\n");
    printf("\n   A. -5\n");
    printf("   B. -25\n");
    printf("   C. 5\n");
    printf("   D. 25\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'D' || answer == 'd') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 5
  system("cls");
    printf("5. What is the output of the following code?\n");
    printf("   int a = 10;\n");
    printf("   int *p = &a;\n");
    printf("   printf(\"%%d\", ++*p);\n");
    printf("\n   A. 10\n");
    printf("   B. 11\n");
    printf("   C. 12\n");
    printf("   D. None of the above\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score += 10;
        printf("Correct!\n");
    }
    else{
         printf("Incorrect!\n");
    }
// Question 6
 system("cls");
printf("\n6. What is the output of the following code?\n\n");
    printf("   int a[] = {1, 2, 3, 4, 5};\n");
    printf("   int *p = a;\n");
    printf("   printf(\"%d\", *(p+2));\n\n");
    printf("   A. 1\n");
    printf("   B. 2\n");
    printf("   C. 3\n");
    printf("   D. 4\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
    // Question 7
     system("cls");
     printf("\n7. What is the output of the following code?\n\n");
    printf("   int x = 0;\n");
    printf("   while (x < 10) {\n");
    printf("       printf(\"%d \", x);\n");
    printf("       x++;\n");
    printf("   }\n\n");
    printf("   A. 0 1 2 3 4 5 6 7 8 9\n");
    printf("   B. 1 2 3 4 5 6 7 8 9 10\n");
    printf("   C. 0 1 2 3 4 5 6 7 8 9 10\n");
    printf("   D. None of the above\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 8
  system("cls");
     printf("\n8. What is the output of the following code?\n\n");
    printf("   int x = 5;\n");
    printf("   if (x == 5) {\n");
    printf("       printf(\"%d\", x);\n");
    printf("   } else {\n");
    printf("       printf(\"%d\", x+1);\n");
    printf("   }\n\n");
    printf("   A. 5\n");
    printf("   B. 6\n");
    printf("   C. Undefined\n");
    printf("   D. Compiler Error\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 9
  system("cls");
  printf("\n9. What is the output of the following code?\n\n");
    printf("   int x = 5, y = 7;\n");
    printf("   int z = x++ + ++y;\n");
    printf("   printf(\"%d\", z);\n\n");
    printf("   A. 11\n");
    printf("   B. 13\n");
    printf("   C. 12\n");
    printf("   D. 14\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 10
  system("cls");
 printf("\n10. What is the output of the following code?\n\n");
    printf("   int a = 5, b = 2;\n");
    printf("   printf(\"%d\", a%%b);\n\n");
    printf("   A. 2\n");
    printf("   B. 2.5\n");
    printf("   C. 1\n");
    printf("   D. Compiler Error\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
     FILE *fp;
    fp = fopen("c_score.txt", "a");
    if (fp == NULL) {
        printf("Error: could not open file\n");
        return;
    }

     printf("\n\nYour final score is %d out of 100.\n", score);
    
   
    fflush(stdin);
     fprintf(fp, "\nYour final score is %d out of 100 =>\n", score);
    fprintf(fp, "Name => %s\n", name);
    fprintf(fp, "Gender => %s\n", gender);
    fprintf(fp, "City => %s\n", city);
    fflush(stdin);
    //fprintf(fp, "Age => %d\n", age);
    fprintf(fp,"\n-------------------------------------");
    fclose(fp);

}
