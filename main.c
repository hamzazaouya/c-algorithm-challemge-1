#include<stdio.h>
#include<string.h>
#include"main.h"
#define MAX 2
#define SUBJECTS 2


int main()
{

    Students Student[MAX];
    int i, j;
    float sum;

    for(i = 0; i < MAX; i++){

        printf("Enter details of student %d \n\n", (i + 1));

        printf("Enter name: ");
        scanf("%s", Student[i].name);
        printf("Enter roll no: ");
        scanf("%d", &Student[i].roll);

        for(j = 0; j < SUBJECTS; j++){

            printf("Enter marks: ");
            scanf("%f", &Student[i].mark[j]);

        }

        printf("\n");
    }

    printf("Name\tRoll\tAverage\t \n\n");

    for(i = 0; i < MAX; i++) {

        sum = 0;
        for(j = 0; j < SUBJECTS; j++) {

            sum += Student[i].mark[j];

        }

        printf("%s\t%d\t%.2f\n",Student[i].name, Student[i].roll, (sum / SUBJECTS) );
    }

    return 0;
}
