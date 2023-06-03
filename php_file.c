#include<stdio.h>
#define MAX_QUESTIONS 50 

void php_Quiz() {
     system("cls");
     printf("\n----- PHP Quiz -----\n");
    char ch;
    int score = 0;
     fflush(stdin);
     char name[20];
    char gender[20];
    char city[20];
     //system("cls");
    // printf("Welcome to the Quiz!\n\n");
     printf("\n\t Enter the Name : ");
    gets(name);
    // printf("\n\t Enter the Age : ");
    // scanf("%d",&age);
    fflush(stdin);
    printf("\n\t Enter the Gender : ");
    gets(gender);
    printf("\n\t Enter the City : ");
    gets(city);
    system("cls");
   // Question 1
    system("cls");
    printf("1. What is the correct way to start a PHP block of code?\n");
    printf("\n   A. <?php\n");
    printf("   B. <?\n");
    printf("   C. <php>\n");
    printf("   D. <?html>\n");
    char answer;
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 2
  system("cls");
    printf("2. What is the output of the following code?\n");
    printf("   $x = 5;\n");
    printf("   $y = 10;\n");
    printf("   echo ($x + $y) * 2;\n");
    printf("\n   A. 30\n");
    printf("   B. 25\n");
    printf("   C. 20\n");
    printf("   D. 15\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
// Question 3
 system("cls");
    printf("3. What does PHP stand for?\n");
    printf("\n   A. Preprocessed Hypertext Pages\n");
    printf("   B. Personal Home Pages\n");
    printf("   C. Hypertext Preprocessor\n");
    printf("   D. Hypertext Markup Language\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 4
  system("cls");
    printf("4. What is the correct way to end a PHP statement?\n");
    printf("\n   A. ;\n");
    printf("   B. .\n");
    printf("   C. :\n");
    printf("   D. ,\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 5
  system("cls");
    printf("5. What is the output of the following code?\n");
    printf("   $x = 10;\n");
    printf("   $y = \"20\";\n");
    printf("   echo $x + $y;\n");
    printf("\n   A. 30\n");
    printf("   B. 1020\n");
    printf("   C. 1010\n");
    printf("   D. Error\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
// Question 6
 system("cls");
    printf("6. What is the output of the following code?\n");
    printf(" $arr = array(1, 2, 3);\n");
    printf(" echo count($arr);\n");
    printf("\n A. 3\n");
    printf(" B. 6\n");
    printf(" C. 4\n");
    printf(" D. Error\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 7
  system("cls");
    printf("7. What is the output of the following code?\n");
    printf(" $str1 = 'Hello';\n");
    printf(" $str2 = 'World';\n");
    printf(" echo $str1 . ' ' . $str2;\n");
    printf("\n A. HelloWorld\n");
    printf(" B. Hello World\n");
    printf(" C. 'Hello' 'World'\n");
    printf(" D. Error\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 // Question 8
  system("cls");
    printf("8. What is the correct way to include a PHP file in another PHP file?\n");
    printf("\n A. require_once 'file.php';\n");
    printf(" B. include 'file.php';\n");
    printf(" C. require 'file.php';\n");
    printf(" D. include_once 'file.php';\n");
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
    printf("9. What is the output of the following code?\n");
    printf(" $x = 5;\n");
    printf(" function my_func() {\n");
    printf(" global $x;\n");
    printf(" echo $x;\n");
    printf(" }\n");
    printf(" my_func();\n");
    printf("\n A. 0\n");
    printf(" B. 1\n");
    printf(" C. 5\n");
    printf(" D. Error\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }

// Question 10
 system("cls");
 printf("10. What is the output of the following code?\n");
 printf("$x = 10\n");
 printf("$y = '10' \n");
 printf("($x === $y)\n");
 printf("\n A.Equal");
 printf("\n B.Not Equal");
 printf("\n C. Syntax Error");
 printf("\n A.Undefined Variable");
  if (answer == 'B' || answer == 'b') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }

   
     printf("\n\nYour final score is %d out of 100.\n", score);


    FILE *fp;
    fp = fopen("php_score.txt", "a");
    fprintf(fp, "\nYour Final score in PHP Quiz =>  %d\n", score);
    fflush(stdin);
    fprintf(fp, "Your Name =>  %s\n", name);
    fprintf(fp, "Your Gender =>  %s\n", gender);
    fprintf(fp, "Your City =>  %s\n", city);
    fflush(stdin);
    //fprintf(fp, "Your age=>  %d\n", age);
    fprintf(fp,"\n-----------------------------------------");
    fclose(fp);
    // FILE *fp;
    // char question[100];
    // int numQuestions = 0;
    
    // fp = fopen("PQues.txt", "r");
    // if (fp == NULL) {
    //     printf("Error opening file.");
    //     return 1;
    // }
    
    // while (fgets(question, 100, fp) != NULL && numQuestions < MAX_QUESTIONS) {
    //     printf(" %s", question);
    //     numQuestions++;

        
    // }
    
    // fclose(fp);

   
}


