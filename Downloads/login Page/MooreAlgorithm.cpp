// MAJORITY ELEMENT : Brute Better Best Approach
//  Return pair in sorted array with target sum 
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans ;
    int n = nums.size();
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);                                                         2
                return ans;
            }
        }
    }
} 
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = pairSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;

}

// For more optimized solution we can use two pointer approach or hashing technique to reduce time complexity to O(n) and space complexity to O(n) respectively.
// here we are using two pointer approach which requires the array to be sorted. If the array is not sorted we can sort it first and then apply the two pointer approach. The time complexity of this approach is O(nlogn) due to sorting and O(n) for the two pointer approach, resulting in an overall time complexity of O(nlogn). The space complexity is O(1) as we are not using any extra space.
/* 1.PS(pair sum) > target (j--)
   2.PS <target  (i++)
   3.PS = target  (ans= (i,j))*/

   #include<iostream>
   #include<vector>
   using namespace std;
   vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();
     int i =0;
        int j = n-1;
        while(i<j){
            int pairSum = nums[i]+nums[j];
            if(pairSum>target){
                j--;
            } else if(pairSum<target){
                i++;
            }
            else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;

            }
        }0
        return ans;
   }

   int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> ans = pairSum(nums , target);
    cout << ans[0]<< " " << ans[1]<<endl;
    return 0;
   }


//    MAJORITY ELEMENT: //1. Brute force 
                        // 2. Optimize
                        // 3. Moore'
// Brute force approach : time complexity = O(n^2) and space complexity = O(1)                        
class solution{
    public:
    int majorityElement(vector<int>& nums){
        int n = nums.size();
        for(int val : nums){
            int freq = 0;
            for(int element : nums){
                if(element == val ){
                    freq++;
                }
            }
            if(freq> n/2){
                return val;
            }

        }
        return -1;
    }
}                

// optimize approach of using sorting method : time complexity = O(nlogn + n)
class solution {
    public : 
    int majority element(vector<int>& nums){
        int n = nums.size();

        //sort
        sort(nums.begin(),nums.end());
        // freq count
        int freq =1, ans = num[0];
        for(int i =1;i <n,i++){
            if (nums[i]==nums[i-1]){
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }
            
                if(freq> n/2){
                    return ans;
                }

                /* code */
            }
        
            
        }
        return ans;

    }


// MOORE'S VOTING ALGORITHM : time complexity = O(n) and space complexity = O(1)
class solution{
    public:
    int majorityElement(vector<int>& nums){
        int freq = 0;ans =  0;
        for(int i = 0; i< nums.size();i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(nums[i] == ans){
                freq++;
            } else {
                freq--;
            }
        }
        int count = 0;
        for(int val :nums){
            if(val == ans){
                count++;
            }

        }
        if(count> nums.size()/2){
            return ans;
        }
        else{
            return -1;
        }
        return ans;

    }
}
