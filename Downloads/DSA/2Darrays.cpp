#include<iostream>
using namespace std;

bool linearSearch(int matrix[][3] , int row , int col, int key){
    for(int i =0 ; i <row ; i++){
        for(int j = 0;j<col;j++){
            if(matrix[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[4][3];
    //  {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;
    cout<< linearSearch(matrix,row,col,5)<<endl;
    cout<<matrix[2][1] << endl;
     for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>matrix[i][j];
}
     }
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<matrix[i][j]<<" ";
}
cout<<endl;
}
return 0 ;
}




