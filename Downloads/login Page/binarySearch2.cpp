//  Recursive Binary Search 
#include<iostream>
#include<vector>
using namespace std;
int recBinarySearch(vector<int> arr, int tar,int st,int end){
    int st = 0,end = arr.size()-1;
    int mid = st+ (end-st)/2;
    while(st<= end){
        if(tar<arr[mid]){
            recBinarySearch(arr,tar,st,mid-1);

        }
        else if(tar>arr[mid]){
            recBinarySearch(arr,tar,mid+1,end);

        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1= {-65,-54,0,32,87,45};
    int tar1 = 32;
    cout<< recBinarySearch(arr1,tar1);
}
