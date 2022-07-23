
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

   // q1 :- Accept a char input from the user and display it on the console.

   // code >>>>>>>>>>>>>>>>>>>>>>

   // char ch1;
   // printf("Enter a Char\n");
   // scanf("%c", &ch1);

   // printf("You Enterd: %c", ch1);

   // OUTPUT >>>>>>>>>>>>>>>>>>>

   // Enter a Char
   // 2
   // You Enterd: 2

   // *************************************************************************

   // q2 :- Accept two inputs from the user and output its sum.

   // code >>>>>>>>>>>>>>>>>>>>>>
   // int number1, number2;
   // printf("Enter a two numbers\n");
   // scanf("%d /n", &number1);
   // scanf("%d", &number2);

   // int sum = number1 + number2;

   // printf("Sum of the two numbers is: %d", sum);

   //   OUTPUT >>>>>>>>>>>>>>>>>>>
   //   Enter a two numbers
   //   0
   //   2
   //   Sum of the two numbers is: 2

   // *************************************************************************

   // q3 :- Write a program to find the simple interest.

   // code >>>>>>>>>>>>>>>>>>>>>>
   // int PrincipalAmount;
   // float InterestRate, NumberOfYears;

   // printf("Enter Principle amount, Interst rate, Number of years \n");
   // scanf("%d\n", &PrincipalAmount);
   // scanf("%f\n", &InterestRate);
   // scanf("%f", &NumberOfYears);

   // float simpleInteres = (PrincipalAmount * InterestRate * NumberOfYears) / 100;

   // printf("Simple Interest is :- %f", simpleInteres);

   // OUTPUT >>>>>>>>>>>>>>>>>>>
   // Enter Principle amount, Interst rate, Number of years
   // 10
   // 10
   // 1
   // Simple Interest is :- 1.000000

   // *************************************************************************

   // q4 :- Write a program to find the simple interest.

   // code >>>>>>>>>>>>>>>>>>>>>>
   // float mark;

   // printf("Enter your mark out of 100\n");

   // scanf("%f", &mark);

   // if (mark >= 50) {
   //    printf("PASSED");
   // } else (mark > -1 && mark < 50 ) {
   //    printf("FAILED");
   // }

   // OUTPUT >>>>>>>>>>>>>>>>>>>
   // Enter your mark out of 100
   // 49
   // FAILED

   // *************************************************************************

   // q5 :- Write a program to show the grade obtained by a student after he/she enters their total mark percentage.

   // code >>>>>>>>>>>>>>>>>>>>>>
   // float mark;

   // printf("Enter your mark out of 100 to know your grades\n");

   // scanf("%f", &mark);

   // if (mark > 90) {
   //    printf("A");
   // } else if (mark >= 80 && mark <= 89 ) {
   //    printf("B");
   // } else if (mark >= 70 && mark <= 79 ) {
   //    printf("C");
   // } else if (mark >= 60 && mark <= 69 ) {
   //    printf("D");
   // } else if (mark >= 50 && mark <= 59 ) {
   //    printf("E");
   // }else {
   //    printf("F");
   // }

   // OUTPUT >>>>>>>>>>>>>>>>>>>
   // Enter your mark out of 100 to know your grades
   // 60
   // D

   // *************************************************************************

   // q6 :- Using the ‘switch case’ write a program to accept an input number from the user and output the day as follows.

   // code >>>>>>>>>>>>>>>>>>>>>>
   // int day;

   // printf("Enter a day \n");

   // scanf("%d", &day);

   // switch (day)
   // {
   // case 1:
   //    printf("SUNDAY");
   //    break;
   // case 2:
   //    printf("MONDAY");
   //    break;
   // case 3:
   //    printf("THEUSDAY");
   //    break;
   // case 4:
   //    printf("WEDNESDAY");
   //    break;
   // case 5:
   //    printf("THURSDAY");
   //    break;
   // case 6:
   //    printf("FRIDAY");
   //    break;
   // case 7:
   //    printf("SATURDAY");
   //    break;

   // default:
   //    printf("not valide");
   // }

   // OUTPUT >>>>>>>>>>>>>>>>>>>
   // Enter a day
   // 6
   // FRIDAY

   // *************************************************************************

   return 0;
}