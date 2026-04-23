//SELECTION SORT

// 2 parts in an array i.e , one sorted part and another unsorted part
// we have to find the smallest element in the unsorted part and swap it with the first element of the unsorted part and then move the boundary of the sorted part one step right
// time complexity = O(n2) and space complexity = O(1)


#include<iostream>
#include<algorithm>
using namespace std;
void selectionSort(int arr[],int n){
   
    for(int i = 0;i<n-1;i++){
         int smallestIndex = i;
        for(int j= i+1;j<n;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
}
void printArr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]= {4,1,5,2,3};
    int n = 5;
    selectionSort(arr,n);
    printArr(arr,n);

}