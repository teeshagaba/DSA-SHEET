#include<iostream>
using namespace std;
int main(){
    int n = 4 ;
    for(int i =0; i<= n;i++){
        char ch = 'A'; // to reset the variable we write it in inner loop (wrna vo continuos manner mein increase krta rahega or next line se A nhi dega)
        for(int j = 0;j<=n;j++){
            cout<< ch <<" " ;
            ch = ch +1;
        }
       cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1; // to do not reset num to 1 again and follow continuous pattern
    for(int i = 0; i<=n;i++){
        for(int j = 0;j<= n; j++){
            cout<<num <<" ";
            num++;
        }
        cout<<endl;
    }
    cout<< num;
    return 0 ;
}

#include<iostream>
using namespace std;
int main(){
    int n = 3;
    char ch= 'A';
    for(int i = 1;i <= n; i++){
        for(int j = 1; j<=n; j++){
            cout<< ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n = 6;
    for(int i =0; i< n; i++){
        for(int j =0;j<= i;j++){
            cout<<"*" << " ";
        }
        cout<< endl;
    }
    return 0;
}

/*#include<iostream>
using namespace std;
int main(){
    int n = 6;
    for(int i =0; i< n; i++){
        for(int j =0;j< i+1 ;j++){
            cout<<"*" << " ";
        }
        cout<< endl;
    }
    return 0;
} */

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i =0;i< 4; i++){
        for(int j= 0; j< i+1 ;j++){
            cout << i+1 ;
        }
        cout<< endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    
    for(int i =1;i< 4; i++){
        char ch = 'A'+ i-1; // important logic
        for(int j= 1; j< i+1 ;j++){
            cout << ch ;
              
        }
        cout<< endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    
    for(int i =0;i<= 4; i++){
        for(int j= 1; j<=i+1 ;j++){
            cout << j<< " " ;  // j har baar 1 se last updated value tak run karega 
              
        }
        cout<< endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    
    for(int i = 1 ;i<= n; i++){
        for(int j= i; j >=1 ;j--){
            cout << j ;
              
        }
        cout<< endl;
    }
    return 0;
}

// FLOYD TRIANGLE
#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int num=1;
    
    for(int i = 1 ;i<= n; i++){
        for(int j= 1;j<=i;j++){
            cout << num <<" " ;
              num++;
        }
        cout<< endl;
    }
    return 0;
}

// FLOYD TRIANGLE
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int num=1;
    
    for(int i = 1 ;i<= n; i++){
        for(int j= i;j >=1;j--){
            cout << j <<" " ;
              num++;
        }
        cout<< endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int num=1;
    
    for(int i = 1 ;i<= n; i++){
        for(int j= i;j >=1;j--){
            cout << j <<" " ;
              num++;
        }
        cout<< endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    
    
    for(int i = 0 ;i<= n; i++){
         char ch = 'A' +i ;
        for(char j= ch; j>='A';j--){
            cout << j<<" " ;
              ch++;
        }
        cout<< endl;
    }
    return 0;
}

// INVERTED TRIANGLE 
 
#include<iostream>
using namespace std;
int main(){
    int n = 4;

    for(int i = 0; i<4;i++){
        char ch ='A';
        // spaces
        
        for(int j= 0 ;j<i; j++){
            cout<< " ";
        }
        for(char j=0;j<n-i;j++ ){
            cout<< char(ch + i);
        }
        cout<<endl;
    }
    return 0;
    
    }

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i = 0; i <n;i++){
        //spaces
        for(int j=0;j< n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<< j;
        }
        for(int j= i; j>=1;j--){
            cout<< j;
        }
        cout<< endl;
        
    }
    return 0;
}

//BUTTERFLY PATTERN
#include<iostream>
using namespace std;
int main(){
    int n =4;
    //upper half
    for(int i = 1; i<= n; i++){
        for(int j= 1;j<=i ; j++){
            //stars 
            cout<<"*" ;
        }
        for(int j= 1;j<=2*(n-i) ;j++){
            cout<<" ";

        }
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
    for(int i=n;i>=1;i--){
        for(int j= 1;j<=i ; j++){
            //stars 
            cout<<"*" ;
        }
        for(int j= 1;j<=2*(n-i) ;j++){
            cout<<" ";

        }
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
 return 0;   
} 








