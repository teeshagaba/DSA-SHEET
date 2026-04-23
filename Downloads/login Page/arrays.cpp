// CREATION :  1 same type ; contiguous memory ; linear 
// DECLARATION : data_type array_name [size] ;
// INITIALIZATION : 1. int arr[5] = {1,2,3,4,5} ; 2. int arr[5] = {1,2} ; 3. int arr[] = {1,2,3,4,5} ; 4. int arr[5] = {0} ; 5. int arr[5] = {0,1} ; 6. int arr[5] = {} ;
// ACCESSING : arr[index] ; index starts from 0 and ends at size-1
#include<iostream>
using namespace std;
int main(){
    int marks[5] = { 88,90,76,56,45};
    marks[4] = 23;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl; // garbage value
    // loop 
    for(int i =0;i<5;i++){
        cout<<marks[i]<< endl;
    }
    cout<< sizeof(marks) << endl; // size of array in bytes
    cout<< sizeof(marks[0]) << endl; // size of one element in bytes
    cout<< sizeof(marks)/sizeof(marks[0]) << endl; // number of elements in array
    cout<< (sizeof(marks)/sizeof(int)) << endl; // number of elements in array

   return 0;
}


#include<iostream>
using namespace std;
int main(){
    int marks[5];
    for(int i =0;i<5;i++){
        cin>>marks[i];
    }

    for(int i =0;i<=4;i++){
        cout<<marks[i];
    }
    return 0;
}

// loops on Arrays
//find smallest and largest element in an array
// infinity = INT_MAX
// -infinity = INT_MIN
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]= {4,98,7,66,-4,24,0};
    int size = 7;
    int smallest =INT_MAX;
    for(int i =0;i <= size-1;i++){
        if(arr[i]<smallest){
            smallest =arr[i];

        }
    }
    cout<< smallest <<endl;
    return 0;
}

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]= {4,98,7,66,-4,24,0};
    int size = 7;
    int smallest =INT_MAX;
    for(int i =0;i <= size-1;i++){
        if(arr[i]<smallest){
            smallest =arr[i];

        }
    }
    cout<< smallest <<endl;
    return 0;
}