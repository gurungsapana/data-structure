//Program for Binary Search
#include<stdio.h>

int BinarySearch(int array[], int key, int start, int end);

int main(){
	int size, count, key, start, end;

	//Entering array size
	printf("Enter the size of array:");
	scanf("%d", &size);
	int array[size];

	//Entering array elements
	printf("Enter the elements of the array:");
	for(count = 0; count < size; count++){
		scanf("%d", &array[count]);
	}

	//Entering the element you want to search
	printf("Enter the number you want to search:");
	scanf("%d", &key);

	start = 0;
	end = size-1;
	BinarySearch(array, key, start, end);
	return 0;
} 

int BinarySearch(int array[], int key, int start, int end){

	//Checking if the element is not available in the array
	if(start > end){
		printf("The number you are searching for is not available in the array.");
		return 0;
	}

	//Checking if the elament is available in the array
	int middle = (start + end) / 2;

	if(key == array[middle]){
		printf("The number you entered is available at index %d", middle+1);
	} 
	else if(key < array[middle]){
		BinarySearch(array, key, start, middle-1);
	} 
	else{
		BinarySearch(array, key, middle+1, end);
	}
	return 0;
}