
#include <stdio.h>
#include <stdlib.h>



int main() {
    int i = 10;
    loop(i);
}

void loop(int i) {
    if (i >= 1) {
        printf("%d:- 786\n",i);
        loop(i - 1);
    }
    
}

// output>>>>.
// 1 =  CROSSROADS
// 2 =  CROSSROADS
// 3 =  CROSSROADS
// 4 =  CROSSROADS
// 5 =  CROSSROADS
// 6 =  CROSSROADS
// 7 =  CROSSROADS
// 8 =  CROSSROADS
// 9 =  CROSSROADS
// 10 =  CROSSROADS