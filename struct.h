#include<stdio.h>
#include<stdlib.h>

void studentinfo();
void menu();
void resultcount();
void details();
int calc1();

struct student
{
    char name[21];
    char address[81];
    char roll[9];
    int regno;
}inf[3];

