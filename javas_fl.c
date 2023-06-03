#include<stdio.h>

void javascript_Quiz() {
     system("cls");
      printf("\n-----Javascript Quiz -----\n");
    
    int score = 0;
     fflush(stdin);
     char name[20];
    char gender[20];
    char city[20];
     
    //printf("Welcome to the Quiz!\n\n");
     printf("\n\t Enter the Name : ");
    gets(name);
    printf("\n\t Enter the Gender : ");
    gets(gender);
    printf("\n\t Enter the City : ");
    gets(city);
    char answer;
    system("cls");

    // Question 1
    printf("1. What does the DOM stand for in JavaScript?\n");
    printf("\n   A. Document Object Model\n");
    printf("   B. Data Object Model\n");
    printf("   C. Document Oriented Model\n");
    printf("   D. Data Oriented Model\n");
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
    printf("2. What is the correct way to declare a JavaScript variable?\n");
    printf("\n   A. var x;\n");
    printf("   B. variable x;\n");
    printf("   C. v x;\n");
    printf("   D. x = var;\n");
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
    printf("3. What is the output of the following code?\n");
    printf("   var a = 5;\n");
    printf("   var b = 2;\n");
    printf("   var c = a + b;\n");
    printf("   console.log(c);\n");
    printf("\n   A. 5\n");
    printf("   B. 2\n");
    printf("   C. 7\n");
    printf("   D. Error\n");
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
    printf("4. What is the correct way to write an if statement in JavaScript?\n");
    printf("\n   A. if (x == y) {\n       // code here\n   }\n");
    printf("   B. if (x = y) {\n       // code here\n   }\n");
    printf("   C. if (x === y) {\n       // code here\n   }\n");
    printf("   D. if x == y {\n       // code here\n   }\n");
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
    printf("   for (var i = 0; i < 5; i++) {\n");
    printf("       console.log(i);\n");
    printf("   }\n");
    printf("\n   A. 0 1 2 3 4\n");
    printf("   B. 1 2 3 4 5\n");
    printf("   C. 0 1 2 3 4 5\n");
    printf("   D. Error\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
        if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 
    // Question 6
     system("cls");
    printf("6. What is the correct way to create a function in JavaScript?\n");
    printf("\n   A. function myFunction() {\n       // code here\n   }\n");
    printf("   B. myFunction() {\n       // code here\n   }\n");
    printf("   C. var myFunction() = function() {\n       // code here\n   };\n");
    printf("   D. function = myFunction() {\n       // code here\n   }\n");
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
    printf("   var arr = [1, 2, 3, 4, 5];\n");
    printf("   var result = arr.reduce(function(sum, current) {\n");
    printf("       return sum + current;\n");
    printf("   }, 0);\n");
    printf("   console.log(result);\n");
    printf("\n   A. 0\n");
    printf("   B. 15\n");
    printf("   C. [1, 2, 3, 4, 5]\n");
    printf("   D. Error\n");
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
    printf("8. What is the correct way to create a new array in JavaScript?\n");
    printf("\n   A. var arr = new Array();\n");
    printf("   B. var arr = [];\n");
    printf("   C. var arr = Array();\n");
    printf("   D. All of the above\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 
    // Question 9
     system("cls");
    printf("9. What is the output of the following code?\n");
    printf("   var x = 5;\n");
    printf("   function myFunction() {\n");
    printf("       console.log(x);\n");
    printf("   }\n");
    printf("   myFunction();\n");
    printf("\n   A. 5\n");
    printf("   B. Undefined\n");
    printf("   C. Error\n");
    printf("   D. NaN\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 
    // Question 10
     system("cls");
    printf("10. What is the correct way to add an element to the end of an array in JavaScript?\n");
    printf("\n   A. arr.push(element);\n");
    printf("   B. arr.append(element);\n");
    printf("   C. arr.add(element);\n");
    printf("   D. arr.insert(element);\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
    
    printf("\n\nYour final score is %d out of 100.\n", score);

    FILE *file = fopen("Js_scores.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "\nYour Final Score In JavaScript => %d\n", score);
    fflush(stdin);
    fprintf(file, "Your Name => %s\n", name);
    fprintf(file, "Your Gender => %s\n", gender);
    fprintf(file, "Your City => %s\n", city);
    fflush(stdin);
    //fprintf(file, "Your Age => %d\n", age);
     fprintf(file,"\n-----------------------------------------");
    fclose(file);
}