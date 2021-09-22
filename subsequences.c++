#include <bits/stdc++.h>
using namespace std;
int main()
{   int n, i, x;
    cin >> n;
    vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
    vector<int> v1;
    string s = "";
    if(v.size()==1)
       {
           cout<<1<<"\n";
           cout<<"L"<<"\n";
           exit(0);
       }
            
     if(v[0]>v[n-1])
     {
     v1.push_back(v[n-1]);
     v.erase(v.begin()+v.size()-1);
     s+="R";
     }
     if(v[0]<v[n-1])
     {
     v1.push_back(v[0]);
     v.erase(v.begin());
     s+="L";
     }
    for (i = 0; i <n; i++)
    {
       if(v.size()==1)
       {
           if(v[0]>v1[v1.size()-1])
           {
            v1.push_back(v[0]);
            s+="L";
           }
            break;
       }
       if(v[0]>v1[v1.size()-1]&&v[v.size()-1]<v1[v1.size()-1])
       {
        v1.push_back(v[0]);
        v.erase(v.begin());
        s+="L";
       }
       if(v[0]<v1[v1.size()-1]&&v[v.size()-1]>v1[v1.size()-1])
       {
        v1.push_back(v[v.size()-1]);
        v.erase(v.begin()+v.size()-1);
        s+="R";
       }
       if(v[0]>v1[v1.size()-1]&&v[v.size()-1]>v1[v1.size()-1])
       {
        if(v[0]>v[v.size()-1])
     {
     v1.push_back(v[v.size()-1]);
     v.erase(v.begin()+v.size()-1);
     s+="R";
     }
     if(v[0]<v[v.size()-1])
     {
     v1.push_back(v[0]);
     v.erase(v.begin());
     s+="L";
     }
     }
    if(v[0]<v1[v1.size()-1]&&v[v.size()-1]<v1[v1.size()-1])
    break;
    }
    cout << v1.size() << "\n";
    cout << s << "\n";
}