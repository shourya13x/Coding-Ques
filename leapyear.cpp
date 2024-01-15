#include<iostream>
using namespace std;

int main()

{
 int year;
 cout<<"enter a year";
 cin>>year;
if(year%4==0)
{
   if(year%100==0)
{                                
    if(year%400==0)
   cout<<"is a leap year"<<" "<<year;
    else
    cout<<"not a leap year"<<year;

 }
  else{
  cout<<"is a leap year"<<year;
  }
}
else
{
 cout<<"not a leap year"<<endl;
}
 return 0;
}