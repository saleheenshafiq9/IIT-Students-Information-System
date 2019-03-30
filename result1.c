#include "struct.h"

void showresult()
{
	char roll2[9];
	int s,s1,r3;
	printf("Enter Roll:\n");
	fgets(roll2,10,stdin);
	for(s=0;s<3;s++)
	{
		s1= strcmp(inf[s].roll,roll2);
		if(s1==0)
		{
			k=s;
			printf("Your Final GPA : %f",sum1[k]);	
		}	
		
	}
	printf("\nPress '0' to return to main menu\nPress '1' to exit\n");
    scanf("%d",&r3);
    if(r3==0)
    menu();
    else
    return 0;
}
