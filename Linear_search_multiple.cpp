//14. Write a program to search for an element in an array using linear search with multiple occurrences.
# include <stdio.h>

int main(){
	int arr[7] = {1,2,3,4,4,6,7};
	int num, i,  count = 0;
	printf("Array: ");
	for(int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	printf("\nEnter the number that you want to search : ");
	scanf("%d", &num);
	
	for(i = 0; i < 7; i++){
		if(arr[i] == num){
			printf("%d is present at index %d.\n", num, i);
	 		count++;
		}
	}
	
	if(count == 0)
		printf("The element is not found.\n");
	else
		printf("%d is present %d times in array.\n", num, count);
	return 0;
}

