#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>&arr , int N,int C, int minAllowedDistance){
    int cow= 1, lastStallPos = arr[0];
    for(int i = 0;i<N;i++){
        if(arr[i]-lastStallPos >= minAllowedDistance){
        cow++;
        lastStallPos=arr[i];
        
    }
    if(cow == C){
        return true;
    }
    }
    return false;
    
}
int getDistance(vector<int>&arr ,int N,int C){
    sort(arr.begin(),arr.end()); 
    int st = 1 ,end = arr[N-1]-arr[0]; // end = maxValue - minValue
    int ans = -1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(isPossible(arr,N,C,mid)){
            ans = mid;
            st = mid+1 ;
        }
        else{
            end = mid-1 ;
        }

    }
    return ans;
    
    

}
int main(){
    vector<int> arr = {1,2,8,4,9};
    int N = 5, C = 3;
    cout<< getDistance(arr,N,C) << endl;
}