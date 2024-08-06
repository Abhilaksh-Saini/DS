//Name - Abhilaksh Saini
//PRN - 23070122011
// Write a program to implement bubble sort using iteration.

# include <stdio.h>

void bubble_sort(int arr[], int n);

int main(){
	int n, i , arr[100];
	
	printf("Enter the dimension of the array(<100) : ");
	scanf("%d", &n);
	if(n > 100|| n < 2)
		printf("Enter a valid input according to the limit.");
		
	else{
		printf("Input the elements of the array.\n");
		for(i = 0; i < n; i++){
			printf("Element %d : ", i+1);
			scanf("%d", &arr[i]);
		}
		bubble_sort(arr, n);
	}

	return 0;
}

void bubble_sort(int arr[], int n){
	int i, j, k, temp, pass = 0;
	
	printf("\nThe input array is : \n");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	for(i = 0; i < n - 1; i++)
	{	
		for(j =  0 ; j < n - i -1; j++)
		{	
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
					
		}
		++pass;
		printf("\nPass %d: ", pass);
			for (k = 0; k < n; ++k)
                 printf("%d ", arr[k]);
                 printf("\n");
        
	}
	
	printf("\nThe sorted array is : \n");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
}
