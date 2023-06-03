#include<stdio.h>
#include<conio.h>
#define MAX_QUESTIONS 50 
void Pshow() {
    FILE *fp;
    char question[100];
    //int age;
    int numQuestions = 0;
    
    fp = fopen("php_score.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    
    while (fgets(question, 100, fp) != NULL && numQuestions < MAX_QUESTIONS) {
        printf(" %s", question);
        numQuestions++;
    }
    
    fclose(fp);
   

}

