#include<iostream>
#include<vector>
using namespace std;
// WAF to calculate x^n (x raised to the power n) using recursion
double myPow(double x ,int n ){
    long binForm = n;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;
    while(binForm>0){
       if(binForm%2==1){
        ans*= x;

    }
    x*=x;
    binForm/= 2;
    }
    
    return ans;
}

int main(){
    int pow = 3;
    double base = 7;
    cout << myPow(base , pow)<< endl;
}


