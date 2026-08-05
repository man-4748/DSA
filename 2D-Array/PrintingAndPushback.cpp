#include <bits/stdc++.h>
using namespace std;
void printMatrix(vector<vector<int> > &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    vector<vector<int> > arr;
    
    vector<int>a1 = {1,2,3};
    vector<int>a2 = {-5,1,4};
    vector<int>a3 = {11,9,33};
    // no of rows = arr.size()
    // no of colums  = arr[0].size();
    cout<<" no of rows = "<<arr.size()<<endl;
    
    // arr.push_back ---> pushes into the outer vector 
    arr.push_back(a1);
    arr.push_back(a2);
    arr.push_back(a3);

    printMatrix(arr);
    cout<<endl;
    cout<<" no of rows = "<<arr.size()<<endl;
    cout<<" no of columns = "<<arr[0].size()<<endl;
    return 0;
}
