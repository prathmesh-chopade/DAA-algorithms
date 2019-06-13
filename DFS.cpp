#include <stdio.h>
#include <stdlib.h> 
#include<time.h> 
int source,V,E,visited[20],G[20][20]; 
void DFS(int i){ 
int j; 
visited[i]=1; 
printf(" ->%d",i+1); 
for(j=0;j<V;j++) {
 if(G[i][j]==1&&visited[j]==0) 
 DFS(j); 
 } 
 } 
 int main() 
 { 
 clock_t t; 
 int i,j,v1,v2; 
 printf("Enter the no of edges:"); 
 scanf("%d",&E); 
 printf("Enter the no of vertices:"); 
 scanf("%d",&V); 
 for(i=0;i<V;i++) 
 { 
 for(j=0;j<V;j++) 
 G[i][j]=0; 
 } 
 /* creating edges */ 
 printf("Enter the edges (format: V1 V2) : "); 
 for(i=0;i<E;i++) { 
 scanf("%d%d",&v1,&v2); 
 G[v1-1][v2-1]=1;
 } 
 for(i=0;i<V;i++)
 { 
 for(j=0;j<V;j++) 
 printf(" %d ",G[i][j]); 
 printf("\n"); 
 }
 printf("Enter the source: "); 
 scanf("%d",&source); 
 t = clock(); 
 DFS(source-1); 
 t = clock() - t; 
 double time_taken = ((double)t)/CLOCKS_PER_SEC; 
 printf("\nDFS() took %f milliseconds to execute", time_taken/1000); 
 return 0;
 }
