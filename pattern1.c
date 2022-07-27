
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // *
    // **
    // ***
    // ****
    // *****
    // ******
    // *******

    // int limit = 10,i,j;

    // 	for(i = 1; i<= limit; i++) {
    //         for(j = 1; j <= i; j++) {
    // 		    printf("*");
    //         }
    //         printf("\n");
    // 	}

    // *****
    // *****
    // *****
    // *****
    // *****

    // int limit = 5,i,j;

    // for(i = 1; i <= limit; i++) {
    //     for(j = 1; j <= limit; j++) {
    //         printf("*");
    //     }
    //     printf(" \n");
    // }

    // *  *  *  *  *
    // *  *  *  *
    // *  *  *
    // *  *
    // *

    // int limit = 10,i,j;

    // for(i = 1; i <= limit; i++) {
    //     for(j = 1; j <= limit - i + 1; j++) {
    //         printf(" * ");
    //     }
    //     printf(" \n");
    // }

    //  1
    //  1  2
    //  1  2  3
    //  1  2  3  4
    //  1  2  3  4  5

    // int count = 10,i,j;

    // for ( i = 1; i <= count; i++) {
    //     for ( j = 1; j <= i; j++){
    //         printf(" %d ",j);
    //     }
    //     printf("\n");
    // }

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // int count = 5,i,j;

    //    for ( i = 1; i <= count * 2; i++){
    //     int c = i <= count ? i : 2 * count - i;
    //       for ( j = 1; j <= c; j++){
    //         printf("* ");
    //       }
    //       printf("\n");
    //    }

    //     *
    //    **
    //   ***
    //  ****
    // *****

    //  int count = 5,i,j,k;

    //         for ( i = 1; i <= count; i++) {
    //             for(k = 1; k <= count - i; k++){
    //                 printf(" ");
    //             }
    //             for(j = 1; j <= i; j++) {
    //             	printf("*");
    //             }
    //             printf("\n");
    //         }

//     *
//    ***
//   *****
//  *******
// *********

    // int n = 5, m;
    // m = n;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= m - 1; j++) {
    //         printf(" ");
    //     }
    //      for (int k = 1; k <= 2 * i - 1; k++) {
    //         printf("*");
    //     }
    //     m--;
    //     printf("\n");
    // }


//     1
//    212
//   32123
//  4321234
// 543212345

//  int n = 5, m;
// 	    m = n;
// 	    for (int i = 1; i <= n; i++){
// 	        for(int j = 1; j <= m - i; j++) {
// 	        	printf(" ");
// 	        }

// 	        for(int k = i; k >= 1; k--) {
// 	        	printf("%d", k);
// 	        }

// 	        for( int k = 2; k<= i; k++){
// 	        	printf("%d", k);
// 	        }
// 	        printf("\n");
// 	    }

//     1
//    212
//   32123
//  4321234
// 543212345
//  4321234
//   32123
//    212
//     1

//   int n = 5, m;

// 	    for (int i = 1; i <= 2 * n; i++){

// 		   int c = i > n ? n * 2 - i : i;

// 	       for(int j = 1; j <= n - c; j++) {
// 	    	   printf(" ");
// 	       }


// 	       for(int k = c; k >= 1; k--) {
// 	    	   printf("%d", k);
// 	       }

// 	       for(int k = 2; k <= c; k++) {
// 	       	   printf("%d", k);
// 	       	 }
// 	        printf("\n");
// 	    }

//    *
//   **
//  ***
// ****
//  ***
//   **
//    *

//   int n = 5, m;

// 	    for (int i = 1; i <= 2 * n; i++){

// 		   int c = i > n ? n * 2 - i : i;

// 	       for(int sp = 1; sp <= n - c; sp++) {
// 	    	   printf(" ");
// 	       }
// 	       for(int j = 1; j < c; j++) {
// 	    	   printf("*");
// 	       }


// 	        printf("\n");
// 	    }

//     1
//    21
//   321
//  4321
// 54321
//  4321
//   321
//    21
//     1

//  int n = 5, m;

// 	    for (int i = 1; i <= 2 * n; i++){

// 		   int c = i > n ? n * 2 - i : i;

// 	       for(int sp = 1; sp <= n - c; sp++) {
// 	    	   printf(" ");
// 	       }
// 	       for(int k = c; k >= 1; k--) {
// 	       	        	printf("%d", k);
// 	       	 }


// 	        printf("\n");
// 	    }

//  *  *  *  *  * 
//  *           * 
//  *           * 
//  *           * 
//  *  *  *  *  * 


	//   int n = 5;


	//   for(int i=1;i<=n;i++)
	//      {
	//          for(int j=1;j<=n;j++)
	//          {
	//              if(i == 1 || j== 1 || i == n || j ==n)
	//              {
	//              printf(" * ");
	//              }
	//              else
	//              printf("   ");
	//          }
	//          printf("\n");
	//      }


// *
// **
// * *
// *  *
// *****

	//   int n = 5;


	//   for(int i=1;i<=n;i++)
	//      {
	//          for(int j=1;j<=i;j++)
	//          {
	//              if(i == 1 || j== 1 || i == n || j ==i)
	//              {
	//              printf("*");
	//              }
	//              else
	//              printf(" ");
	//          }
	//          printf("\n");
	     

//     *
//    **
//   * *
//  *  *
// *****

//  int n = 5;


// 	  for(int i=1;i<=n;i++) {
// 	       for(int space = 1; space <= n - i; space++) {
// 	    	   printf(" ");
// 	       }

// 	       for(int j = i; j >= 1; j--) {

// 	    	   if(j == i || j == 1 || i == n){
// 	    		   printf("*");
// 	    	   }else {
// 		    	   printf(" ");
// 	    	   }
// 	       }
// 	         printf("\n");
// 	     }

// *****
//  *  *
//   * *
//    **
//     *

//   int n = 5;


// 	  for(int i=1;i<=n;i++) {
// 	       for(int space = 1; space <= i - 1; space++) {
// 	    	   printf(" ");
// 	       }

// 	       for( int j = 1; j <= n - i + 1; j++) {
// 	    	   if(i == n || j == n - i + 1 || j == 1 || i == 1) {
// 		    	   printf("*");
// 	    	   }else {
// 	    		   printf(" ");
// 	    	   }
// 	       }


// 	         printf("\n");
// 	     }

//     *
//    * *
//   *   *
//  *     *
// *********


//   int n = 5;


// 	  for(int i=1;i<=n;i++) {
// 	       for(int space = 1; space <= n - i; space++) {
// 	    	   printf(" ");
// 	       }

// 	       for(int j = i; j >= 1; j--){
// 	    	   if(j == i  || i == n ){
// 		    	   printf("*");
// 	    	   }else {
// 	    		   printf(" ");
// 	    	   }
// 	       }

// 	       for(int j = 2; j <= i; j++) {
// 	    	   if(j == i || i == n  ){
// 	    	  	printf("*");
// 	    	  	}else {
// 	    	  	  printf(" ");
// 	    	    }
// 	       }

// 	         printf("\n");
// 	     }

//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *


	//   int n = 5;


	//   for(int i=1;i<=n * 2;i++) {

	// 	 int c = i <= n ? n - i + 1 : i - n;

	//        for(int j = 1; j <= c ; j++){
	//     	   printf(" *");
	//        }



	//          printf("\n");
	//      }


//  *****
//   ****
//    ***
//     **
//      *
//      *
//     **
//    ***
//   ****
//  *****

//   int n = 5;


// 	  for(int i=1;i<=n * 2;i++) {

// 		 int c = i <= n ? i : n * 2 - i + 1;
// 		 int c1 = i <= n ? n - i + 1 : i - n;

// 	       for(int space = 1; space <= c ; space++){
// 	    	   printf(" ");
// 	       }

// 	       for(int j = 1; j <= c1; j++) {
// 	    	   printf("*");
// 	       }



// 	         printf("\n");
// 	     }



//   1
//   2  3
//   4  5  6
//   7  8  9 10



//   int  k = 1, N;

//     printf("Enter N: ");
//     scanf("%d", &N);


//     for(int i=1; i<=N; i++)
//     {
//         for(int j=1; j<=i; j++, k++)
//         {
//             printf("%3d", k);
//         }

//         printf("\n");
//     }



//     A 
//    B C
//   D E F
//  G H I J
// K L M N O

// int n = 5,k;

// for (int i = 1; i <= n; i++) {
//     for (int space = n - i - 1; space >= 0; space--) {
//         printf(" ");
//     }

//     for(int j = 1; j <= i; j++){
//         k++;
//         printf("%c ",'A'+ k - 1);
//     }
//     printf("\n");
// }



//       A  
//      AB1
//     ABC12
//    ABCD123
//   ABCDE1234
 
// int n = 5;

// for (int i = 1; i <= n; i++) {
    
//     for (int space = n - i + 1; space >= 0; space--) {
//         printf(" ");
//     }

//     for (int j = 1; j <= i; j++) {
//         printf("%c", 'A' - 1 + j);
//     }

//     for (int j = 1; j < i; j++) {
//         printf("%d", j);
//     }
//     printf("\n");
    
    
// }


// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// int n = 10;

// for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//         printf("%d ", j);
//     }
//     printf("\n");
// }




// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// int n =5;

// for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n + 1 - i; j++) {
//         printf("%d ", j);
//     }
//     printf("\n");
// }




// 1 
// 1 2
// 1   3
// 1     4
// // 1 2 3 4 5
// int n = 5;

// for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//         if (j == 1 || j == i || i == n ) {
//             printf("%d ", j);
//         }else {
//             printf("  ");
//         }
//     }
//     printf("\n");
// }


 int n = 5;
 int k = 0;

 for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++)
    {
        if (j == i || j == n || i == 1)
        {
              printf("%d ", j);
        }else {
            printf("  ");
        }
      }
    
    printf("\n");
 }
 

    return EXIT_SUCCESS;
}
