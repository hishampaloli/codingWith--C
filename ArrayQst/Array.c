#include <stdio.h>

int isMult(int num) {
  
  int flag = 0;
 
  for (int i = 2; i < num/2 ; i++)
  {
    if (num % i == 0)
    {
      flag = 1;
      break;
    }
   
  }
 
  if (flag == 1)
  {
    return 0;
  }else {
    return 1;
  }
}

int isOdd(int num) {
  if (num % 2 != 0)
  {
    return 1;
  }else {
    return 0;
  }
  
}

int main() {  

  int n = 5, k = 3;

  for (int i = 1; i <= k; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("X");
      if (j == k)
      {
        i = 0;
        k++;
      } 
    }
    
      if (k >= 6)
      {
        break;
      }   
    printf("\n");
    
  }
  

    
    
  
    return 0;  
}  