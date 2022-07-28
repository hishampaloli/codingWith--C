#include <stdio.h>

int isPrime(int num) {
  int flag = 0;
  for (int i = 2; i <= num/2; i++)
  {
    if (num % i == 0)
    {
      flag = 1;
      break;
    }
    
  }
  
  if (flag == 0)
  {
    return 1;
  }else {
    return 0;
  }
  
}


int main() { 
  
   int n = 5;

   for (int i = 1; i <= n; i++)
   {
    for (int j = 1; j <= i; j++)
    {
      if (j == 1)
      {
        printf("I ");
      }else if (j == 2)
      {
        printf("N ");
      }else if (j == 3)
      {
        printf("D ");
      }else if (j == 4)
      {
        printf("I ");
      }else {
        printf("A ");
      }
      
      
      
       
    }
    
    printf("\n");
    
   }
  
    

    printf("\n");
    
   }
   
			
