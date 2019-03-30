#include "struct.h"

void resultcheck()
{
	char roll1[9];
	int j,r,r2;
	printf("Enter Roll:");
	fgets(roll1,9,stdin);
	getchar();
	for(j=0;j<3;j++)
	{
		r= strcmp(inf[j].roll,roll1);
		if(r==0)
		{
			printf("Name : %s\nAdress : %s\nRegistration No : %d\n",inf[j].name,inf[j].address,inf[j].regno);
			k=j;
		}
		else
		break;
	}
		printf("Press '1' to Input Result\n");
		scanf("%d",&r2);
		if(r2==1)
		details();
		else
		menu();
}
