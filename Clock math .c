//Clock math.

#include<stdio.h>
#include<math.h>

int main()
{
	 
	 double H,M;
	 scanf("%lf%lf",&H,&M);

     double angle=(.5*11*M)-(30*H);
	 if(angle<0)
	 {
		 angle=-1*(angle);
	 }

	if(angle<=180)
	{
		printf("%.7lf",angle);
	}
    else
	{
        printf("%.7lf",(360-angle));	
	}

	return 0;
}

