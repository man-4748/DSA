#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int>arr  = {8,1,-7,4,9};
    int n = arr.size();
    // Bubble sort:
    // worst case : (n-1)passes --> each pass swap 2 adjacent elements if they are at the wrong position
    for(int i=0;i<n-1;i++){
        // for each pass:
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }   
    }
    for(auto ele: arr){
        cout<<ele<<" ";
    }
}
