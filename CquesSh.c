#include <stdio.h>

#define MAX_QUESTIONS 50 

int CQUES() {
    FILE *fp;
    char question[100];
    int numQuestions = 0;
    
    fp = fopen("cQues.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    
    while (fgets(question, 100, fp) != NULL && numQuestions < MAX_QUESTIONS) {
        printf(" %s", question);
        numQuestions++;
    }
    
    fclose(fp);
    return 0;
}
