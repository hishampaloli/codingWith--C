#include <stdio.h>

void main()
{
    int n,c=1,blk,i,j;
    printf("Input number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(int k=1;k<=n -i;k++)
        printf(" ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("%2d",c);
        }
        printf("\n");
    }
}





