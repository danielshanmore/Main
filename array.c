#include<stdio.h>
#include<stdlib.h>

void arrayAccommodation(int* a, int aSize);
void printArray(int* a, int aSize);
void printBackwards(int* a, int aSize);
void linearSearch(int* a, int aSize);
void bubbleSort(int* a, int aSize);
void findMax(int* a,int aSize);

int main()
{
	int* a;
	int aSize;
	int choice;

	printf("How many numbers would you like to accommodate in your array?\n");
	scanf_s("%d", &aSize);

	a = (int*)calloc(aSize, sizeof(int));
	arrayAccommodation(a, aSize);

	printf("What function do you want to call? \n");
	printf("Press 0 to exit program. \n");
	printf("Press 1 to call printArray. \n");
	printf("Press 2 to call linearSearch. \n");
	printf("Press 3 to call bubbleSort. \n");
	printf("Press 4 to call findMax. \n");

	do {
		scanf_s("%d", &choice);
		printf("\n");
		switch (choice) {
		case 0: printf("Goodbye! \n"); break;
		case 1: printArray(a, aSize); break;
		case 2: pr
		case 2: linearSearch(a, aSize); break;
		case 3: bubbleSort(a, aSize); break;
		case 4:	findMax(a, aSize); break;
		default: printf("Invalid choice"); break;
		} 
	} while (choice != 0);
}
recursive print, counting sort, binary search

void arrayAccommodation(int* a, int aSize) {
	// prompt user for numbers and fill array
	printf("Please enter %d numbers \n", aSize);
	for (int i = 0; i < aSize; i++) {
		scanf_s("%d", &a[i]);
	}
}


void printArray(int* a, int aSize) {
	//print the array
	printf("Here is your array \n");
	for (int i = 0; i < aSize; i++) {
		printf("%d \n", a[i]);
	}
	printf("\n");
}


void printBackwards(int* a, int aSize) {
	// print array backwards
	printf("Here is your array backwards \n");
	for (int i = aSize-1; i > 0; i--) {
		printf("%d \n", a[i]);
	}
	printf("\n");

}


void linearSearch(int* a, int aSize) {
	// ask user for a number, tell them whether or not it is in the array
	int target;
	int found = 0;

	printf("What number do you want to search for? \n");
	scanf_s("%d", &target);

	for (int i = 0; i < aSize && found != 1; i++) {
		if (a[i] == target) found = 1;
	}

	if (found==1)  printf("Your number is in the array \n");
	else if (found==0)  printf("Your number is not in the array \n");
	else printf("Something went wrong");
}


void bubbleSort(int* a, int aSize) {
	// sorts array from smallest to largest
	int temp;
	int sorted = 0;
	for (int i = 0; i < aSize-1 && sorted == 0; i++) {
		sorted = 1;
		for (int j = 0; j < aSize-1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				sorted = 0;
			}
		}
	}
	printf("Here is your array sorted \n");
	printArray(a, aSize);
}


void findMax(int* a, int aSize) {
	//finds maximum value in array
	int max = a[0];

	for (int i = 0; i < aSize; i++) {
		if (a[i] > max) max = a[i];
		printf("Maximum value of array is %d \n", max);
	}
}
