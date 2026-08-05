#include <bits/stdc++.h>
using namespace std;
void printMatrix(vector<vector<int> > &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    vector<vector<int> > arr;
    
    vector<int>a1 = {1,2,3};
    vector<int>a2 = {5,1,4,51,47};
    vector<int>a3 = {11,-9};
    
    arr.push_back(a1);
    arr.push_back(a2);
    arr.push_back(a3);

    // each row has differnt columns here 
    // so we print all columns by j< arr[i].size()
    
    printMatrix(arr);
    
    cout<<endl;

    cout<<" no of rows = "<<arr.size()<<endl;
    cout<<" no of columns in 1st row = "<<arr[0].size()<<endl;
    cout<<" no of columns in 2nd row = "<<arr[1].size()<<endl;
    cout<<" no of columns in 3rd row= "<<arr[2].size()<<endl;
    return 0;
}
