#include <bits/stdc++.h>
using namespace std;
/*
Given a random array, can it be made a palindrome by rearranging its elements?
*/
int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>mx)mx = arr[i];
    }

    // check if array is already palindrome:
    bool isPalindrome = true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"It is already a palindrome.";
        return 0;
    }

    // If not a palindrome: 
    // find frequency of all elements--> 
    // if frequency is even --> no problem **..........** (even ones will form pair)
    // if one element has odd frequency--> **.....^^^....**
    // but if more than one element has odd frequency--> it can't be made a palindrome
    int freq[mx+1]{0};
    for(auto x:arr){
        freq[x]++;
    }
    int countOdd = 0;
    for(auto ele:freq){
        if(ele%2==1)countOdd++;
    }
    if(countOdd>1)cout<<"Cannot be rearranged into a palindrome.";
    else cout<<"It can be rearranged into a palindrome.";
}
/*Limitations: 
Large integers (e.g., 10^9) require massive arrays, exceeding stack memory limits.
Negative Numbers: Negative values cause out-of-bounds indexing in freq[x], leading to memory corruption.
*/
