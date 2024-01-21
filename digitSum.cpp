#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int digit_sum=0;
    
    while(n>0)
    {
        int last_digit=n %10;
          digit_sum+=last_digit;
           n=n/10;
    }
    cout<<digit_sum<<endl;
    
}