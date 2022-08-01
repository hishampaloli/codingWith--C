#include <stdio.h>

int isPrime(int n) {
  int flag = 0;
  
  for (int i = 2; i <= n/2; i++)
  {
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
    

    if (flag == 0)
    {
      return 1;
    }else {
      return 0;
    }
    
  }
  
}
 int main()    
{    
 int arr1[100],i,n,p,inval;

    printf("Input the size of array : ");
    scanf("%d", &n);
/* Stored values into the array*/
       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

   printf("Input the value to be inserted : ");
   scanf("%d",&inval);

   /* Determine the position where the new value will be insert.*/
 for (int i = 0; i < n; i++)
 {
  if (inval < arr1[i])
  {
    p = i;
    break;
  }else {
    p = i + 1;
  }
 }

 for (int i = n+1; i >= p; i--)
 {
  arr1[i] = arr1[i - 1];
 }

 arr1[p] = inval;
 
 
      printf("\n\nAfter Insert the list is :\n");
   for(i=0;i<=n;i++)
      printf("% 5d",arr1[i]);
	  printf("\n");
}
 
