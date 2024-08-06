//Write a program to search for an element in an array using binary search by recursion.
# include <stdio.h>

int binary_search(int arr[], int low, int high, int num);

int main(){
	int size, num, arr[50];
	printf("Enter the size of the array (<= 50) : ");
	scanf("%d", &size);
	
	if(size <= 50){
		printf("Enter a ascending sorted array only\n");
		for(int i = 0; i < size; i++){
			printf("Element %d : ", i + 1);
			scanf("%d", &arr[i]);
		}
		printf("The number that you want to search : ");
		scanf("%d", &num);
		
		int result = binary_search(arr, 0, size - 1, num);
		(result == -1)? printf("The number is not present in the array.") : printf("The number is  present at position %d in the array.", result + 1);
	}
	else
		printf("Please enter an appropriate size of the array.");
	return 0;
}
int binary_search(int arr[], int low, int high, int num){
	if(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == num)	
			return mid;
		if(num > arr[mid])	
			return binary_search(arr, mid + 1, high, num);
		else
			return 	binary_search(arr, low, mid - 1, num);
	}
	return -1;
}
