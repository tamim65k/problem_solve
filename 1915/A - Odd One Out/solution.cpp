#include<bits/stdc++.h>
using namespace std;
int main ()
{
 long long    int n,a,b,c;
 cin>>n;
 while(n--)
 {
     cin>>a>>b>>c;
     if(a==c)
     {
         cout<<b<<endl;
     }
     else if(b==c)
     {
         cout<<a<<endl;
     }
     else
     {
         cout<<c<<endl;
     }
 }
    
}