#include <bits/stdc++.h>
using namespace std;
void fun(int *x, int *y){

    cout<<x<<"  "<<y<<endl;// print address of x and b
    //x+=10;//You are adding 10 to the current address of variable x defined in main
    *x+=10; // value at &x += 10
    // here x and y are pointers pointing to address of x and y in main
    cout<<*x<<endl;
}

void gun(int *xptr, int *yptr){
    /**
    xptr is a variable local to the function gun , but any updation using xptr in x(defined in main )
    will result in the value updation of variable defined in main.
    */
    *xptr +=100;
    return;
}
int main(){
    int x{10}, y{20};
    cout<<&x<<endl;      // 0x7fff...-----> address of x
    fun(&x,&y);   // Call by address
    cout<<x<<endl; 
    gun(&x,&y);   // Call by address      x -->20
    cout<<x<<endl;                     // x -->120
}
