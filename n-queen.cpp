#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>
int n,a[20][20],count=0; 
void nq(int row,int col); 
int place(int row,int col); 
void print();
int main()
{ 
    clock_t t; 
	t = clock(); 
	int i,j; 
	printf("\nEnter no of rows :"); 
	scanf("%d",&n); 
	for(i=1;i<=n;i++) 
	for(j=1;j<=n;j++) 
	a[i][j]=0; 
	nq(1,1);
	t = clock() - t; 
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("\n\nknapSack() took %f milliseconds to execute", time_taken/1000); 
}
void nq(int row,int col) 
{ 
	int j,m; 
	if(row>0) 
	{
		for(j=col;j<=n;j++)
		{ 
			for(m=1;m<=n;m++) 
			{ 
				a[row][m]=0; 
			} 
		if(place(row,j))
		{
			a[row][j]=1; 
			if(row+1>n)
			{ 
				count=count+1;
				printf("\nSolution %d :- ",count);
				print(); 
			} 
			else 
			nq(row+1,1);
}
}
}
}
int place(int row,int col) 
{ 
	int j,k; 
	for(j=row-1;j>0;j--) 
	{ 
		if(a[j][col]==1) 
		return 0; 
	} 
	for(j=1;j<=n;j++) 
	{ 
		if(a[row][j]==1) 
		return 0; 
	} 
	for(j=row-1;j>0;j--) 
	{ 
		for(k=1;k<=n;k++) 
		{ 
			if(abs(row-j)==abs(col-k)&&a[j][k]==1) 
			return 0; 
		} 
	} 
	return 1; 
} 
void print() 
{ 
	int i,j; 
	printf("\n"); 
	for(i=1;i<=n;i++)
	{ 
		for(j=1;j<=n;j++)
		{ 
			if(a[i][j]==1) 
			printf("Q"); 
			else 
			printf("0"); 
			printf("\t"); 
		}
	printf("\n"); 
	} 
printf("-----------------------------");
}
