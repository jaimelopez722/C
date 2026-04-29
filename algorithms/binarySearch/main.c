#include <stdio.h>

//Binary Search function
int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;    // safer middle

        if(arr[mid] == target){
            return mid; // found
        }
        else if (arr[mid] < target){
            left = mid + 1; // search right side
        }
        else{
            right = mid - 1;    // search left side
        }
    }
    return -1; //not found
}

int main(){

    // Must be in a sorted list

    int arr[] = {1, 3, 5, 7, 9, 11, 23, 33, 45, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter a number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if(result != -1){
        printf("Found at index %d", result);
    }
    else{
        printf("Not found");
    }

    return 0;
}