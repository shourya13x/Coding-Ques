#include<iostream>
using namespace std;
void increment(int &n, int n1)
{             //pass by refrence and pass by value
    n++;
    n1++;
}

int main(){
    int a=3,b=5;
    cout<<a<<" "<<b<<endl;
    increment(a,b);
    cout<<a<<" "<<b<<endl;
    
   
   
}