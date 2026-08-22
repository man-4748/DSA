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
    int pos[n];
    int mn = INT_MAX;
    int idx = -1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;      
        if(x<mn){
            // Update the min
            mn = x;
            // clear the container
            idx = 0;
            // Keep Current position at idx = 0;
            pos[idx] = i;
        }
        else if(mn==x){
            // Need to add this position to container
            idx++;
            pos[idx]=i;
        }
    }
    cout<<"Min element is "<<mn<<endl;
    cout<<"Positions at which Min element occurs is: ";
    for(int i=0;i<=idx;i++){
        cout<<pos[i]<<" ";
    }
}
/*
DISADVANTAGES OF ARRAY:
                        1. size is to be declared at the start. Size should be known
                        2. size is fixed.
                        3. No flexibility to clear all elements.
                        4. No flexibility to expand or shrink.


                // Vectors-------> STL: Moving from arrays to vectors
*/
