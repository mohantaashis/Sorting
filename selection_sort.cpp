#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0; i<size; i++){
        int minimum_index = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minimum_index]){
                minimum_index = j;
            }
        }
        if(i != minimum_index){
            int temp = arr[i];
            arr[i] = arr[minimum_index];
            arr[minimum_index] = temp;
        }
    }
}

int main()
{
    int arr[] = {15, 6, 22, 2, 85, 62, 12, 8, 7, 9, 43};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    for(auto res: arr){
        cout<<res<<" ";
    }
    return 0;
}