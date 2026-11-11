#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void pushAtBottom(stack<int>&st, int x){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
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

void reverse(stack<int>&st){
    stack<int>temp1;
    stack<int>temp2;
    while(st.size()>0){
        temp1.push(st.top());
        st.pop();
    }
    // st-> empty || temp -> reverse of st
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }
    // temp1->empty || temp2 -> reverse of temp1 ===> original st
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
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
    PrintStack(st);

    cout<<endl;
    pushAtBottom(st,889);
    PrintStack(st);

}
