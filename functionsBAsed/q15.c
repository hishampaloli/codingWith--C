
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int limit;

	printf("enter the limit:");
    scanf("%d",&limit);

    getArray(limit);
	addArray(limit);
    displayArray(limit);

	return EXIT_SUCCESS;
}

void getArray(int n)
{
	int a[100][100];
	int b[100][100];
	int sum[100][100];

	printf("enter the array elements:\n");
	for(int i=0;i<n;i++) {
		for (int j = 0; j < n; j++) {
    	scanf("%d",&a[i][j]);
		}	
	}

	for(int i=0;i<n;i++) {
		for (int j = 0; j < n; j++) {
    	scanf("%d",&b[i][j]);
		}	
	}

	
for(int i=0;i<n;i++) {
		for (int j = 0; j < n; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
		printf(" \n");
	}

	
}

void addArray(int n) {
	int a[100][100];
	int b[100][100];
	int sum[100][100];

}


void displayArray(int n)
{
	int a[100][100];
	int b[100][100];
	int sum[100][100];
    
	printf("Array elements A are:\n");
	for(int i=0;i<n;i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf(" \n");
	}

	printf("Array elements b are:\n");
	for(int i=0;i<n;i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", b[i][j]);
		}
		printf(" \n");
	}

	

	printf("Array elements sum are:\n");
	for(int i=0;i<n;i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", sum[i][j]);
		}
		printf(" \n");
	}

}
