#include <stdio.h>
#include <stdlib.h>

void sortTable(int table[], int tableSize);

int main(int argc, char *argv[]) {

    int i = 0;
    int table[11] = {153, 15, 262, 81, 4, 6, 1, 0, -8, 1000, 3};
    sortTable(table, 11);

    for(i = 0; i < 11; i++)
    {
        printf("%d \n", table[i]);
    }
    return 0;

}

void sortTable(int table[], int tableSize)
{
    int i = 0, j = 0, min = 0,value;

    for(i=0; i < tableSize; i++)
    {
        min = table[i];

        for(j = i; j < tableSize; j++){
            if(min > table[j]){
                value = table[i];
                min = table[j];
                table[i] = min;
                table[j] = value;
            }
        }
    }

    printf("Hello From sortTable \n");
}







