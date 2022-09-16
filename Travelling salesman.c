#include<stdio.h>
int array[10][10],completed[10],n,cost=0;
void takeInput()
{
	int i,j;

	printf("Enter the number of cities: ");
	scanf("%d",&n);

	printf("\nEnter the Cost Matrix\n");

	for(i=0;i < n;i++)
	{
		printf("\nEnter The cost to travel from city %d to others\n",i+1);

		for( j=0;j < n;j++)
			scanf("%d",&array[i][j]);

		completed[i]=0;
	}

	printf("\n\nThe cost matrix is:");

	for( i=0;i < n;i++)
	{
		printf("\n");

		for(j=0;j < n;j++)
			printf("\t%d",array[i][j]);
	}
}

