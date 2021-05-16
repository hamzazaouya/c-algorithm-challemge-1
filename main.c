#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

int main()
{
    char mot1[MAX] = {0};
    char mot2[MAX] = {0};
    char mot3[MAX] = {0};
    int i = 0, j = 0, drp = 0, k = 0, isIn = 0, place = 0;

    printf("Enter A Word One : \n");
    scanf("%s", mot1);
    printf("Enter Word Two : \n");
    scanf("%s", mot2);

    int lg1 = strlen(mot1);
    int lg2 = strlen(mot2);

    for(i = 0; i < lg1; i++ ){

        for(j = 0; j < lg2; j++){

            if(mot1[i] == mot2[j]){

                drp = 0;
                for(k = 0; k < lg1; k++){
                    if(mot1[i] == mot3[k]){
                        drp = 1;
                    }
                }
                if(drp == 0){
                    mot3[place] = mot2[j];
                    place++;
                }
                isIn = 1;

            }

        }
    }

    if(isIn == 0){

        printf("\nYou have not any common caracter\n");

    }else{

        int lg3 = strlen(mot3);

        if(isIn != 0){
            i = 0;
            while(i != lg3){
                printf("%c is common car\n", mot3[i]);
                i++;
            }
        }

    }

    return 0;

}
