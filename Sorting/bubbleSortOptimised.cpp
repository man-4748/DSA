#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int>arr  = {8,1,-7,4,1,-5,7,2,9};
    int n = arr.size();
    // Bubble sort Optimised:
    // count no of swaps in each pass
    for(int i=0;i<n-1;i++){
        // for each pass:
        int swaps = 0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swaps++;
            }
        }
        if(swaps == 0) break;// if no swaps happened in this pass --> array is sorted now   
    }
    for(auto ele: arr){
        cout<<ele<<" ";
    }
}
