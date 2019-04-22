#include "struct.h"

int calc1(int k)
{
	float z;
	if(k>=80)
	z=4.00;
	else if(k>=75 && k<80)
	z=3.75;
	else if(k>=70 && k<75)
	z=3.50;
	else if(k>=65 && k<70)
	z=3.25;
	else if(k>=60 && k<65)
	z=3.00;
	else if(k>=55 && k<60)
	z=2.75;
	else if(k>=50 && k<55)
	z=2.50;
	else if(k>=45 && k<50)
	z=2.25;
	else if(k>=40 && k<45)
	z=2.00;
	else if(k<40)
	z=0.00;
	return z;
}
