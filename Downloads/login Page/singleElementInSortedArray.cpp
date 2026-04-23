// we have to find single unique emement in sorted array where every element appears twice except one element which appears once
// we can use XOR operator to find the unique element in the array
// we can use linear search to find the unique element in the array but it will take O(n) time complexity
// we can use binary search to find the unique element in the array but it will take O(logn) time complexity
#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int SingleElementInSortedArray(vector<int> & A){
        int n = A.size();
        int st = 0,end = n-1;
        if(n==1)return A[0]; // 1st check point/ corner or edge cases
        while(st<=end){
            int mid = st+(end-st)/2;
            
            if(mid==0 && A[0]!= A[1]) return A[mid]; // 2nd check point/ corner or edge cases
            if(mid == n-1 && A[n-1]!=  A[n-2]) return A[mid]; // 3rd check point/ corner or edge cases

            if(A[mid]!= A[mid-1] && A[mid]!=A[mid+1]) return A[mid];

            if(mid %2==0){ // even
                if(A[mid]==A[mid-1]){
                    end = mid -1; // left
                }
                else { // right
                    st = mid + 1 ;
                }
            }
            else{ // odd
                if(A[mid]==A[mid-1]){
                    st= mid+1; // right
                }
                else{
                    end= mid-1; //left
                }
            }


        }
        return -1;
    }
}