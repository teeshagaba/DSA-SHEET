class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int i = m-1,j=n-1;
        int idx = m+n-1;
        while(i>=0 && j>=0){
            if(A[i]>=B[j]){
                A[idx--] = A[i--];
            }
            else{
                A[idx--] =B[j--];
            }
        }
        while(j>=0){
             A[idx--] =B[j--];
        }
    }
};

//  NEXT PERMUTATION : Return the next permutation of the given array of integers. The replacement must be in place and use only constant extra memory. If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order). For example, the next permutation of arr = [1,2,3] is [1,3,2]. Similarly, the next permutation of arr = [2,3,1] is [3,1,2]. The next permutation of arr = [3,2,1] is [1,2,3].

// Return lexicographically next 

// BRUTE FORCE APPROACH : STEPS ::: 
// 1. find all the possible permutations 
// 2. sort the permutations in lexicographical order
// 3. find the given permutation in the sorted list and return the next one

// OPTIMAL APPROACH : STEPS :::
// 1. Traverse the array from the end and find the first pair of adjacent elements. first find the pivot element which is the first element that is smaller than its next element. If no such element exists, then this is the last permutation and we need to reverse the array to get the lowest order.
// 2. If such an element is found, then again traverse the array from the end and find the first element that is greater than the pivot element. This will be the successor element.
// 3. Swap the pivot and successor element. 
// 4. Reverse the subarray from the pivot element to the end of the array. This will give us the next permutation in place and with constant extra memory.  


// when we got a condition in which no pivot element is found, it means that the array is in descending order and we need to reverse it to get the lowest order.


class Solution { // O(n) time and O(1) space
public:
    void nextPermutation(vector<int>& nums) {
        int pivot =-1;
        int n = nums.size();
        for(int i = n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot =i;
                break;
            }
        }

        if(pivot== -1){
            reverse(nums.begin(),nums.end());//in place changes
            return; // this return is important bhaii..
        }
       // 2. next larger element
        for(int i = n-1 ; i>pivot ;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;

            }
        }
        // 3. reverse from pivot+1 to n-1
        //  reverse(nums.begin()+pivot+1 ,nums.end())
        int i = pivot+1 , j = n-1;
        while(i<=j){
            swap(nums[i++],nums[j--]);

        }
        


    }
};

//  we can also use this keyword next_permutation() in C++ STL to get the next permutation of the given array. It is a built-in function that takes the range of the array and rearranges it to the next permutation in place. If the function cannot find a next permutation, it rearranges the array to the lowest order (i.e., sorted in ascending order).

// next_permutation(nums.begin(), nums.end()); // this will give us the next permutation of the array nums in place and with constant extra memory.