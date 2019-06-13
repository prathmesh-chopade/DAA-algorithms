#include<stdio.h> 
#include<time.h> 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 
int knapSack(int W, int wt[], int val[], int n) 
{
	int i, w,K[n+1][W+1];
	for (i = 0; i <= n; i++) 
	{ 
		for (w = 0; w <= W; w++)
		{ 
			if (i==0 || w==0) K[i][w] = 0; 
			else if (wt[i-1] <= w)
			K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]); 
			else 
			K[i][w] = K[i-1][w];
		} 
	} 
return K[n][W]; 
} 
int main()
{ 
	clock_t t; 
	t = clock(); 
	int val[10],wt[10],n,I, W = 50,i; 
	printf("Enter the no. of elements="); 
	scanf("%d",&n); 
	printf("Enter the value=");
	for(i=0;i<n;i++) 
	scanf("%d",&val[i]);
	printf("Enter the weight="); 
	for(i=0;i<n;i++) 
	scanf("%d",&wt[i]);
	printf("Maximum total value is %d", knapSack(W, wt, val, n)); 
	t = clock() - t; 
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("\nknapSack() took %f milliseconds to execute", time_taken/1000); 
	return 0; 
}
