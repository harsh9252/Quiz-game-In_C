#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "help.c"
#include "c_file.c"
#include "java_fl.c"
#include "javas_fl.c"
#include "php_file.c"
#include "c_show.c"
#include "php_show.c"
#include "js_show.c"
#include "java_show.c"
//#define PASSWORD "mypassword"
#include "Cadd.c"
#include "Jsadd.c"
#include "Padd.c"
#include "Jadd.c"
#include "CquesSh.c"
#include "PQuesSh.c"
#include "JSQuesSh.c"
#include "JQuesSh.c"
//#define QuesArray 10	
 main() 
{
    int choice,choices;
   // struct Course QuesArr[QuesArray];
	//int QuesIndex= -1;
	int i,a,name,k=0;
    char ch;
	char ps;
	int QuesCh;
	//int studentCh;
    char password[50];
system("cls");

   

	
while(1)
	{
 	

    
        system("cls");
		printf("\n\t\t\t--: College Activity :--");
		printf("\n\t\t\t\t1.Admin.");
		printf("\n\t\t\t\t2.Student.");
		printf("\n\t\t\t\t3.Scoreboard.");
		printf("\n\t\t\t\t4.Help.");
		printf("\n\t\t\t\t5.Exit.");
		printf("\n\n\tEnter Your Choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
            case 1:
                    while(1)
				{
					system("cls");
   printf("\n\t\t**************************************************************************************************************************");
   printf("\n\t\t*                                                                                                                        *");
   printf("\n\t\t*                                                                                                                        *");
   printf("\n\t\t*       => Welcome to the Programming Language Quiz!	 											                      *");
   printf("\n\t\t*                                                                                                                        *");
   printf("\n\t\t*       => This Quiz is designed to test your knowledge in different programming languages such as                       *");
   printf("\n\t\t*          PHP, JavaScript, and Java. Each section contains 10 multiple-choice questions, and you will                   *");
   printf("\n\t\t*          be awarded 10 points for each correct answer.                                                                 *");
   printf("\n\t\t*                                                                                                                        *");
   printf("\n\t\t*       => To begin the Quiz, please enter the password to proceed to the menu-driven interface. O                       *");
   printf("\n\t\t*          inside, select the programming language of your choice and start answering the questions                      *");
   printf("\n\t\t*          abilities.                                                                                                    *");
   printf("\n\t\t*                                                                                                                        *");
   printf("\n\t\t*       => Good luck, and we hope you enjoy the Quiz!                                                                    *"); 
   printf("\n\t\t*                                                                                                                        *");
   printf("\n\t\t*                                                                                                                        *");
   printf("\n\t\t**************************************************************************************************************************");
   getch();
  // system("cls");
		system("cls");
					printf("\n\t\t\t--: Qustion Option(s) :--");
					printf("\n\t\t\t\t1. Add Question.");
					printf("\n\t\t\t\t2. Show Question Catagory.");
					printf("\n\t\t\t\t3. Show Added Question(s)");
					printf("\n\t\t\t\t4. Back to Main Menu.");
					printf("\n\n\tEnter Your Choice : ");
					scanf("%d", &choices);
					switch(choices)
					{
                        system("cls");
						case 1 :
							system("cls");
					printf("\n\t\t\t--: Question Option(s) :--");
					printf("\n\t\t\t\t1. ADD C Question.");
					printf("\n\t\t\t\t2. ADD PHP Question");
					printf("\n\t\t\t\t3. Add Javascript Question.");
					printf("\n\t\t\t\t4. Add Java Question.");
					printf("\n\t\t\t\t5. Exit.");
					printf("\n\n\tEnter Your Choice : ");
					scanf("%d", &choices);
					switch(choices)
					{
                        system("cls");
						case 1 :
							 Cadd();
							getch();
							break;
						case 2 :
                         Padd();
							getch();
							break;
						case 3 :
                         Jsadd();
							getch();
							break;						
						case 4 :
                         Jadd();
							getch();
							break;
						case 5:
							printf("\n\tExit.....!!!!");
							getch();
							break;
					}
                    //getch();
				break;
						case 2:
							system("cls");
								printf("\n\t\t\t--: Question Catagory(s) :--");
								printf("\n\t\t\t\t1. C.");
								printf("\n\t\t\t\t2. PHP.");
								printf("\n\t\t\t\t3. JAVA");
								printf("\n\t\t\t\t4. JAVASCRIPT.");	
								getch();
							    break;
						case 3 :
							system("cls");
					printf("\n\t\t\t--: Question Option(s) :--");
					printf("\n\t\t\t\t1. Show C languade.");
					printf("\n\t\t\t\t2. SHow PHP Question");
					printf("\n\t\t\t\t3. Show Javascript Question.");
					printf("\n\t\t\t\t4. Show Java Question.");
					printf("\n\t\t\t\t5. Exit.");
					printf("\n\n\tEnter Your Choice : ");
					scanf("%d", &choices);
					switch(choices)
					{
                        system("cls");
						case 1 :
							CQUES();
							getch();
							break;
						case 2 :
                            PQUES();
							getch();
							break;
						case 3 :
                         JSQUES();
							getch();
							break;
						case 4 :
                         JQUES();
							getch();
							break;
						case 5:
							printf("\n\tExit.....!!!!");
							getch();
							break;
					}
                    //getch();
				break;
						case 4:
							printf("\n\tExit.....!!!!");
							getch();
							break;
					}
				//getch();
				break;
		
				
    }
	break;
				
			case 2:
			system("cls");
					printf("\n\t\t\t--: Question Option(s) :--");
					printf("\n\t\t\t\t1. C languade.");
					printf("\n\t\t\t\t2. PHP Question");
					printf("\n\t\t\t\t3. Javascript Question.");
					printf("\n\t\t\t\t4. Java Question.");
					printf("\n\t\t\t\t5. Exit.");
					printf("\n\n\tEnter Your Choice : ");
					scanf("%d", &choices);
					switch(choices)
					{
                        system("cls");
						case 1 :
							 c_Quiz();
							getch();
							break;
						case 2 :
                         php_Quiz();
							getch();
							break;
						case 3 :
                         javascript_Quiz();
							getch();
							break;
						case 4 :
                         java_Quiz();
							getch();
							break;
						case 5:
							printf("\n\tExit.....!!!!");
							getch();
							break;
					}
                    //getch();
				break;

				case 3:
				system("cls");
					printf("\n\t\t\t--: Score Board(s) :--");
					printf("\n\t\t\t\t1. Check C Score .");
					printf("\n\t\t\t\t2. Check PHP Score .");
					printf("\n\t\t\t\t3. Check JAVASCRIPT Score ..");
					printf("\n\t\t\t\t4. Check JAVA Score .");
					printf("\n\t\t\t\t5. Exit.");
					printf("\n\n\tEnter Your Choice : ");
					scanf("%d", &choices);
					switch(choices)
					{
                        system("cls");
						case 1 :
							Cshow();
							getch();
							break;
						case 2 :
                         Pshow();
							getch();
							break;
						case 3 :
                         JSshow();
							getch();
							break;
						case 4 :
                         Jshow();
							getch();
							break;
						case 5:
							printf("\n\tExit.....!!!!");
							getch();
							break;
					}
                    //getch();
				break;
				
			case 4:
					        help();
							getch();
							break;
			
			case 5 :
				printf("\n\tThank you for Giving Quiz.....!!!!");
				getch();
				exit(0);
		}
	}
	
} 
		
	

