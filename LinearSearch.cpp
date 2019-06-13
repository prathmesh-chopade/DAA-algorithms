#include <stdio.h> 
#include<time.h> 
#include <malloc.h>
int main() {
   int *array;   
   int search, c, n;   
   clock_t t;   
   double time_taken;   
   printf("Linear Search \n");   
   printf("Enter the number of elements in array :");   
   scanf("%d",&n);   
   array = (int *)malloc(sizeof(int)*n);   
   printf("Enter %d integer(s)\n", n);
 
   for (c = 0; c < n; c++)      
   scanf("%d", &array[c]);   
   printf("Enter the number to search :");   
   scanf("%d", &search);      
   t=clock();   
   for (c = 0; c < n; c++)   {      
   if (array[c] == search)     
   /* if required element found */      
   {         
   printf("%d is present at location %d.\n", search, c+1);         
   break;      
   }   
   }   
   if (c == n)      
   printf("%d is not present in array.\n", search); 
   t=clock()-t; 
   time_taken=((double)t)/(CLOCKS_PER_SEC/1000); 
   printf("The time taken to execute is %lf milliseconds ",time_taken);   
   return 0;
}

