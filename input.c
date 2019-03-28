#include<stdio.h>
#include<stdlib.h>
#include "struct.h"

void studentinfo()
{
    getchar();

    int i;
    FILE *fptr;
    fptr=fopen("generalinfo.txt","w");
    for(i=0;i<3;i++)
    {

        printf("\nEnter Name:");
        fgets(inf[i].name,20,stdin);

        printf("Enter Address:");
        fgets(inf[i].address,80,stdin);

        printf("Enter Roll:");
        fgets(inf[i].roll,8,stdin);

        printf("Enter Registration No:");
        scanf("%d",&inf[i].regno);

        getchar();

        fprintf(fptr,"%s%s%s%d\n\n",&inf[i].name,&inf[i].address,&inf[i].roll,&inf[i].regno);
    }


    fclose(fptr);
}
