#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   long long int n=s.length();
   long long int i,h=0,c=0;
    for(i=0;i<n-4;i++)
    {
      // if(!(s.substr(i,i+5)).compare("heavy"))
      // h++;
      // if(!(s.substr(i,i+5)).compare("metal"))
      // c+=h;
      if(s[i]=='h'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='v'&&s[i+4]=='y')
      h++;
      if(s[i]=='m'&&s[i+1]=='e'&&s[i+2]=='t'&&s[i+3]=='a'&&s[i+4]=='l')
      c+=h;
    }
    cout<<c<<"\n";
}