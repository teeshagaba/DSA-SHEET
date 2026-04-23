// VECTORS : JUST LIKE ARRAY BUT DYNAMIC IN NATURE 
// STL : STANDARD TEMPLATE LIBRARY 
// STL CONTAINER : vector , queue , stack , set 
// Vector syntax 

/* vector<int>vec;
vector<int>vec = {1,2,3}
vector<int>vec(3,0)  = (size , each element value)*/

#include<iostream>
// #include<bits/c++.h>
#include<vector>
using namespace std;
int main(){
    // vector<int> vec;//0
    vector<int> vec(5,1);//5
    cout<<vec[0]<<endl;
    cout<<vec[1]<< endl;
    cout<<vec[2]<< endl;
    // cout<<vec[5]<<endl;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vec = {'a','b','c','d','e'};
    for(char val :vec){
        cout << val<< endl;
    }
}

// VECTORS FUNCTIONS : size; push_back; capacity; pop_back; clear; empty; at; front; back; insert; erase; swap; resize
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vec = {'a','b','c','d','e'};
    cout << vec.size()<< endl; // size of vector
    cout << vec.capacity()<< endl; // capacity of vector
    vec.push_back('f'); // add element at the end of vector
    
    for(char val :vec){
        cout << val<< endl;

    }
    vec.pop_back(); // remove last element of vector
    cout << vec.size()<< endl; // size of vector
    cout<< vec.front()<< endl; // first element of vector
    cout<< vec.back()<< endl; // last element of vector
    cout<< vec.at(2)<< endl; // element at index 2


}


// STATIC : allocated at compile time ; FIXED SIZE ; EX : int arr[5]; STACK
// DYNAMIC : allocated at runtime ; RESIZABLE ; EX : vector<int> vec; HEAP

#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>  vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<vec.size()<<endl; //3
    cout<<vec.capacity()<<endl; //4 (capacity is doubled when size exceeds current capacity)
    vec.push_back(4);
    cout<<vec.size()<<endl; //4
    cout<<vec.capacity()<<endl; //4
    vec.push_back(5);
    cout<<vec.size()<<endl; //5
    cout<<vec.capacity()<<endl; //8 (capacity is doubled when size exceeds current capacity
    return 0;
}


// LEETCODE PATTERN TEMPLATE 
class solution{
    public:
    int singleNumber(vector<int>& nums){ // here we are using ampersand to pass the vector by reference for occur of changes in main function and to avoid unnecessary copying of the vector which can be expensive in terms of time and memory
       
     
};

//SINGLE NUMBER with linear run time and constant space complexity
class solution{
    public:
    int singleNumber(vector<int>& nums){
        int ans = 0;
        for(int i =0;i< nums.size();i++){                   /*  for(int val: nums){
                                                                ans = ans ^ val; // XOR operation
                                                                return ans;
                                                                   } */
            ans = ans ^ nums[i]; // XOR operation
        }
        return ans;
    }
};


// WAF LINEAR SEARCH WITH THE HELP OF VECTOR
#include<iostream>
#include<vector>
using namespace std;
int LinearSearch(vector<int>& vec,int target){
    for(int i = 0; i< vec.size();i++){
        if(vec[i] == target){
            return i;
        }
    }
    return -1;
}
// WAF REVERSE THE CODE WITH THE HELP OF VECTOR
#include<iostream>
#include<vector>    
using namespace std;
void reverseTheVector(vector<int>& vec){
    int start = 0;
    int end = vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}