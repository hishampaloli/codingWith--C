

#include <stdio.h>

int main() {

   int limit;

   printf("Enter a Limit");
   scanf("%d", &limit);
   int length = maximum(limit);
   printf("Maximum value is :- %d", length);
}

int maximum(int limit) {
   int numbers[100], temp[100];

   printf("Enter the numbers");
   for (int i = 0; i < limit; i++) {
      scanf("%d", &numbers[i]);
   }

   for (int i = 0; i < limit; i++) {
      for (int j = i + 1; j < limit; j++) {
         if (numbers[i] < numbers[j]) {
            temp[i] = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp[i];
         }
      }
   }

   return numbers[0];
}