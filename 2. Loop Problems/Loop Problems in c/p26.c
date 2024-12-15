/*
new loop problems:
write a C program to print all possible permutations of 1 2 3 using loop.
ans:

1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1

*/


#include<stdio.h>


int  main() {

    for (int i = 1;i<=3;i++){
        for (int j = 1;j<=3;j++){
            for (int k = 1;k<= 3;k++){
                if ( i!= j && j!=k && i!=k) {
                    printf("%d%d%d\n",i,j,k);

                }

            }
        }
    }
}