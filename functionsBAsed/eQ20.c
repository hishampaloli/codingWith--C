#include <stdio.h>

int main() {
  int limit, cs;

  printf("Enter a limit for a square metrix");
  scanf("%d", &limit);

  printf("Enter\n 1 for sum,\n 2 for sub\n 3 for mult\n 4 for transpose\n 5 for exit");
  scanf("%d", &cs);

  switch (cs)
  {
  case 1:
  matrix_addition(limit);
    break;

    case 2:
  matrix_sub(limit);
    break;

    case 3:
  matrix_mult(limit);
    break;

    case 4:
  matrix_transpose(limit);
    break;

    case 5:
    printf("Exited");
    break;
  
  default:
    break;
  }

//   matrix_sub(limit);
// //   matrix_mult(limit);
//   matrix_transpose(limit);
}

void matrix_addition(int limit) {
    int array1[100][100], array2[100][100], sum[100][100];

    printf("Enter the metrix1 for addition\n");
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the metrix2\n");
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
             sum[i][j] = array1[i][j] + array2[i][j];
             printf(" %d", sum[i][j]);
        }        
        printf("\n");
    }

    main();
    
}



void matrix_sub(int limit) {
    int array1[100][100], array2[100][100], sum[100][100];

    printf("Enter the metrix1 for substraction\n");
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the metrix2\n");
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
             sum[i][j] = array1[i][j] - array2[i][j];
             printf(" %d", sum[i][j]);
        }        
        printf("\n");
    }
    
    main();
}


void matrix_mult(int limit) {
    int array1[100][100], array2[100][100], sum[100][100];

    printf("Enter the metrix1 for addition\n");
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the metrix2\n");
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           scanf("%d", &array2[i][j]);
        }
    }

   
    for(int i = 0; i < limit; i++)
    {
        for(int j = 0; j < limit; j++)
        {
            sum[i][j]=0;
            for(int k = 0; k < limit; k++)
            {
                sum[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

     for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    main();
}


void matrix_transpose(int limit) {
    int array1[100][100], array2[100][100], sum[100][100];

    printf("Enter the metrix1 for transpose\n");
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           scanf("%d", &array1[i][j]);
        }
    }

   
    for(int i = 0; i < limit; i++)
    {
        for(int j = 0; j < limit; j++) {
           sum[i][j] = array1[j][i];
        }
    }

     for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
           printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    main();
}

