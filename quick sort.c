#include<stdio.h>
void quicksort (int a[100], int first, int last);
int main ()
{
  int n, i, a[100];
  printf ("Enter the no of elements : ");
  scanf ("%d", &n);
  printf ("Enter the array elements :\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  quicksort (a, 0, n - 1);
  printf ("The sorted elements :\n");
  for (i = 0; i < n; i++)
    printf ("%d ", a[i]);
  return 0;
}

void quicksort (int a[100], int first, int last)
{
  int i, j, pivot, temp;
    if(first<last)
	{
      pivot = first;
      i = first;
      j = last;
      if (i < j)
	{
	  while (a[i] <= a[pivot] && i < last)
	    {
	      i++;
	    }
	  while (a[j] > a[pivot])
	    {
	      j--;
	    }
	  if (i < j)
	    {
	      temp = a[i];
	      a[i] = a[j];
	      a[j] = temp;
	    }
	}
      temp = a[pivot];
      a[pivot] = a[j];
      a[j] = temp;
      quicksort (a, first, j - 1);
      quicksort (a, j + 1, last);
}
}
/*#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}*/
