#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int>& height ){
    int maxWater = 0;
    for(int i = 0; i < height.size(); i++){
        for(int j = i + 1; j < height.size(); j++){
            int width = j - i;
            int heightOfWater = min(height[i],height[j]);
            int currentWater = width*heightOfWater;
            maxWater = max(maxWater,currentWater);
        }
    }
    return maxWater;
}

int main(){
    vector<int> arrOfWaterHeight = {3,5,7,2,9,8,7};
    cout<< maxArea(arrOfWaterHeight)<<endl;
}

// MORE OPTIMAL APPROACH : TWO POINTER APPROACH 
