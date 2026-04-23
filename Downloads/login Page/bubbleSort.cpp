// SORTING : process of arranging data in a particular format either in ascending or descending order
// first : BUBBLE SORT : (n-1) iterations and adjacent element k sath comparison krke largest element to right most position mein place krte h ..
#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){ //O(n2)

    for(int i = 0;i<n-1;i++){
        bool isSwap =false; // to optimize our code if array is already sorted then we can break the loop
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false){ // array is already sorted
            break;
        }

    }
}
void printArr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {4,1,5,2,3};
    int n = 5;
    bubbleSort(arr,n);
    printArr(arr,n);
}



