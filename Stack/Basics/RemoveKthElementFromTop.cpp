#include <iostream>
#include <stack>
using namespace std;
void removeFromTop(stack<int>&st, int k){
    if(k>st.size()){
        cout<<"K is not in valid range";
        return;
    }
    // Remove kth element from the top:
    stack<int>temp;
    int count = 1;
    while(st.size()>0){
        if(count==k){
            st.pop();
        }
        temp.push(st.top());
        st.pop();
        count++;
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void PrintStack(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main() 
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    removeFromTop(st,2);
    PrintStack(st);
    cout<<endl<<st.top();
}
