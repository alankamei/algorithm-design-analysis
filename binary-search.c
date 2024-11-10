#include <stdio.h>

int binary_search( int n, int arr[], int target){
    int low = 0;
    int high = n-1;
    int mid;

    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid]<target){
            low = mid + 1;
        } else {
            high =  mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 9, 12, 22, 25, 33, 38, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target, result;

    printf("The existing values are ");
    for(int i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("Enter the target: ");
    scanf("%d", &target);

    result = binary_search(n, arr, target);
    if(result != -1){
        printf("The %d is found at index %d", target,result);
    } else {
        printf("The target is not found!");
    }
    return 0;
}