
#include<stdio.h>
#include<conio.h>

int ary[10][10],completed[10],n,cost=0;
void takeInput()
{
	int i,j;

	printf("Enter the number of cities: ");
	scanf("%d",&n);
    top:
	printf("\nEnter the Cost Matrix\n");
	for(i=0;i < n;i++)
	{
		printf("\nEnter The cost to travel from city %d to others\n",i+1);
		for( j=0;j < n;j++)
		{
			scanf("%d",&ary[i][j]);
		}
		completed[i]=0;
	}
	for( i=0;i < n;i++)
	{
		for(j=0;j < n;j++)
		{
		   if( (i==j && ary[i][j]!=0) || (ary[i][j]!=ary[j][i]))
			{
				printf("worng Input\n\n");
				getch();
				goto top;
			}	
		}
		
	}

	printf("\n\nThe cost matrix is:\n");
	for(int i=0;i<n;i++)
	{
		printf("\tv%d",i+1);
	}
	printf("\n\n");
	for( i=0;i < n;i++)
	{
		printf("v%d\t",i+1);
		
		for(j=0;j < n;j++)
		{
		   printf("%d\t",ary[i][j]);
		}
		printf("\n");
		
	}
}
int least(int c)
{
	int i,nc=999;
	int min=999,kmin;
	for (i=0;i<n;i++)
	{
		if((ary[c][i]!=0)&&(completed[i]==0))
		if(ary[c][i]+ary[i][c]<min)
		{
			min=ary[i][0]+ary[c][i];
			kmin=ary[c][i];
			nc=i;
		}
	}
	if(min!=999)
	cost+=kmin;
	return nc;
}
void mincost(int city)
{
int i,ncity;
 
completed[city]=1;
 
printf("%d--->",city+1);
ncity=least(city);
 
if(ncity==999)
{
ncity=0;
printf("%d",ncity+1);
cost+=ary[city][ncity];
return;
}
mincost(ncity);
}
int main()
{
takeInput();
 
printf("\n\nThe Path is:\n");
mincost(0); //passing 0 because starting vertex
 
printf("\n\nMinimum cost is %d\n ",cost);
 
return 0;
}

