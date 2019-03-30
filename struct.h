#include<stdio.h>
#include<stdlib.h>

void studentinfo();
void menu();
void resultcheck();
void details();
void showresult();

struct student
{
    char name[21];
    char address[81];
    char roll[9];
    int regno;
}inf[3];

int k;
int sum1[3];


