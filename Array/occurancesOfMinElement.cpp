#include <bits/stdc++.h>
using namespace std;
/*
Given n nos as input, without storing them , find all occurances of min element in those n integers
You can use arrays to store frequency.
*/
int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>pos(n);
    int count = 0;
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;      
        if(x<mn){
            mn = x;
            pos.clear();
            pos.push_back(i);
            count = 1;
        }
        else if(mn==x){
            count++;
            pos.push_back(i);
        }
    }
    cout<<"Min element is "<<mn<<endl;
    // cout<<count<<endl;
    cout<<"Positions at which Min element occurs is: ";
    for(int i=0;i<count;i++){
        cout<<pos[i]<<" ";
    }
}
