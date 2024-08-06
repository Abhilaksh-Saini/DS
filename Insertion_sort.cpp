//Name - Abhilaksh Saini
//PRN - 23070122011

// Implementing insertion sort.

# include <stdio.h>

void printArray(int arr[], int size);
void insertion_sort(int arr[], int n);

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
		insertion_sort(arr, size);
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

void insertion_sort(int arr[], int n){
	int i, j, k, temp, pass = 0;
	for(i = 0; i < n; i++){
		j = i;
		while((j <= i) && (j > 0)){
			if(arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j -1];
				arr[j-1] = temp;
			}
			j--;
		}
		++pass;
		printf("\nPass %d: ", pass);
			for(k = 0; k < n; ++k)
                 printf("%d ", arr[k]);
                 printf("\n");
	}	
}
