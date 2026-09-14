// Brute force
// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(auto &x:arr){
//         cin>>x;
//     }
//     int k;
//     cin>>k;
//     for(int i=0;i<=n-k;i++){         // O(k*n)
//         int mn = INT_MAX;
//         for(int j=i;j<i+k;j++){
//             mn = min(mn,arr[j]);
//         }

//         cout<<mn<<" ";
//     }
// } 

// TIME COMPLEXITY : O(N*K)


// Optimised approach
#include <bits/stdc++.h>
using namespace std;
vector<int> minUsingMultiset(vector <int>&arr, int k){
    int n = arr.size();
    vector<int>res;
    multiset<int>window;
    for(int i=0;i<n;i++){
        window.insert(arr[i]);
        if(i-k>=0){
            int expired = arr[i-k];
            window.erase(window.find(expired));
            // if you directly use window.erase it will erase all occurances of expired element
        }
        // Once the first window of size k is formed
        if (i >= k - 1) res.push_back(*window.begin()); // Minimum element in the current window
    }
    return res;
}
int main() 
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &x:arr){
        cin>>x;
    }
    int k;
    cin>>k;

    vector<int>res = minUsingMultiset(arr,k);
    for(auto x:res){
        cout<<x<<" ";
    }
    
}
