
#include <stdio.h>
#include <stdlib.h>



int main() {
int number;


  printf("enter 1 to find string length\n 2 for joining\n 3 for reverse\n 4 for exit");
  scanf("%d", &number);

  switch (number)
  {
  case 1 :
    length();
    break;

  case 2 :
    join();
    break;

  case 3 :
    reverse();
    break;  
   case 4 :
   break;      

  default:
    break;
  }
 
}

void length() {
 char string[100];

  printf("enter a string\n");
  scanf("%s",string);
 int length = 0;
 for (int i = 0; string[i] != 0; i++)
 {
    length++;
 }
 printf("Length of the string is :- %d\n\n\n", length);
 main();
}

void join(){
    char str1[100], str2[100];
      printf("enter a string 1\n");
      scanf("%s",str1); 

      printf("enter a string 2\n");
      scanf("%s",str2); 

    printf("%s %s\n", str1, str2);
    main();
}

void reverse(){
  char string[100];
  printf("enter a string\n");
  scanf("%s",string);


   int n=strlen(string);
    printf("\nReversed string is :-  \n");

	for(int i = n - i; i >= 0; i--){
		printf("%c", string[i]);
	}

    main();
}