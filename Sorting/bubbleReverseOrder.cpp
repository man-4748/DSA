#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int>arr  = {8,1,-7,4,-1,11,-5,7,2,9};
    int n = arr.size();
    //Bubble Sort in Reverse Order: moves smallest element to the right place
    for(int i=0;i<n-1;i++){
        int swaps = 0;
        for(int j=n-1;j>=1+i;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                swaps++;
            }
        }
        if(swaps ==0 )break;
    }
    for(auto ele: arr){
        cout<<ele<<" ";
    }
}
