#include <stdio.h>

#define ARRSZ 10

void sort(int [], int, int);
int partition(int [], int, int);
void swap(int *, int *);

int quickSort()
{
	printf("\n");
	printf("\n");
	printf("Quick Sort Program\n");

	int nums[ARRSZ] = {28, 2, 6, 4, 109, 18, 10, 19, 68, 45};
	int i, j;


	printf("Original array:\n");
	for (i = 0; i < ARRSZ; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");

	//call quicksort
	sort(nums, 0, ARRSZ - 1);

	printf("Sorted array:\n");
	for (i = 0; i < ARRSZ; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");


	return 0;
}


void sort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);

		sort(arr, low, pi - 1);
		sort(arr, pi + 1, high);
	}
}


int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1), j, k;	
	printf("\npivot is: %d\n", pivot);
	printf("\ni is: %d\n", i);

	for (j = low; j <= high - 1; j++) {
		printf("\nJ is: %d\n", j);
		if (arr[j] < pivot) {
			printf("\npivot2 is: %d\n", pivot);
			i++;
			swap(&arr[i], &arr[j]);
			/*printf("\narr[i] is: %d & arr[j] is: %d\n", arr[i], arr[j]);
			for (k = 0; k < ARRSZ; k++) {
				printf("%d ", arr[k]);
			}*/
		}
	}
	swap(&arr[i + 1], &arr[high]);
	//printf("\nsecond print\n");
	//for (k = 0; k < ARRSZ; k++) {
	//	printf("%d ", arr[k]);
	//}
	printf("\ni2 is: %d\n", i);
	return (i + 1);
}

void swap(int *num1, int *num2)
{
	int hold;
	hold = *num1;
	*num1 = *num2;
	*num2 = hold;
}
