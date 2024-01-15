#include<iostream>
using namespace std;

int main(){
    int a=-1,b=1,c,n;
    cout<<"enter number";
    cin>>n;

for(int i=1;i<=n;i++)
{
    c=a+b;
    cout<<c<<endl;
    a=b;
    b=c;
}
    return 0;
}