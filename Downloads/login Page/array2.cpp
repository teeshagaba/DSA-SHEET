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
#include<climits>
using namespace std;
int main(){
    int arr[]= {45,99,12,-56,76,-87};
    int size = 7;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for( int i = 0;i <size ; i++){
         smallest = min(arr[i],smallest);
         largest = max(arr[i],largest);

    }
    cout<< "largest is "<< largest <<endl;
    cout<< "smallest is "<< smallest <<endl;
    return 0;
}

// smallest and largest ka index chahiye
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]= {45,99,12,56,76,87};
    int size = 6;
    int largestIndex = 0, smallestIndex = 0;
    for (int i = 1; i < size; i++) {
    if (arr[i] > arr[largestIndex]) largestIndex = i; // arr[largestIndex] = arr[0]
    if (arr[i] < arr[smallestIndex]) smallestIndex = i;
}
cout << "index of largest is " << largestIndex << endl;
cout << "index of smallest is " << smallestIndex << endl;

    return 0;
}

// Linear search in array
#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int target){
    for(int i = 0; i< size;i++){
        if(arr[i]== target){
            return i;

        }
    }
    return -1;
}
int main(){
    int arr[] = {98,45,77,21,34,45};
    int size = 6;
    int target = 99;
    cout<< LinearSearch(arr,size,target)<< endl;
    return 0; 


}


// Reverse an array : 2 pointer approach 
#include<iostream>
using namespace std;
void reverseTheArray(int arr, int size){
    int start = 0;
    int end = size-1; // here we are not accessing the value but pointing towards the address
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    int main(){
        int arr[]= {5,9,6,3,2};
        int size = 5;
        reverseTheArray(arr,size);
        for(int i = 0 ; i< size;i++){
            cout<< arr[i];
        }
        cout<< endl;
        return 0;

    }

}

// WAF to calculate the sum and product of all numbers in an array
#include<iostream>
using namespace std;
void sumAndProduct(int arr[], int size, int &sum, int &product){
    sum = 0;
    product = 1;
    for(int i = 0; i< size;i++){
        sum += arr[i];
        product *= arr[i];
    }
}
// WAF to swap the max and min number of an array
#include<iostream>
#include<climits>
using namespace std;
void swapMaxMin(int arr[], int size){
    int maxIndex = 0, minIndex = 0;
    for(int i = 1; i< size;i++){
        if(arr[i]> arr[maxIndex]) maxIndex = i;
        if(arr[i]< arr[minIndex]) minIndex = i;
    }
    swap(arr[maxIndex],arr[minIndex]);
}
// WAF to print all the unique values in an array
#include<iostream>
#include<unordered_set>
using namespace std;
void printUniqueValues(int arr[], int size){
    unordered_set<int> uniqueValues;
    for(int i = 0; i< size;i++){
        if(uniqueValues.find(arr[i]) == uniqueValues.end()){
            cout<< arr[i] << " ";
            uniqueValues.insert(arr[i]);
        }
    }
}
// WAF to print intersection of 2 array
#include<iostream>
#include<unordered_set>
using namespace std;
void printIntersection(int arr1[], int size1, int arr2[], int size2){
    unordered_set<int> elements;
    for(int i = 0; i< size1;i++){
        elements.insert(arr1[i]);
    }
    for(int i = 0; i< size2;i++){
        if(elements.find(arr2[i]) != elements.end()){
            cout<< arr2[i] << " ";
            elements.erase(arr2[i]);
        }
    }
}



