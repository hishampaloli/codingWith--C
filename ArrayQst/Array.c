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
  //Scanner sc= new Scanner(System.in);
    int n=5,j,i,l=4,f=1,m=3;
 
    for (int i = 1; i <= n; i++) {
      if (i % 2 != 0) {
        for(j = 1; j <= f; j++){
          for (int k = 1; k <= m; k++)
          {
            printf("*");
          }
          printf("\n");
        }
        m=m+3;
        f++;
      } else if (i % 2 == 0) {
        for (int j = 1; j <= 3; j++)
        {
          printf("*\n");
        }
        
    }
    
      }
    
}
    
   
   
			
