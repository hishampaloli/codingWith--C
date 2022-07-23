
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int limit;

	printf("enter the limit:");
    scanf("%d",&limit);

    getArray(limit);
    displayArray(limit);
	return EXIT_SUCCESS;
}

void getArray(int n)
{
	int a[100];

	printf("enter the array elements:\n");
	for(int i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
}
void displayArray(int r)
{
	int a[100];
    
	printf("Array elements are:\n");
	for(int i=0;i<r;i++)
	{
			printf("%d ",a[i]);

	}
}
