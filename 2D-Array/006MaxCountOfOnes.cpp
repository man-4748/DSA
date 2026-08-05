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
// Given a matrix of zeros and ones : find the row with maximum number of ones.
void maxOnes(vector<vector<int> > &arr){
    int max_ones = 0;
    int idx = 0;
    for(int i=0;i<arr.size();i++){
        int count_ones = 0; // count of ones in each row
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]==1)count_ones++;
        }
        if( count_ones>max_ones ){
            max_ones = count_ones;
            idx = i;
        }
    }
    cout<<"Row having the maximum no of ones = is : "<<idx<<" And the no of 1's is equal to : "<<max_ones;
}
int main() {
    int row,col;
    cin>>row>>col;
    vector<vector<int> > arr(row, vector<int>(col));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cin>>arr[i][j];
        }
    }
    /*
    Input:  5 4
        1 0 1 0 
        1 1 0 0 
        0 1 1 1 
        0 0 0 1 
        1 0 0 0
    Output: Row having the maximum no of ones = is : 2 And the no of 1's is equal to : 3
    */
    printMatrix(arr);
    maxOnes(arr);
}  
