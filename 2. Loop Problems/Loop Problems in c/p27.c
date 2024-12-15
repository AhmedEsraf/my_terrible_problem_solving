#include<stdio.h>


int  main() {

    for (int i = 1;i<=4;i++){
        for (int j = 1;j<=4;j++){
            for (int k = 1;k<= 4;k++){
                for (int l = 1; l<=4 ;l++)
                     if ( i!= j && j!=k && k!=l && i!=k && i!=l && j!=l)  {
                        printf("%d%d%d%d\n",i,j,k,l);

                }

            }
        }
    }
}