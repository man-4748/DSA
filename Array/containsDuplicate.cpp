#include <iostream>
using namespace std;
bool checkDuplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {2,5,1,12,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    //Given an array, predict if the array contains duplicates or not.
    if(checkDuplicate(arr,n)) cout<<"Array contains duplicates"<<endl;
    else cout<<"Array doesn't contain duplicates"<<endl;
}
