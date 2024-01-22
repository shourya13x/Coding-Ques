#include <iostream>

using namespace std;

int main() {

    int N = 0;
    cin>>N;
    
    long data[N];
    for(auto i=0; i<N; i++)
        cin>>data[i];
    
    
    // write your code here
    // ans = 
    for(int i=0;i<N;i++ )
    {
        
       int last_digit=N%10;
          
        N=N/10;
    }
     
    
    return 0;
}