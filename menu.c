#include<stdio.h>
#include<stdlib.h>

void menu()
{
    int n;
    printf("Choose Your Option:\n1.Profiling\n2.Exit");
    scanf("%d",&n);
    if(n==1)
    studentinfo();
    else if(n==2)
    return 0;
    else
    {
        printf("Wrong");
        return 0;
    }
}
