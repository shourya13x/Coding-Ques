#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    string rev_str;
    for(int i=str.size()-1;i>=0;--i)
    {
        rev_str.push_back(str[i]);
    }
    if(str==rev_str)
    {
        cout<< "yes"<<endl;
    }
    else
      cout<<"no"<<endl;

    
        cout<<rev_str;
    return 0;
}