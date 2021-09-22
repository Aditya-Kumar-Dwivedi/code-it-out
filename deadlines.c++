#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    l n,i,c=0,k=0;
    cin>>n;
   vector<pair<l,l>>v;
   for(i=0;i<n;i++)
   {
     l x,y;
     cin>>x>>y;
     v.push_back({x,y});
   }
   sort(v.begin(),v.end());
   for(auto&i:v)
   {
     c+=i.first;
     k+=i.second-c;
   }
cout<<k<<"\n";

}