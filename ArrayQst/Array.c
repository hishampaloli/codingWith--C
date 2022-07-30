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
  
   int n = 8,k = 1;


    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= k; j++)
      {
        printf("*");
      }

      for (int j = 1; j <= n - i; j++)
      {
        printf("  ");
      }

    for (int j = 1; j <= n - i; j++)
      {
        printf("  ");
      }

      for (int j = 1; j <= k; j++)
      {
        printf("*");
      }

      k= k +2;
      

      printf("\n");
      
    }
    
   
   
    
   }
   
    
    

   
			
