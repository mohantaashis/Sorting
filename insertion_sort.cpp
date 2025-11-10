#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j > -1 && temp < arr[j]){
            arr[j+1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{
    int arr[] = {8, 9, 12, 1, 6, 5, 14, 4, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);
    for(auto v: arr){
        cout<<v<<" ";
    }
    return 0;
}