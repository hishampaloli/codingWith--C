#include <stdio.h>
int isPrime(int num)
{
  int flag = 0;
 
  for (int i = 2; i <= num/2 ; i++)
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
int main()
{

  int n = 5,k = 3,f = 3;

  for (int i = 1; i <= 5; i++)
  {
    if (i % 2 != 0)
    {
      for (int j = 1; j <= k; j++)
      {
        printf("*");
      }
      printf("\n");
    }else if (i % 2 == 0)
    {
      for (int j = 1; j <= f; j++)
      {
        printf("*");
      }
      printf("\n");
      
    }
    
    
  }
  

  
  return 0;
}
 