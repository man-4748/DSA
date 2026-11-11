#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
   
    // printing elements of stack:
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // elements printed in reverse order of insertion
    // ---> stack is empty now 
    // cout<<st.top()<<endl; Segmentation fault (core dumped)

    // we can store elements:

    // How to get elements back in stack after popping:
    stack<int>temp;
    cout<<"Printing elements of stack in reverse order of insertion : "<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    // now fill st with ele of temp
    cout<<endl<<"Print elements of stack in original order: "<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    
    //cout<<endl<<st.top()<<endl;




}
