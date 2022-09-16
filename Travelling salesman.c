#include<stdio.h>
int array[10][10],completed[10],n,cost=0;
void takeInput()
{
	int i,j;

	printf("Enter the number of villages: ");
	scanf("%d",&n);

	printf("\nEnter the Cost Matrix\n");

	for(i=0;i < n;i++)
	{
		printf("\nEnter Elements of Row: %d\n",i+1);

		for( j=0;j < n;j++)
			scanf("%d",&ary[i][j]);

		completed[i]=0;
	}

	printf("\n\nThe cost list is:");

	for( i=0;i < n;i++)
	{
		printf("\n");

		for(j=0;j < n;j++)
			printf("\t%d",ary[i][j]);
	}
}

