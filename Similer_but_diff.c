#include<stdio.h>
#include<conio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
    int choice , wrongQuestions[20] , wrongCount = 0; // Array to store wrong question numbers  // Counter for wrong answers
    float sum = 0, cor = 0, wro = 0;
    char seeMistakes;

    printf("\t\tProject Name: Quiz Of C Programming\n");
    printf("\n");
    printf("\t\tDeveloper Group: Bengal Programmer\n");
    printf("\n");

    // Question 1
    printf("I) Which one is Escape Sequence for The (Alert)Bell?\n");
    printf("1) o       2) t\n");
    printf("3) b       4) a\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 4) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 1; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 2
    printf("II) How Many Keywords in C Programming?\n");
    printf("1) 69       2) 420\n");
    printf("3) 32       4) 23\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 2; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 3
    printf("III) What is the size of Int?\n");
    printf("1) 4 Bytes       2) 16 Bytes\n");
    printf("3) 8 Bytes       4) 7 Bytes\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 3; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 4
    printf("IV) Which One Is Input Function?\n");
    printf("1) scanf       2) printf\n");
    printf("3) puts        4) getchar\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 4; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 5
    printf("V) Which Arithmetic Operator is used to get the Square Root of a number?\n");
    printf("1) pow       2) tan\n");
    printf("3) cos       4) sqrt\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 4) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 5; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 6
    printf("VI) Which One Is Correct Variable?\n");
    printf("1) NumBer       2) number\n");
    printf("3) num ber      4) 2number\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 6; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 7
    printf("VII) What the size of char?\n");
    printf("1) 1 Bits        2) 8 Bytes\n");
    printf("3) 1 Biytes      4) 8 Bits\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 4) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 7; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 8
    printf("VIII) Which One Is Increment for Unary Operator?\n");
    printf("1) +a-       2) +a+\n");
    printf("3) a++       4) ++a\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 8; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 9
    printf("IX) Which one Is Logical Not in Logical Operator?\n");
    printf("1) !       2) ?\n");
    printf("3) &       4) ||\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 9; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 10
    printf("X) What the size of Double?\n");
    printf("1) 8 Bits       2) 64 Bits\n");
    printf("3) 64 Bytes     4) 8 Biytes\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 10; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 11
    printf("XI) Which One is correct?\n");
    printf("1) pRiNtF()       2) PriNtF(""):\n");
    printf("3) printf("");    4) printf()\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 11; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 12
    printf("XII) Which Is The ASCII Value for capital 'X'?\n");
    printf("1) 99        2) 69\n");
    printf("3) 120       4) 95\n");  
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 4) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 12; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 13
    printf("XIII) What is The Format Spceifier for 'Double?\n");
    printf("1) %%d       2) %%lf \n");
    printf("3) %%l       4) %%f\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 13; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 14
    printf("XIV) Which One Is Bitwize ExOR?\n");
    printf("1) &       2) ^\n");
    printf("3) ~       4) >>\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 14; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 15
    printf("XV) Which Symbol Use For Trenary Operator?\n");
    printf("1) num1>num2 ? num1::num2       2) num1>num2 ? num1:num2\n");
    printf("3) num1>num2 ?? num1:num2       4) num1>>num2 ?? num1::num2\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 15; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 16
    printf("XVI) printf(\"Sum Is 69\"); which is the output?\n");
    printf("1) sum=69          2) 69\n");
    printf("3) sum is 69       4) Sum Is 69\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 4) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 16; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 17
    printf("XVII) Which one is loop?\n");
    printf("1) or            2) for\n");
    printf("3) else if       4) if\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 17; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 18
    printf("XVIII) How to initialize an array?\n");
    printf("1) array mark[5] = {19, 10, 8, 17, 9};       2) int mark[5] = {19, 10, 8, 17, 9};\n");
    printf("3) int mark[5] = 19, 10, 8, 17, 9;           4) int mark{5} = [19, 10, 8, 17, 9};\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 18; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 19
    printf("XIX) How to Declare Strings in C?\n");
    printf("1) char s[5];       2) char s(5);\n");
    printf("3) char s<5>;       4) char s{5};\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 19; // Store question number
    }
    printf("Hit Enter For Next Question");
    getch();
    system("cls");

    // Question 20
    printf("XX) Who Is The Inventor of C programming ?\n");
    printf("1) Nur Musk         2) FKN Ritchie\n");
    printf("3) Naim Starc       4) Dennis Ritchie\n");
    printf("Please Enter The Answer: ");
    scanf("%d", &choice);
    if (choice == 4) {
        printf("Your Answer is Correct!\n");
        sum += 1;
        cor += 1;
    } else {
        printf("Ohh! You are wrong\n");
        sum -= 0.25;
        wro += 1;
        wrongQuestions[wrongCount++] = 20; // Store question number
    }
    printf("Press Enter To See Your Result");
    getch();
    system("cls");



    // Final results
    printf("You have given %.1f right answers\n", cor);
    printf("But you have guessed %.1f wrong\n", wro);
    printf("Your total marks are %.2f - %.2f = %.2f\n", cor, wro * 0.25, sum);

    // Option to see the correct answers for wrong questions
    printf("\nWould you like to see the correct answers for the questions you got wrong? (y/n): ");
    scanf(" %c", &seeMistakes);

    if (seeMistakes == 'y' || seeMistakes == 'Y') {
        for (int i = 0; i < wrongCount; i++) {
            printf("\nQuestion %d:\n", wrongQuestions[i]);
            switch (wrongQuestions[i]) {
                case 1:
                    printf("I) Which one  is Escape Sequence for The (Alert)Bell?\n");
                    printf("Correct Answer: 4) A\n");
                    break;
                case 2:
                    printf("II) How Many Keywords in C Programming?\n");
                    printf("Correct Answer: 3) 32\n");
                    break;
                case 3:
                    printf("III) What the size of Int?\n");
                    printf("Correct Answer: 1) 4 Bytes\n");
                    break;
                case 4:
                    printf("IV) Which One Is Input Function?\n");
                    printf("Correct Answer: 1) scanf\n");
                    break;
                case 5:
                    printf("V) Which Arithmetic Operator used for get Square Root of a number?\n");
                    printf("Correct Answer: 4) sqrt\n");
                    break;
                case 6:
                    printf("VI) Which One Is Correct Variable?\n");
                    printf("Correct Answer: 2) number\n");
                    break;
                case 7:
                    printf("VII) What the size of char?\n");
                    printf("Correct Answer: 4) 8 Bits\n");
                    break;
                case 8:
                    printf("VIII) Which One Is Increment for Unary Operator?\n");
                    printf("Correct Answer: 3) a++\n");
                    break;
                case 9:
                    printf("IX) Which one Is Logical Not in Logical Operator?\n");
                    printf("Correct Answer: 1) !\n");
                    break;
                case 10:
                    printf("X) What the size of Double?\n");
                    printf("Correct Answer: 2) 64 Bits\n");
                    break;
                case 11:
                    printf("XI) Which One is correct?\n");
                    printf("Correct Answer: 3) printf("");\n");
                    break;
                case 12:
                    printf("XII) Which Is The ASCII for capital 'X'?\n");
                    printf("Correct Answer: 4) 95\n");
                    break;
                case 13:
                    printf("XIII) What is The Format Spceifier for 'Double?\n");
                    printf("Correct Answer: 2) %%lf\n");
                    break;
                case 14:
                    printf("XIV) Which One Is Bitwize ExOR?\n");
                    printf("Correct Answer: 2) ^\n");
                    break;
                case 15:
                    printf("XV) Which Symbol Use For Trenary Operator?\n");
                    printf("Correct Answer: 2) num1>num2 ? num1:num2\n");
                    break;
                case 16:
                    printf("XVI) printf(\"Sum Is 69\"); which is the output?\n");
                    printf("Correct Answer: 4) Sum Is 69\n");
                    break;
                case 17:
                    printf("XVII) Which one is loop?\n");
                    printf("Correct Answer: 2) for\n");
                    break;
                case 18:
                    printf("XVIII) How to initialize an array?\n");
                    printf("Correct Answer: 2) int mark[5] = {19, 10, 8, 17, 9};\n");
                    break;
                case 19:
                    printf("XIX) How to Declare Strings in C?\n");
                    printf("Correct Answer: 1) char s[5]\n");
                    break;
                case 20:
                    printf("XX) Who Is The Inventor of C programming ?\n");
                    printf("Correct Answer: 4) Dennis Ritchie\n");
                    break;
                
            }
        }
    }

    return 0;
}