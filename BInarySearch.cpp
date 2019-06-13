#include <stdio.h> 
#include<time.h> 
#include<malloc.h> 
int main() {   
int c, first, last, middle, n, search;   
int * array;   
clock_t t;   
double time_taken;   
printf ("Binary Search \n");   
printf("Enter number of elements :");   
scanf("%d",&n);    
array=(int *)malloc (sizeof(int)*n);   
printf("Enter %d integers\n", n);   
for (c = 0; c < n; c++)      
scanf("%d",&array[c]);   
printf("Enter value to find :");   
scanf("%d", &search);   
t=clock();   
first = 0;   
last = n - 1;   
middle = (first+last)/2;   
while (first <= last) {      
if (array[middle] < search)         
first = middle + 1;          
else if (array[middle] == search) {         
printf("%d found at location %d.\n", search, middle+1);         
break;      
}      
else         
last = middle - 1;
middle = (first + last)/2;   
}   
if (first > last)      
printf("Not found! %d is not present in the list.\n", search);
 
t=clock()-t; 
time_taken=((double)t)/(CLOCKS_PER_SEC/1000); 
printf("The time taken to execute is %lf milliseconds ",time_taken);
return 0;   
}
