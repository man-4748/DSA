#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr =  {4,1,7,3,9,2,0,8};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Insertion Sort:
    int i = 0;
    for(int i = 0; i < arr.size(); i++) {
        int j = i;
        while(arr[j]<arr[j-1] && j>=1){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
// Best Case -> O(N)
// Worst Case ->O(N*N)
