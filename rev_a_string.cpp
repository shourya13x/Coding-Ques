#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    string rev_str;
for(int i=str.size()-1;i>=0;--i)
{

/*    rev_str+=str[i]; this should not be genereally use as we are adding character in the string and also becoz of time complexity,instead we can use .push_back() function        */
    
    rev_str.push_back(str[i]);


}
    cout<<rev_str;
    





    return 0;
}