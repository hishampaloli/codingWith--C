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
  
   int n = 8;

   for (int i = 1; i <= n; i++)
   {

    for (int j = 1; j < i; j++)
    {
      if (i % 2 != 0)
    {
      if (j % 2 != 0)
      {
        printf("0");
      }else {
        printf("1");
      }
      
    }else {
       if (j % 2 != 0)
      {
        printf("1");
      }else {
        printf("0");
      }
    }
    }
    
    
    

    printf("\n");
    
   }
   
    
   }
   
    
    

   
			
