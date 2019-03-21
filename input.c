#include<stdio.h>
#include<stdlib.h>
#include "struct.h"

void studentinfo()
{
    getchar();
    struct student inf[3];
    int i,j;
    for(i=0;i<3;i++)
    {

        printf("Enter Name:");
        fgets(inf[i].name,20,stdin);

        printf("Enter Address:");
        fgets(inf[i].address,80,stdin);

        printf("Enter Roll:");
        fgets(inf[i].roll,8,stdin);

        printf("Enter Registration No:\n");
        scanf("%d",&inf[i].regno);

        getchar();
    }
    for(i=0;i<3;i++)
    printf("%s%s%s%d",inf[i].name,inf[i].address,inf[i].roll,inf[i].regno);

}
