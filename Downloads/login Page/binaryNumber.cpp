// BINARY NUMBER SYSTEM 
/* math : Decimal number systems are based on 10 digits (0-9). Binary systems are based on 2 digits (0 and 1). */
#include<iostream>
using namespace std;
int decToBin(int decNum){
   int ans = 0; // always remember to start ans with 0 and initialize pow to 1 because pow is multiplied and ans is added...
   int pow = 1;
   while(decNum>0){
    int rem = decNum%2;
    decNum /=2;
    ans = ans+ (rem*pow);
    pow*=10;

   }
   return ans;

}

int main(){
   int decNum  = 50;
   cout<< decToBin(decNum)<< endl;
   return 0;
}

// BINARY NUMBER SYSTEM 
/* math : Decimal number systems are based on 10 digits (0-9). Binary systems are based on 2 digits (0 and 1). */
#include<iostream>
using namespace std;
int decToBin(int decNum){
   int ans = 0; // always remember to start ans with 0 and initialize pow to 1 because pow is multiplied and ans is added...
   int pow = 1;
   while(decNum>0){
    int rem = decNum%2;
    decNum /=2;
    ans = ans+ (rem*pow);
    pow*=10;

   }
   return ans;

}

int main(){
   int decNum  = 50;

   for(int i = 1; i <=10;i++){
   cout<< decToBin(i)<< endl;
   
   }
   return 0;
}

// BINARY TO DECIMAL
#include<iostream>
using namespace std;
int binToDec(int binNum){
   int ans = 0;
   int pow = 1;
   while(binNum>0){
   int rem = binNum%2;
   ans = ans+rem*pow;
   binNum/=10;
   pow*=2;
   }
   return ans;


}

int main(){
   int binNum = 1011;
   cout<< binToDec(binNum)<< endl;
   return 0;
}

// TWO'S COMPLEMENT : Decimal to binary
/* int n = -10
step 1 : 1010
step 2: 01010
step 3 : 1's complement = 10101
step 4 : add 1 = 01010 +1 = 10110 */

//  TWO'S COMPLEMENT OF : Binary to decimal 
/* n = 10110
step 1 : 1's complement = 01001 
step 2 : add 1 = 01001 + 1 = 01010 = -10(because we already know that it is negative number) (decimal) */

// QUESTION PRACTICE 1
/* convert -8 to binary and reverse :
step 1 : change it into binary form that is 1000
step 2 : append 0 in front of it to make it 5 bits that is 01000
step 3 : take 1's complement : 10111
step 4 : add 1 = 10111 + 1 = 11000 */

// QUESTION PRACTICE 2 
/* convert -12 to binary :
step 1 : change it into binary form that is 1100
step 2 : append 0 in front of it to make it 5 bits that is 01100
step 3 : take 1's complement : 10011
step 4 : add 1 = 10011 + 1 = 10100 */

