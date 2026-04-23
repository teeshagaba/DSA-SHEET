// FUNCTION
// function mein void ko tab use karenge jab hamare return type nhi hota bss print out hota h...
#include<iostream>
using namespace std;
int printHello(){
    cout<<"Hello guyzz"<< endl;
    return 3;
}

int main(){
    int val = printHello();
    cout<< val << endl;
    return 0;
}

//PARAMETERS 
/** returnType funcname(type1 , type2....){
 *  //do some work
 * here type 1 and type 2,etc are parameters
} */

//SUM OF 2 NUMBERS 
#include<iostream>
using namespace std;
int sum(int a ,int b){
    int s = a+ b;
    return s;
    
}
int main(){
    cout<< sum(5,9) << endl;
    return 0; 
}

// MIN OF 2 NUMBER
#include<iostream>
using namespace std;
int minOfTwo(int a, int b){ // parameters are passes that are nothing but copy of arguments
    if (a<b){
        return a;
    }
    else {
        return b;
    }

}

int main(){
    cout<<" min = "<< minOfTwo(8,4) << endl; // arguments(actual value)
    return 0;
}

// SUM FROM 1 TO N: 
#include<iostream>
using namespace std;
int sumN(int n){
    int sum = 0;
    for(int i= 1;i<=n ;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    cout<< sumN(5)<<endl;
    return 0;
}

//  CALCULATE N FACTORIAL
#include<iostream>
using namespace std;
int fact(int n){
    int f = 1;
    for(int i= 1;i <=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    cout<< "factorial = "<< fact(4)<< endl;
    cout<< "factorial = "<< fact(5)<< endl;
    cout<< "factorial = "<< fact(8)<< endl;
    cout<< "factorial = "<< fact(99)<< endl; // here 0 because of integer overflow 
    return 0;
}

//stack : static allocation
//heap : dyanamic allocation 

// jab hum current function mein hote h tab vo func top of the stack mein hota h ; aur jab vo function call ho jata h tab vo stack se remove ho jata h 

// FUNCTION IN MEMORY
#include<iostream>
using namespace std;
void fun(){
    int x= 25;
    cout<< x<< endl;
}
int main(){
    fun();
    cout<< x<< endl;
    return 0;
}

// return statement last statement honi chahiye wrna agr uske baad kabhi cout kiya toh vo kabhi execute hi nhi hoga 

// PASS  BY VALUE === copy of argument is passed to function (main function mein arguments ki value change nhi hogi in contrast with pass by reference)

#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){    // here pass by value through another variable 
    int x= 5;
    int y = 8;
    cout<<sum(x,y)<<endl;
}
                   // OR 
                   
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){    // here these a and b are different from the one in sum function
    int a= 5;
    int b = 8;
    cout<<sum(x,y)<<endl;
}

#include<iostream>
using namespace std;
int sum(int a,int b){
    a = a+ 10; //a = 15
    b = b+10; //b=18
    return a+b; // sum = 33
}
int main(){    // 
    int x= 5;
    int y = 8;
    cout<<sum(x,y)<<endl;
    cout << x << "," << y << endl;
}

// CALCULATE SUM OF DIGITS OF A NUMBER 
#include<iostream>
using namespace std;
int sumOfDigits(int n){
int digSum = 0;
while(n>0){
int lastDig = n%10;
n/=10;
digSum += lastDig; 
}
return digSum;
}
int main(){
  cout<< sumOfDigits(2356)<<endl;
  return 0;
}

//CALCULATE nCr BINOMIAL COEFFICIENT FOR n AND r :

#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1;i<= n;i++){
        fact*=i;

    }
    return fact;
}
int nCr(int n ,int r){
    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    int factorial_nmr = factorial(n-r);
   return factorial_n/(factorial_r *factorial_nmr);
}
int main(){
     int n = 6, r= 2;
     cout<< nCr(n,r);
     return 0;
}


// WAF to check if a number is prime or not 
// WAF to print all the prime numbers from 2 to N 
// WAF to print nth fibonacci.

#include <iostream>
using namespace std;

// WAF: check prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n)) cout << "Prime";
    else cout << "Not Prime";

    return 0;
}


#include<iostream>
using namespace std;
int main(){
    int n ;
    if()
}

#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0) return 0;
    if(n == 1) return 1;

    int a = 0 , b= 1, c;
    for(int i = 2;i<=n;i++){
        c= a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
     int n = 5;
     

     cout<< fibonacci(n);
     return 0;
}