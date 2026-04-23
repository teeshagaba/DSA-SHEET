// 
#include<iostream>
using namespace std;
string isPrime(int n){
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0){
            return "Not Prime";
        }
    }
    return "Prime";
}

int main(){
    int n = 47;
    cout<< isPrime(n) << endl;
    return 0;
}

// SIEVE OF ERATOSTHENES : Given an integer n, return all prime numbers less than n. For example, if n = 10, the prime numbers less than 10 are [2,3,5,7]. If n = 20, the prime numbers less than 20 are [2,3,5,7,11,13,17,19].

//    2  3  4  5  6  7  8  9  10
// 11 12 13 14 15 16 17 18 19 20
// 21 22 23 24 25 26 27 28 29 30
// 31 32 33 34 35 36 37 38 39 40
// 41 42 43 44 45 46 47 48 49 50

//  1. we assume all to be prime number 
//  2. we will discard all the possible multiples of every single number in the range..

class solution{
    public:
    int countPrimes(int n){
        vector<bool> isPrime(n + 1 , true);
            int count = 0;
            for(int i = 2; i<n;i++){
                if(isPrime()){
                    count++;

                     for(int j= i*2 ; j< n;j = j+i){
                    isPrime[j] = false;
                    }
                }
               
            }
            return count;
        
    }
};

//  DIGITS IN A NUMBER :
void printdigits(int n){
    while(n!= 0){
        int digit = n%10;
    cout<< digit;
    n = n/10;

    }
   
}


void printdigits(int n){
    int count = 0;
    while(n!= 0){
        int digit = n%10;
        count++;
        n = n/10;
    }
    cout<< count << endl;

}


