// Kadane's Algorithm to find maximum sum of contiguous subarray
// Array = { 1, 2, 3, 4,5} = possible continuous subarrays : {1,2,3,4,5};{12,23,34,45 };{123.234,345}; {1234,2345};{12345}
// Maximum number  of sub arrays = n(n+1)/2 ; here it is 15...
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 5;
    int arr[] = { 1,2,3,4,5};
    for(int start = 0; start< n;start++){  // 3 nested loops 
        for(int end = start; end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];

            }
            cout<<" ";

        }
        cout<<endl;
    }
    return 0;
}

// BRUTE FORCE approach : to reduce time complexity to O(n^2) we can calculate the sum of subarray in the inner loop instead of using 3rd loop
// KADANE'S ALGORITHM : to reduce time complexity to O(n) we can use the concept of maximum sum of subarray ending at each index and keep track of the maximum sum found so far

class solution{
    public:
    int maxSubArray(vector<int>& nums){
        int maxSum = nums[0]; // Initialize maxSum to the first element of the array
        int currentSum = 0; // Initialize currentSum to 0
        for(int i = 0; i< nums.size();i++){
            currentSum += nums[i]; // Add the current element to currentSum
            maxSum = max(maxSum,currentSum); // Update maxSum if currentSum is greater
            if(currentSum < 0){ // If currentSum becomes negative, reset it to 0
                currentSum = 0;
            }
        }
        return maxSum; // Return the maximum sum found

    }
}

// OR 
class solution {
    public:
    int maxSubArray(vector<int>& nums){
        int curSum = 0,maxSum = INT_MIN;
        for(int val : nums){
            curSum  += val;
            maxSum = max(curSum, maxSum);
            if(curSum<0){
                curSum = 0;
            }
        }
        return maxSum;
    }
}