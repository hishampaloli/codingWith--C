
int main(){ 

	int n; 
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci number in nth place is : %d", fibonacci(n - 1));
}
 
int fibonacci(int i){ 
    int c = i == 0 ? 0 : i == 1 ? 1 : (fibonacci(i-1)+fibonacci(i-2));
	return c;
} 