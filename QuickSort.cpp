#include<stdio.h> 
#include<time.h> 
#include<malloc.h> 
void swap(int* a, int* b) { 
int t = *a; 
*a = *b; 
*b = t; 
}
int partition (int arr[], int low, int high)
{
int pivot = arr[high]; 
int i = (low - 1);
for (int j = low; j <= high- 1; j++)
{ 
if (arr[j] <= pivot)
{ 
i++; 
swap(&arr[i], &arr[j]); 
} 
} 
swap(&arr[i + 1], &arr[high]); 
return (i + 1);
} 
void quickSort(int arr[], int low, int high) 
{ if (low < high){
 int pi = partition(arr, low, high);
quickSort(arr, low, pi - 1); 
quickSort(arr, pi + 1, high); 
}
}
void printArray(int arr[], int size) {
 int i; 
 for (i=0; i < size; i++) 
 printf("%d ", arr[i]); 
 }
int main() 
{ int* arr; int n; 
double time_taken; 
clock_t t;
printf("Enter the no of elements="); 
scanf("%d",&n); 
arr=(int *) malloc (sizeof(int)*n); 
printf("Enter the element");
for(int i=0;i<n;i++) 
scanf("%d",&arr[i]); 
t = clock(); quickSort(arr, 0, n-1); 
t = clock() - t; time_taken = ((double)t)/(CLOCKS_PER_SEC/1000); 
printf("Sorted array:\n"); 
printArray(arr, n); 
printf("\nquickSort() took %f milliseconds to execute", time_taken); 
return 0;
}
