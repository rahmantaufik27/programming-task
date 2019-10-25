#include <stdio.h>
#include <stdlib.h>

void swap(int* l, int* r){
    int t = *l;
    *l = *r;
    *r = t;
}

int partition(int arr[], int left, int right){

    int pivot = left + rand()%(right-left+1);
    int j = left;
    int i = left-1;

    while(left<right){
        if(arr[j]<arr[pivot]){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return (i + 1);
}

void quick_sort(int arr[], int left, int right){
    if(left < right){
        //pivot = left + rand()%(right-left+1);
        int pivot = partition(arr, left, right);
        quick_sort(arr, left, pivot-1);
        quick_sort(arr, pivot+1, right);
    }
}

int main()
{
    int i;
    int bil1;
    int arr1[100] = {12,3,5};

    scanf("%d", &bil1);

    //for(i=0; i<bil1; i++){
    //    scanf("%d", &arr1[i]);
    //}

    quick_sort(arr1, 0, bil1-1);

    for(i=0; i<bil1; i++){
        printf("%d ", arr1[i]);
    }

    return 0;
}


