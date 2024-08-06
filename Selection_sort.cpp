//Name - Abhilaksh Saini
//PRN - 23070122011

// Problem statement: Write a program demonstrating selection sort using functions.

# include <stdio.h>

void printArray(int arr[], int size);
void swap(int *x, int *y);
void selection_sort(int arr[], int n);

int main(){
	int size, arr[50];
	
	printf("Enter the size of the array(<= 50) : ");
	scanf("%d", &size);
	
	if(size <= 50){
		printf("Enter the elements of the array(<= %d).\n", size);
		for(int i = 0; i < size; i++){
			printf("Element %d : ", i+1);
			scanf("%d", &arr[i]);
		}
		
		printf("Input array : \n");
		printArray(arr, size);
		selection_sort(arr, size);
		printf("\nSorted array : \n");
		printArray(arr, size);
	}
	else
		printf("Please provide an appropriate input.");
	return 0;
}

void printArray(int arr[], int size){
	for(int i = 0; i < size; i++){
			printf("%d ", arr[i]);
		}
}

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selection_sort(int arr[], int n){
	int i, j, k, min_idx, pass = 0;
	for(i = 0; i < n - 1; i++){
		min_idx = i;
		for(j = i + 1; j < n; j++){
			if(arr[min_idx] > arr[j])
				min_idx = j;
		}
		if(min_idx != i)
			swap(&arr[min_idx], &arr[i]);
		++pass;
		printf("\nPass %d: ", pass);
			for (k = 0; k < n; ++k)
                 printf("%d ", arr[k]);
                 printf("\n");
	}
}
