#include <bits/stdc++.h>
using namespace std;

void mxMin(int rows, int columns, vector<vector<int>>& arr) {
    int mx = INT_MIN;
    int mn = INT_MAX;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            mx = max(mx, arr[i][j]);
            mn = min(mn, arr[i][j]);
        }
    }

    cout << "Max value is " << mx << endl;
    cout << "Min value is " << mn << endl;
}
void transpose(int rows, int columns, vector<vector<int>>& arr){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    swap(rows,columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}
int main() {
    int rows, columns;
    cin >> rows >> columns;

    vector<vector<int>> a(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }

    mxMin(rows, columns, a);
    // transpose of a matrix
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int r = columns;
    int c = rows;
    // for transpose matrix row  = column of original matrix
    vector<vector<int>> transpose(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
            transpose[i][j] = a[j][i];
        }
    } 
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    } 

    return 0;
}
