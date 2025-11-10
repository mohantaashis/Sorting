#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=size-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int testArray[] = {6, 11, 3, 56, 22, 5, 63, 45, 14};
    int sizeOfArray = sizeof(testArray)/sizeof(testArray[0]);
    bubbleSort(testArray, sizeOfArray);
    for(auto res: testArray){
        cout<<res<<" ";
    }
}