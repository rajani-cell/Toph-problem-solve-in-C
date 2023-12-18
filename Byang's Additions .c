#include<stdio.h>
int main()
{

    int a,b;
    scanf("%d%d",&a,&b);

    int rem1,rem2;
    int count=0;

    while(a !=0 && b !=0)
    {

       rem1=a%10;
       rem2=b%10;

    if((rem1+rem2)>=10)
    {
         count++;
         break;
    }
     
     a=a/10;
     b=b/10;



    }

    if(count==0)
    {
        printf("No");
    }

    else
     {
        printf("Yes");
    }




    return 0;
}
