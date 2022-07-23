
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
   // } else if(mark > -1 && mark < 50 ) {
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







    // q7 :- Write a program to print the multiplication table of given numbers.


   // code >>>>>>>>>>>>>>>>>>>>>>
   // int number;

   // printf("Enter a number to get its multipliation table \n");
   // scanf("%d", &number);

   // for(int i = 1; i <= 5; i++) {
   //    int mult = i * number;
   //    printf("%d * %d = %d \n", i, number, mult);
   // }



// OUTPUT >>>>>>>>>>>>>>>>>>>
// Enter a number to get its multipliation table 
// 5
// 1 * 5 = 5 
// 2 * 5 = 10
// 3 * 5 = 15
// 4 * 5 = 20
// 5 * 5 = 25

   // *************************************************************************







    // q8 :- Write a program to find the sum of all the odd numbers for a given limit.


   // code >>>>>>>>>>>>>>>>>>>>>>
   // int number, sum = 0;

   // printf("Enter a number to sum all the odd numbers within that number \n");
   // scanf("%d", &number);

   // for(int i = 0; i <= number; i++) {
   //    if(i % 2 != 0){
   //       sum = sum + i;
   //    }
   // }
   
   //       printf("Sum of odd numbers = %d ", sum);



// OUTPUT >>>>>>>>>>>>>>>>>>>
// Enter a number to sum all the odd numbers within that number 
// 100
// Sum of odd numbers = 2500  

   // *************************************************************************







    // q9 :- Write a program to print the following pattern.


   // code >>>>>>>>>>>>>>>>>>>>>>

   // for(int i = 1; i <= 5; i++) {
   //    for(int j = 1; j <= i; j++) {
   //       printf("%d ", j);
   //    }
   //    printf("\n");
   // }
   
        



// OUTPUT >>>>>>>>>>>>>>>>>>>
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

   // *************************************************************************







    // q10 :- Write a program to interchange the values of two arrays.


   // code >>>>>>>>>>>>>>>>>>>>>>

//    int limit, array1[100], array2[100], temp;

//    printf("Enter a size of array");
//    scanf("%d", &limit);

//   for(int i = 0; i < limit; ++i) {
//     scanf("%d", &array1[i]);
//   }

//    for(int i = 0; i < limit; i++) {
//       scanf("%d", &array2[i]);
//    }

//    for(int i = 0; i < limit; i++) {
//       temp = array1[i];
//       array1[i] = array2[i];
//       array2[i] = temp;
//    }

//    for (int i = 0; i < limit; i++) {
//       printf(" array1 = %d \n", array1[i]);
//    }
//    for (int i = 0; i < limit; i++) {
//       printf(" array2 = %d \n", array2[i]);
//    }
   
        



// OUTPUT >>>>>>>>>>>>>>>>>>>
// Enter a size of array2
// 1
// 2

// 9
// 8
//  array1 = 9 
//  array1 = 8
//  array2 = 1
//  array2 = 2

   // *************************************************************************








    // q11 :-  Write a program to find the number of even numbers in an array.


   // code >>>>>>>>>>>>>>>>>>>>>>

//    int limit, array[100], even;

//    printf("Enter a size of array");
//    scanf("%d", &limit);

//    printf("Enter an array\n");

//    for (int i = 0; i < limit; i++) {
//       scanf("%d", &array[i]);
//    }

//    for(int j = 0; j < limit; j++) {
//       if(array[j] % 2 == 0){
//          even++;
//       }
//    }

// printf("Number of even number is :- %d", even);
        



// OUTPUT >>>>>>>>>>>>>>>>>>>
// Enter a size of array 6
// Enter an array
// 1
// 2
// 3
// 4
// 5
// 6
// Number of even number is :- 3

   // *************************************************************************








    // q12 :-  Write a program to sort an array in descending order.


   // code >>>>>>>>>>>>>>>>>>>>>>

   // int limit, array[100], even;

   // printf("Enter a size of array");
   // scanf("%d", &limit);

   // printf("Enter an array \n");

   // for (int i = 0; i < limit; i++) {
   //    scanf("%d", &array[i]);
   // }

   // for(int i = 0; i < limit; i++) {
   //    for(int j = 0; j < limit; j++) {
   //       if(array[i] > array[j]) {
   //          int temp = array[i];
   //          array[i] = array[j];
   //          array[j] = temp;
   //       }
   //    }
   // }

   // for (int i = 0; i < limit; i++) {
   //    printf(" %d", array[i]);
   // }
   



// OUTPUT >>>>>>>>>>>>>>>>>>>
// Enter a size of array 5
// Enter an array
// 2
// 8
// 3
// 0
// 4
//  8 4 3 2 0

   // *************************************************************************









    // q13 :-  Write a program to identify whether a string is a palindrome or not.


   // code >>>>>>>>>>>>>>>>>>>>>>

// char input[20];
// int temp = 0;
//     printf("Enter a string:");
//     scanf("%s", input);

//     int len = strlen(input);
//     for(int i = 0; i < len; i++){
//        if(input[i] != input[len - i - 1]){
//          temp = 1;
//        }

// }

//  if(temp == 0){
//          printf("PALINDROME");
//        } else {
//          printf("NOT PALINDROME");
//        }   


// OUTPUT >>>>>>>>>>>>>>>>>>>
// Enter a string:malayalam
// PALINDROME

   // *************************************************************************









    // q14 :-  Write a program to add to two dimensional arrays.


   // code >>>>>>>>>>>>>>>>>>>>>>


// int array1[200][200], array2[200][200], sum[100][100], count;

// printf("Enter a size");
// scanf("%d", &count);

// for(int i = 0; i < count; i++) {
//    for (int j = 0; j < count; j++) {
//      scanf("%d", &array1[i][j]);
//    }
// }
// printf("Array two");
// for(int i = 0; i < count; i++) {
//    for (int j = 0; j < count; j++) {
//      scanf("%d", &array2[i][j]);
//    }
// }

// for(int i = 0; i < count; i++) {
//    for (int j = 0; j < count; j++) {
//      sum[i][j] = array1[i][j] + array2[i][j];
//    }
// }

// for(int i = 0; i < count; i++) {
//    for (int j = 0; j < count; j++) {
//      printf("%d ", sum[i][j]);
//    }
//    printf("\n");
// }


// OUTPUT >>>>>>>>>>>>>>>>>>>
// Enter a size2
// 1
// 2
// 2
// 1
// Array two10
// 10
// 10
// 10
// 11 12 
// 12 11 

   // *************************************************************************









    // q15 :-  Write a program to accept an array and display it on the console using functions.


   // code >>>>>>>>>>>>>>>>>>>>>>



// int array1[200][200], array2[200][200], sum[100][100], count;

// printf("Enter a size");
// scanf("%d", &count);

// for(int i = 0; i < count; i++) {
//    for (int j = 0; j < count; j++) {
//      scanf("%d", &array1[i][j]);
//    }
// }
// printf("Array two");
// for(int i = 0; i < count; i++) {
//    for (int j = 0; j < count; j++) {
//      scanf("%d", &array2[i][j]);
//    }
// }

// for(int i = 0; i < count; i++) {
//    for (int j = 0; j < count; j++) {
//      sum[i][j] = array1[i][j] + array2[i][j];
//    }
// }

// for(int i = 0; i < count; i++) {
//    for (int j = 0; j < count; j++) {
//      printf("%d ", sum[i][j]);
//    }
//    printf("\n");
// }


// OUTPUT >>>>>>>>>>>>>>>>>>>
// Enter a size2
// 1
// 2
// 2
// 1
// Array two10
// 10
// 10
// 10
// 11 12 
// 12 11 

   // *************************************************************************









    // q20 :-  Write a program to print the following pattern using for loop.


   // code >>>>>>>>>>>>>>>>>>>>>>



//   int  k = 1, N;

//     printf("Enter N: ");
//     scanf("%d", &N);


//     for(int i=1; i<=N; i++)
//     {
//         for(int j=1; j<=i; j++, k++)
//         {
//             printf(" %d", k);
//         }

//         printf("\n");
//     }


// OUTPUT >>>>>>>>>>>>>>>>>>>
// 1
// 2	3
// 4	5	6
// 7	8	9	10

   // *************************************************************************
   









    // q21 :- Write a program to multiply the adjacent values of an array and store it in an another array.


   // code >>>>>>>>>>>>>>>>>>>>>>

//   int limit, array[100], alt[100] ;

//     printf("Enter N: ");
//     scanf("%d", &limit);

//     for(int i = 0; i < limit ; i++) {
//       scanf("%d", &array[i]);
//     }

//     for (int i = 0; i < limit; i++) {
//       alt[i] = array[i] * array[i+ 1];
//     }

//     for (int i = 0; i < limit - 1; i++)
//     {
//       printf("%d ", alt[i]);
//     }
    
    




// OUTPUT >>>>>>>>>>>>>>>>>>>
// 1
// 2	3
// 4	5	6
// 7	8	9	10

   // *************************************************************************












   return 0;
}