//Full pyramid.

#include<stdio.h>
int main()
{

int N;
scanf("%d",&N);

int row,col;

for(row=1;row<=N;row++)
{

    for(col=1;col<=(N-row);col++)
    {
        printf(" ");
    }

    for(col=1;col<=row;col++)
    {
        printf("*");

        if(col<row)
        {
            printf(" ");
        }
    }

   printf("\n");

}


return 0;

}
