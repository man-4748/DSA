#include <bits/stdc++.h>
using namespace std;
int minEleIdx(vector<int>&arr, int i){
    int minIdx =  -1, minEle = INT_MAX; 
    for(int j=i;j<arr.size();j++){
        if(arr[j]<minEle){
            minIdx = j;
            minEle = arr[j];
        }
    }
    return minIdx;
}
int main(){
    vector<int>arr = {7,4,9,1,3,6,2,5};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Selection Sort:
    int i = 0;
    for(int i = 0; i < arr.size() - 1; i++) {
        int minIdx = minEleIdx(arr, i);
        swap(arr[i], arr[minIdx]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
