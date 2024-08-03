#include<stdio.h>

int binarySearch(int arr[], int low, int high, int key){
    int mid;
    while(low< high){
        mid = (low + high) / 2;
        if (key==arr[mid])
            return mid;
        else if (key<arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(){
    int arr[10], key, succ,n;
    printf("Enter the size of array");
    scanf("%d", & n);
    printf("Enter the elements in ascending order")
    for (int i=0; i<=n; i++)
        scanf("%d",&arr[i]);

    printf("Enter the value to search");
    scanf("%d",&key);

    succ= binarySearch(arr, 0, n-1, key);
    if(succ>=0)
        printf("Element found @ %d",succ);
    else 
        printf("Element not found");
    return 0;
}
