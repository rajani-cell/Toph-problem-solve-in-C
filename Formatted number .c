//Formatted number.

#include<stdio.h>
#include<string.h>
int main()
{

   char str[100];
   gets(str);

   int len=strlen(str);

   int i,j=0,k=0;
   char new[50];



	for(int i=len-1;i>=0;i--)
		{
			if(j==3)
			{
				new[k++]=',';
				new[k++]=str[i];
				j=0;
			}

			else
			{
				new[k++]=str[i];
			}
			j++;
		}


		for(int j=k-1;j>=0;j--)
		{
			printf("%c",new[j]);
		}


        
	return 0;
}
