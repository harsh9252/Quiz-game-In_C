#include<stdio.h>
void java_Quiz() {
     system("cls");
    printf("\n----- Java Quiz -----\n");
   
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
    char answer;
    system("cls");
    printf("Welcome to the Java Quiz!\n\n");

    // Question 1
     system("cls");
    printf("1. What is the output of the following code?\n\n");
    printf("   int x = 5;\n");
    printf("   System.out.println(x++);\n");
    printf("   System.out.println(x);\n");
    printf("   A. 5, 5\n");
    printf("   B. 5, 6\n");
    printf("   C. 6, 5\n");
    printf("   D. 6, 6\n");
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
    printf("\n2. What is the correct syntax for creating an object of the 'Car' class?\n\n");
    printf("   A. car myCar = new Car();\n");
    printf("   B. Car myCar = new car();\n");
    printf("   C. Car myCar = create Car();\n");
    printf("   D. car myCar = create Car();\n");
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
    printf("\n3. What is the output of the following code?\n\n");
    printf("   String str1 = \"Hello\";\n");
    printf("   String str2 = \"World\";\n");
    printf("   System.out.println(str1 + str2);\n");
    printf("   A. HelloWorld\n");
    printf("   B. Hello World\n");
    printf("   C. str1str2\n");
    printf("   D. Error\n");
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
    printf("\n4. What is the correct syntax for declaring a method in Java?\n\n");
    printf("   A. methodName()\n");
    printf("   B. void methodName()\n");
    printf("   C. methodName(void)\n");
    printf("   D. void methodName(int arg)\n");
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
    printf("\n5. Which keyword is used to prevent inheritance in Java?\n\n");
    printf("   A. final\n");
    printf("   B. abstract\n");
    printf("   C. static\n");
    printf("   D. private\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        score += 10;
        printf("Correct!\n");
    } else
    {
        printf("Incorrect!\n");
    }
 
        // Question 6
         system("cls");
    printf("\n6. Which of the following is a wrapper class in Java?\n\n");
    printf("   A. int\n");
    printf("   B. double\n");
    printf("   C. Integer\n");
    printf("   D. char\n");
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
    printf("\n7. What is the difference between an interface and a class in Java?\n\n");
    printf("   A. A class can have constructors, an interface cannot\n");
    printf("   B. A class can implement multiple interfaces, an interface cannot\n");
    printf("   C. A class cannot have abstract methods, an interface can\n");
    printf("   D. A class cannot have static methods, an interface can\n");
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
    printf("   for (int i = 0; i < 5; i++) {\n");
    printf("       System.out.println(i);\n");
    printf("   }\n");
    printf("   A. 0 1 2 3 4\n");
    printf("   B. 1 2 3 4 5\n");
    printf("   C. 0 1 2 3 4 5\n");
    printf("   D. 1 2 3 4\n");
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
    printf("\n9. Which of the following is not a primitive data type in Java?\n\n");
    printf("   A. boolean\n");
    printf("   B. byte\n");
    printf("   C. char\n");
    printf("   D. string\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'D' || answer == 'd') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }
 
    // Question 10
     system("cls");
    printf("\n10. What is the correct syntax for reading input from the user in Java?\n\n");
    printf("   A. System.in.read()\n");
    printf("   B. Scanner input = new Scanner(System.in);\n");
    printf("   C. BufferedReader input = new BufferedReader(new InputStreamReader(System.in));\n");
    printf("   D. All of the above\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        score += 10;
        printf("Correct!\n");
    } else {
        printf("Incorrect!\n");
    }

    printf("\nYour score is %d out of 100.\n",score);

     FILE *file = fopen("Java_scores.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
     
    fprintf(file, "\nYour Final Score in Java => %d\n",score);
     fflush(stdin);
    fprintf(file, " Your Name => %s\n", name);
    fprintf(file, "Your Gender => %s\n", gender);
    fprintf(file, "Your City => %s\n", city);
    fflush(stdin);
    // fprintf(file, "Your Age => %d\n", age);
     fprintf(file,"\n-----------------------------------------");
    fclose(file);


   
}