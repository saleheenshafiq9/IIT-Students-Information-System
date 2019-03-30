#include "struct.h"

void details()
{
	float semester1[18],semester2[18],semester3[18],semester4[18],semester5[18],semester6[18],semester8[18],semester7[3],sum[24];
	int i1,c,l,l1,r4;
	l=k-1;
	for(i1=0;i1<8;i1++)
	{
		printf("Semester %d :\n",i1+1);
		if(i1==0)
		{
			sum[i1]=0;
			for(l1=0,c=101;l1<6*k,l1>=6*l,c<107;l1++,c++)
			{
				printf("SE %d :",c);
				scanf("%f",&semester1[l1]);
				sum[i1]=semester2[l1]+sum[i1];
			}
			sum[i1]=sum[i1]/6;
		}
			if(i1==1)
		{
			sum[i1]=0;
			for(l1=0,c=201;l1<6*k,l1>=6*l,c<207;l1++,c++)
			{
				printf("SE %d :",c);
				scanf("%f",&semester2[l1]);
				sum[i1]=semester2[l1]+sum[i1];
			}
			sum[i1]=sum[i1]/6;
		}
			if(i1==2)
		{
			sum[i1]=0;
			for(l1=0,c=301;l1<6*k,l1>=6*l,c<307;l1++,c++)
			{
				printf("SE %d :",c);
				scanf("%f",&semester3[l1]);
				sum[i1]=semester3[l1]+sum[i1];
			}
			sum[i1]=sum[i1]/6;
		}
			if(i1==3)
		{
			sum[i1]=0;
			for(l1=0,c=401;l1<6*k,l1>=6*l,c<407;l1++,c++)
			{
				printf("SE %d :",c);
				scanf("%f",&semester4[l1]);
				sum[i1]=semester4[l1]+sum[i1];
			}
			sum[i1]=sum[i1]/6;
		}
			if(i1==4)
		{
			sum[i1]=0;
			for(l1=0,c=501;l1<6*k,l1>=6*l,c<507;l1++,c++)
			{
				printf("SE %d :",c);
				scanf("%f",&semester5[l1]);
				sum[i1]=semester5[l1]+sum[i1];
			}
			sum[i1]=sum[i1]/6;
		}
			if(i1==5)
		{
			sum[i1]=0;
			for(l1=0,c=601;l1<6*k,l1>=6*l,c<607;l1++,c++)
			{
				printf("SE %d :",c);
				scanf("%f",&semester6[l1]);
				sum[i1]=semester6[l1]+sum[i1];
			}
			sum[i1]=sum[i1]/6;
		}
			if(i1==6)
		{
			sum[i1]=0;
			c=701;
			printf("SE %d :",c);
			scanf("%f",&semester7[k]);
			sum[i1]=semester7[k]+sum[i1];
		}
			if(i1==7)
		{
			sum[i1]=0;
			for(l1=0,c=801;l1<6*k,l1>=6*l,c<807;l1++,c++)
			{
				printf("SE %d :",c);
				scanf("%f",&semester8[l1]);
				sum[i1]=semester8[l1]+sum[i1];
			}
			sum[i1]=sum[i1]/6;
		}
	}
	for(l1=0;l1<8;l1++)
	{
		sum1[k]=0;
		sum1[k]=sum[l1]+sum1[k];
	}
	sum1[k]=sum1[k]/8;
	printf("\nPress '0' to return to main menu\nPress '1' to exit\n");
    scanf("%d",&r4);
    if(r4==0)
    menu();
    else
    return 0;
    
}
