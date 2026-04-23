// MOUNTAIN PEAK ELEMENT
#include <iostream>
#include <vector>

using namespace std;

// CHARACTERISTICS :  1. A[i-1]<A[i] ( Left side is strictly increasing)
// 2. A[i]>A[i+1] ( Right side is strictly decreasing)
// 3. A[i-1] < A[p] < A[i+1] ( A[i] is greater than its neighbours)
// Brute force approach : Linear search : O(n)
// Optimal approach : Binary search : O(logn)
// NOTE : If there are multiple peaks, return the index of any one of the peaks.
// index = 0 and n-1 != peaks 


// If MID is the peak element then return mid
// If MID is in the increasing part of the array then there must be a peak element in the right half of the array
// If MID is in the decreasing part of the array then there must be a peak element in

// For : 1. search space to not check on index = 1 and index = n-1
// 2. and for not checking on mid[i-1] and mid[i+1] as they are not peaks
// we are initializing st = 1 and end = n-2 for mid value range from 1 to n-2

class solution{
    public:
    int PeakIndexInMountainArray(vector<int> & arr){
        int n = arr.size();
        int st = 1,end=n-2;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1]<arr[mid]){
                st =mid+1;//  search in right half

            }
            else{
                end = mid-1; // search in left half
            }
            }
            return -1;
        }
    };

    int main(){
        vector<int> arr = {0,1,0};
        solution s;
        cout<< s.PeakIndexInMountainArray(arr)<<endl;
    }
