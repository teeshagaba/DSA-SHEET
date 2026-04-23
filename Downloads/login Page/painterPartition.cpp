#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int>& arr,int n,int m,int maxAllowedTime){ //O(n)
    int painter = 1,time = 0;
    
    for(int i = 0;i< n;i++){
        if(time + arr[i]<=maxAllowedTime){
        time += arr[i];
    }
    else{
        painter++;
        time = arr[i];

    }
    }
    return painter>m ?false : true;

    
}
int minTimeToPaint(vector<int>arr,int n,int m ){ //O(log(sum)*n)
    int maxVal = INT_MIN , sum = 0;
    for(int i =0; i<=n ; i++){ // O(n)
        int sum += arr[i];
        maxVal = max(arr[i],maxVal);
    }
    int st = maxVal ,end = sum,ans = -1;
    while(st<=end){ //O(log(sum)*n) due to isPossible Function
        int mid = st + (end-st)/2;
        if( isPossible(arr,n,m,mid)){ //O(n)
            ans = mid;
            end = mid-1 ;
        }
        else {
            st = mid + 1;
        }
    }
    return ans;


}

int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4 , m = 2;
    cout<< minTimeToPaint(arr,n,m)<<endl;
    return 0;
}