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
    // Another way of decleration of 2d-std::array ;
    vector<vector<int> > arr(3, vector<int>(5,0));
    /*creates a 2D matrix which has 3 rows and
    each row has 5 columns with each element equal to 0
    */
    printMatrix(arr);
    cout<<arr.size()<<endl;
    cout<<arr[0].size()<<endl;

    vector<vector<int> >v(5,vector<int>(6,-10));
    printMatrix(v);
    return 0;
}
