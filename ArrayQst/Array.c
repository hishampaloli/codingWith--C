#include <stdio.h>

int factorial(int n)
{
  int f = 1;

  for (f = 1; n > 1; n--)
  {
    f *= n;
  }

  return f;
}

int ncr(int n, int r)
{
  return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{

int arr[10] = {1,2,3,4,7,5,7,8,9,3}, n = 10,f[n],visited = -1;
int pos = 0;

for (int i = n; i >= pos; i--)
{
  arr[i] = arr[i-1];
}
arr[pos] = 786786;

for (int i = 0; i <= n; i++)
{
  printf("%d\n",arr[i]);
}




  return 0;
}
