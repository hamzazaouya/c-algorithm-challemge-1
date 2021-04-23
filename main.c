#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stringCmp(const char *string1, const char *string2);

int main(int argc, char *argv[]) {

    char string1[] = "Hello", string2[] = "Hello";

    if(stringCmp(string1, string2) == 0) {
        printf("the Strings are equal");
    }else {
        printf("the Strings are not equal");
    }

    return 0;
}

int stringCmp(const char *string1, const char *string2) {


    int length1 = strlen(string1);
    int length2 = strlen(string2);

    int i = 0, j = 0;
    if(length1 != length2)
    {
        j = 1;

    }else {

        int char1 = 0, char2 = 0, conter = 0;

        for(i = 0; i < strlen(string1); i++){
            char1 = string1[i];
            char2 = string2[i];
            if(char1 != char2){
                conter++;
            }
        }
        if(conter == 0){
            j = 0;
        }else {
            j = 1;
        }
    }

    return j;
}
