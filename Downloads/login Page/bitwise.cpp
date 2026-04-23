// BITWISE OPERATORS ARE USED TO PERFORM BITWISE OPERATIONS ON BINARY NUMBERS ...
// Bitwise AND :(&) = # 0 & 0 = 0, 1 & 1 = 1, 0 & 1 = 0, 1 & 0 = 0
// Bitwise OR : (|) = # 0 | 0 = 0, 1 | 1 = 1, 0 | 1 = 1, 1 | 0 = 1
// Bitwise XOR(Exclusive OR) : (^) = # 0 ^ 0 = 0, 1 ^ 1 = 0, 0 ^ 1 = 1, 1 ^ 0 = 1
#include<iostream>
using namespace std ;
int main(){
    int a = 3,b = 8;
    cout << (a&b) << endl; // 3 & 8 = 0
    cout << (a|b) << endl; // 3 | 8 = 11
    cout << (a^b) << endl; // 3 ^ 8 = 11
    return 0;
}

//Bitwise left shift operator : << : ans = a*2^b
//Bitwise right shift operator : >> : ans = a/2^b
#include<iostream>
using namespace std ;
int main(){
    cout<< (8<<1) << endl; // 8*2^1 = 16
    cout<< (8<<2) << endl; // 8*2^2 = 32
    cout<< (8>>1) << endl; // 8/2^1 = 4
    cout<< (8>>2) << endl; // 8/2^2 = 2
    return 0;
}

#include<iostream>
using namespace std ;
int main(){
    cout<< (6&10) << endl;
    cout<< (6|10)<< endl;
    cout<< (6^10)<< endl;
    cout<< (10<<2)<< endl;
    cout<< (10>>1)<< endl;
    return 0;
}

// OPERATOR PRECEDENCE 
/* OPERATOR                    PRECEDENCE 
  ! ,+ , -(UNARY OPERATOR)        FIRST( R TO L )
  *, / , %                        SECOND( L TO R )
  +,-                             THIRD( L TO R )
  <,<=,>=,>                       FOURTH( L TO R )
  ==,!=                           FIFTH( L TO R )
  &&                              SIXTH( L TO R )
  ||                              SEVENTH( L TO R )
  =,+=,-=,*=,/=,%=                EIGHTH( R TO L )*/

  // SCOPE : generally we check for variables and it is a area where we can usage and access them ...
  // global and local variable 
  /* local : if else ; functions ; block of code */
    // global : outside of all the functions and block of code ...


    // DATA TYPE MODIFIERS : change meaning of data types and also change the range of values that can be stored in it ...
    /* 1. signed : it can store both positive and negative numbers
       2. unsigned : it can only store positive numbers = Change negative numbers into 1's complement form and then add 1 to it to get the unsigned value of negative numbers
       3. long : it can store large numbers
       4. short : it can store small numbers */


// question 1 = WAF to reverse an Integer n.
#include<iostream>
using namespace std;
int main(){
    int n = 1234;
    int ans = 0;
    while(n>0){
        int rem = n%10;
        ans = ans*10 + rem;
        n/=10;
    }
    cout<< ans << endl;
    return 0;
}

// question 2 = figure out how to find if a number is power of 2 without any loop 
#include<iostream>
using namespace std;
int main(){
    int n = 16;
    if(n && !(n & (n-1))){
        cout<< "Yes it is a power of 2" << endl;
    }
    else{
        cout<< "No it is not a power of 2" << endl;
    }
    return 0;
}