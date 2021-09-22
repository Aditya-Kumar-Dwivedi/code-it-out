#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,i,c=0,k=0;
    cin>>n>>x;
    ll a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    // for(i=0;i<n-1;i++)
    // a[i]+=a[i+1];
    ll l=0,r=0;
    
    while(l<=r)
    {  
      if(r>n)
      break;
      if(k<x)
      {
      k+=a[r];
      r++;
      }
      if(k==x)
      {
      c++;
      k+=a[r];
      r++;
      }
      if(k>x)
      {
        k-=a[l];
        l++;
        if(k==x)
        {
        c++;
        k+=a[r];
        r++;
        }
      }
    }
    cout<<c<<"\n";
}

    
    
    
    
    


