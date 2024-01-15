#include<iostream>
using namespace std;
/* write a Program which accepts coefficients of a
quadratic equation from the user and displays the roots
(both real and complex roots depending upon the
discriminant)*/
                 
int main()
{
    float a,b,c,d,x1,x2,real,img;
    cout<<"enter the cofficinets of the equation"<<endl;
    cin>>a>>b>>c;
    d=((b*b)-4*a*c); 
    if (d>0)
    {
        x1=(-b + sqrt(d))/(2*a);
        x2=(-b - sqrt(d))/(2*a);
        cout<<x1<<"x1"<<endl;
        cout<<x2<<"x2"<<endl;
        cout<<"real and diffrent."<<endl;
    }
    else if(d==0)
    {
        cout<<"real and equal "<<endl;
        x1=-b/(2*a);
        x2=-b/(2*a);
        cout<<x1<<" =x1"<<endl;
        cout<<x2<<" =x2"<<endl;
    }
    else 
    {
       real=-b/2*a;
       img=sqrt(-d)/(2*a);
        cout<<"roots are coplex and diffrent "<<endl;
        cout<<"x1="<<real<<"+"<<img<<"i"<<endl;
        cout<<"x2="<<real<<"-"<<img<<"i"<<endl;
    }
    return 0;
}