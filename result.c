#include "struct.h"

void resultcount()
{
	FILE *fptr;
	int x1,x2;
	char rollnew[9];
	fptr=fopen("generalinfo.txt","r");
	printf("Enter Your Roll :\n");
	scanf("%s",rollnew);

	for(x1=0;x1<3;x1++)
	{
		x2=strcmp(inf[x1].roll,rollnew);
		if(x2==0)
	{
		fread(&inf, sizeof(struct student), 1, fptr); 
      printf("%s%s%s%d\n\n",&inf[x1].name,&inf[x1].address,&inf[x1].roll,&inf[x1].regno);
	}
	printf("%d",x2);
	}
}
