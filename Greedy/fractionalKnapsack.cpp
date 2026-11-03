#include <iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;
bool customCmp(pair<int, int>&p1, pair<int, int>&p2){
    //pair<int, int> : first->value, second->weight
    double r1 = (1.0 * p1.first)/p1.second;
    double r2 = (1.0 * p2.first)/p2.second;

    return r1>r2;
}
/*
    Time Complexity: O(nlogn)
    Space Complexity: (sorting algorithm)
*/
double fractionalKnapsack(vector<int>&profit, vector<int>&weight, int n, int w){
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        arr.push_back({profit[i],weight[i]});
    }
    sort(arr.begin(),arr.end(),customCmp);
    double result = 0;
    for(int i=0;i<n;i++){
        if(arr[i].second<w){
            result+=arr[i].first;
            w-=arr[i].second;
        }
        else{
            result += ((1.0*arr[i].first)/(arr[i].second))*w;
            w = 0;
            break;
        }
    }
    return result;
}
int main() 
{
    vector<int>profit = {60,100,120};
    vector<int>weight = {10,20,30};
    int n = 3, w = 50;
    cout<<fractionalKnapsack(profit,weight,n,w);
}
