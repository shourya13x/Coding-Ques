#include<iostream>
#include<numeric>
using namespace std;
 int gcd(int a , int b)
 {
    // a%b= remainder
    if(b==0)return a;
    return gcd(b,a%b);
 }
//GCD OR HCF is same thing 
// to find lcm we can divide LCM = a * b / gcd(a,b);
int main(){
    cout<<gcd(12,4)<<endl;
    cout<<gcd(18,12)<<endl;
    cout<<12*18/gcd(12,18)<<endl;
    cout<<__gcd(12,18)<<endl;
    /*
    there is a inbuilt function also to find the gcd and lcm 
    __gcd(12,18);

a

    */
    return 0;
}