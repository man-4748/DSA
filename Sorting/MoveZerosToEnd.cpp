#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int>arr  = {8,2,0,0,4,-5,1,0,7,0,9};
    // output ---> {8,2,4,-5,2,7,0,0,0,0}
    int n = arr.size();
    //Move all Zeros to end : using bubble sort
    for(int i=0;i<n-1;i++){
        // in each pass move 0 to the end
        for(int j= 0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(auto ele: arr){
        cout<<ele<<" ";
    }
}
