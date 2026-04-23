#include<iostream>
#include<vector>
using namespace std;
int Search(vector<int>arr,int tar ){
    int st=0,end = arr.size()-1;
    
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        if(arr[st]<= arr[mid]){ // left sorted
           if(arr[st]<=tar && tar<=arr[mid]){
            end = mid-1;
           }
           else{
            st = mid+1;

           }
        }
        else{ // right sorted
            if(arr[mid]<= tar && tar<= arr[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }

    }
    return -1;
}

int main(){
    vector <int> arr = { 6,7,8,0,1,2,3,4,5};
    int target = 2;
    cout<< Search(arr,target)<<endl;
}