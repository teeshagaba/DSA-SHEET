// DUTCH NATIONAL FLAG PROBLEM
// Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.
// Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.


class Solution {  //O(n) time and O(1) space - single pass 
public:
    void sortColors(vector<int>& nums) {
        int low =0,mid =0,n = nums.size();
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{//2
            swap(nums[high],nums[mid]);
            high--;

            }
        }

    }
};

//  BRUTE FORCE APPROACH
Class Solution {  //O(nlogn) time and O(1) space - sorting
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        for(int i=0;i<count0;i++){
            nums[i]=0;
        }
        for(int i=count0;i<count0+count1;i++){
            nums[i]=1;
        }
        for(int i=count0+count1;i<n;i++){
            nums[i]=2;
        }
    }
};
