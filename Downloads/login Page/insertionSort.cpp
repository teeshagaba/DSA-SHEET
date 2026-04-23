//Insertion sort : Imagine a card deck and placing right order card in that grp of cards
#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int prev = i-1;
        int curr = arr[i];
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]= curr; // placing the current element in its correct position
    }
}

void printArr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]= {4,1,3,5,2};
    int n =5 ;
    insertionSort(arr,n);
    printArr(arr,n);
}