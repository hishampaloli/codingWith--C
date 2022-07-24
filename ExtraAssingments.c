
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	



	  









//    q3, Write a program to compare two strings without using string functions.


    // code>>>>>>

	// char string1[100], string2[100], check = 0;

	//    printf("Enter a string \n");
	//    gets(string1);

	//    printf("Enter another string \n");
	//    gets(string2);

	//    printf("string1 =%s \n", string1);
	//    printf("string2 =%s \n", string2);

	//    for(int i = 0; i < strlen(string1); i++) {
	// 	   if(string1[i] != string2[i]) {
	// 		   check = -1;
	// 	   }
	//    }

	//    check == -1 ? printf("NOT SAME") : printf("SAME");

// output>>>>>>>>

// Enter a string 
// hisham
// Enter another string 
// hisham
// string1 =hisham 
// string2 =hisham
// SAME

// **********************************************************************











//    q5,  Write a Program to copy one string to another without using String Functions ?

    // code>>>>>>


//    char string[100], newString[100];
   
//    printf("Enter a string\n");
//    scanf("%s", string);

//    for (int i = 0; i < string[i] != 0; i++) {
// 	   newString[i] = string[i];
//    }

//    printf("String1 :- %s\n", string);
//    printf("New String :- %s\n", newString);
	

// output>>>>>>>>

// Enter a string 
// hisham
// Enter another string 
// hisham
// string1 =hisham 
// string2 =hisham
// SAME

// **********************************************************************











//    q6,  Write a Program to copy one string to another without using String Functions ?

    // code>>>>>>


//    int n;
//    char str[100][100],s[100];
//    printf("Enter names of some malayalam movies:");
//    scanf("%d",&n);
//    printf("Enter names in any order:");
//    for(int i = 0; i < n; i++){
//       scanf("%s",str[i]);
//    }
//    for(int i = 0; i < n; i++){
//       for(int j = i + 1; j < n; j++){
//          if(strcmp(str[i],str[j]) < 0){
//             strcpy(s,str[i]);
//             strcpy(str[i],str[j]);
//             strcpy(str[j],s);
//          }
//       }
//    }
//    printf("The sorted order of names are:");
//    for(int i=0; i<n; i++){
//       printf("%s\n",str[i]);
//   }


// output>>>>>>>>

// Enter number of names :3
// Enter names in any order:xavi
// hisham
// abhi
// The sorted order of names are:xavi
// hisham
// abhi

// **********************************************************************














//    q7, Write a program to read the string “India is my country” from the user and find the position of the word “is” ?

    // code>>>>>>

	char word[100];
    int flag = 0;

    printf("enter a word to find the word 'is' in it \n");
    gets(word);
    for (int i = 0; i <= strlen(word); i++) {
        if (word[i] == ' ' & word[i + 1] == 'i' & word[i + 2] == 's' & word[i + 3] == ' '){
            flag = 0;
           return printf("found 'is' between %d and %d", i, i + 3);
        }else {
            flag = 1;
        }
    }

    if (flag = 1) {
        printf("Word not found");
    }
    
    


// output>>>>>>>>

// Enter a letterA
// ASCII code of the letter is :- 65

// **********************************************************************







//    q8, Read random numbers [ 22,87,178,34,10,45,22,89,31] from user and sort numbers in descending Order?

    // code>>>>>>


//    int count, numbers[100], temp[100];

//    printf("Enter the number of numbers you wnat to sort\n");
//    scanf("%d", &count);

//    printf("Enter the numbers in any order \n");
//    for (int i = 0; i < count; i++) {
// 	   scanf("%d", &numbers[i]);
//    }

//    for (int i = 0; i < count; i++) {
// 	for (int j = i + 1; j < count; j++)	{
// 		if(numbers[i] < numbers[j]) {
// 			temp[i] = numbers[i];
// 			numbers[i] = numbers[j];
// 			numbers[j] = temp[i];
// 		}
// 	}
	
//    }
   
//    for (int i = 0; i < count; i++) {
// 	printf("%d \t", numbers[i]);
//    }
   


// output>>>>>>>>

// Enter the number of numbers you wnat to sort
// 5
// Enter the numbers in any order 
// -22222
// 433
// 4
// 74
// 2433443
// 2433443         433     74      4       -22222 

// **********************************************************************







//    q9, Read a character from the user and find the ASCII code of that character?

    // code>>>>>>

	// char letter;
    // printf("Enter a letter");
    // scanf("%c", &letter);

    // printf("ASCII code of the letter is :- %d", letter);


// output>>>>>>>>

// Enter a letterA
// ASCII code of the letter is :- 65

// **********************************************************************









//    q10, Write a program to print the following pattern.

    // code>>>>>>

    // int n ;

    // printf("Enter a limit");
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++) {

    //     for(int space = n - i + 1; space >= 0; space--){
    //         printf(" ");
    //     }

    //     for(int j = 1; j <= i; j++) {
    //         printf("%c",'A'-1 +j);
    //     }
    //     for(int j = i-1; j >= 1; j--){
    //         printf("%c", 'A'- 1 + j);
    //     }
    //     printf("\n");
    // }
    

// output>>>>>>>>

//       A
//      ABA
//     ABCBA
//    ABCDCBA
//   ABCDEDCBA

// **********************************************************************







}





