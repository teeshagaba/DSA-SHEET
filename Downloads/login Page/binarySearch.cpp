// Binary Search : just like Dictionary
//  we need a sorted array { monotonic /monotonous = non increasing/non decreasing functions}
// Binary search ka main kaam h Search space ko half kr dena by discarding either right half or left half
#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int tar){
    int st = 0,end = arr.size()-1;
    while(st<=end){
        // To optimize our code and save it from the condition of overflow generally when two INT_MAX added so we use different formula
        int mid = (st+end)/2;   // mid = st + (end - st)/2;
        if(tar>arr[mid]){
            st = mid+1; // 2nd half

        }
        else if(tar<arr[mid]){
            end= mid - 1; //1st half
        }
        else{
            return mid;
        }

    }
    return -1;
}
int main(){
    vector<int> arr1 = {-11,0,4,7,9,10};
    int target1 = 7;
    cout<< BinarySearch(arr1,target1) << endl;

    vector<int> arr2 = { -91,-32,0,8,34,56,91};
    int target2 = -32;
    cout<< BinarySearch(arr2,target2) << endl;
    //  time complexity = O(logn)
}
//  Recursive Binary Search 
#include<iostream>
#include<vector>
using namespace std;
int recBinarySearch(vector<int> arr,tar,st,end){
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
