#include<stdio.h>
#include<stdlib.h>

void menu()
{
    int n;
    printf("Choose Your Option:\n1.Profiling\n2.Input Result\n3.Check Result\n4.Exit\n");
    scanf("%d",&n);
    if(n==1)
    studentinfo();
    else if(n==4)
    return 0;
    else if(n==2)
    resultcheck();
    else if(n==3)
    showresult();
    else
    {
        printf("Wrong");
        return 0;
    }
}

