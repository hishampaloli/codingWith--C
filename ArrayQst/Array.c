#include <stdio.h>

int factorial(int n)
{
  int f;

  for (f = 1; n > 1; n--)
  {
    f *= n;
  }

  return f;
}

int icr(int n, int r)
{
  return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{

  int n = 4, k = 1, i = 1;

  for (i = 1; i <= n ; i++)
  {
   for (int j = 1; j <= n; j++)
   {
    if (j<n)
    {
      printf("%d * ", k++);
    }else {

    printf("%d ", k++);
    }
    
   }
   
    

    printf("\n");
  }

  return 0;
}