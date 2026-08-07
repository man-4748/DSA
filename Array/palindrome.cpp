#include <iostream>
using namespace std;
bool checkPalindrome(int arr[],int n){
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]) return false;
    }
    return true;
}
//If an array arr contains n elements, then check if the given array is a palindrome or not .
int main(){
    int arr[] = {2,1,2,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(checkPalindrome(arr,n)) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
}
