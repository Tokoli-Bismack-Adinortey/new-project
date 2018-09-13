#include <iostream>
using namespace std;
intmain()
{
int x,y;
cout<<"Please enter your first number:\n";
cin>>x;
cout<<"Please enter your second number:\n";
cin>>y;
int xy=min(x,y);
int GCD=1;
for(int i=1; i<=xy; i++)
{
 if(x%i==0 && x%i==0)
 {
  GCD=max(GCD,i);
 }
}
cout<<"The Greatest Common Divisor is:\n"<<GCD;

  return 0;
}
