#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void DisplayRecursively(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    DisplayRecursively(st);
    st.push(x);  
}

void Display(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int x = st.top();
    st.pop();
    Display(st);
    cout<<x<<" ";
    st.push(x);
}
int main() 
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    DisplayRecursively(st);
    cout<<endl;
    Display(st);
}
 
