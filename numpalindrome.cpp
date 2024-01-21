#include<iostream>
using namespace std;

int main(){
  int num;
  cout<<"enter number ";
  cin>>num;

  int rev=0;
  int org=num;
  while(num!=0)
  {
    rev=rev*10+num%10;
    num=num/10;
  }
     
if(org == rev)
{
    cout<<"is palindrome";
}
else{
cout<<"not palindrome";
}
    return 0;
}