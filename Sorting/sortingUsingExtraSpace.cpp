#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[] = {4,2,8,7,1,2,3,9,1,2};

    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
    int b[n];

    for(int i=0;i<n;i++){
        // we have to fill each position in array b
        // we will find the min element in a and assign b[i] to that element
        int pos = 0;// pos of min element in array a
        for(int i=1;i<n;i++){
            if(a[i]<a[pos]){
                pos = i;
            }
        }
        b[i] = a[pos];
        a[pos] = INT_MAX;
        // replace that min element in array a with int_max so that it doesn't get included in min next time
    }
    for(int i=0;i<n;i++)cout<<b[i]<<" ";
}
