#include<iostream>
using namespace std;

int main(){
    int num,fact;
    cout<<"Enter num"<<endl;
    cin>>num;
if(num<0){
    cout<<"factorial of a negative number does not exist";
}
else{
    for(int i=1;i<=num;++i)
    {
fact=fact*i;
    }
}
cout<<"factorial of a number is  "<<fact<<endl;
    return 0;
}