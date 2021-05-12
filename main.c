#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i = 0, j = 0, n = 30;

    for(i = 0; i < n; i++){

        if(i != (n -1)){
            for(j = n - 2; j > i; j--){
            printf(" ");
        }
        for(j = 0; j <= (2*i+1); j++){
            if(j == 0){
                printf("/");
            }else if(j == (2*i+1)){
                printf("\\");
            }else{
                printf(" ");
            }
        }
        printf("\n");
        }else {
            for(j = 0; j < 2*i; j++){
                printf("*");
            }
        }

    }
    return 0;

}
