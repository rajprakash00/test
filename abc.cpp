#include<bits/stdc++.h>
#define mod 1000000007;
using namespace std;

int main()
{
 int t,k,c=0,m=-1;
  long long n,res=0,z=0,fin=0;
  cin>>t;
   while(t--)
 {
  cin>>n>>k;
  if(n==1||n==2||n==3)
   cout<<m;
  else
  {
  c=k-1;
  z=n-2*(k-1);
  res=z*(z-1)*2*c;
  fin=res%mod;
  cout<<fin<<"\n";
  }
 
 }

}
