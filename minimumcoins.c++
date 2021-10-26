#include<bits/stdc++.h>
using namespace std;
int main()
{
    
      int n,i,m,j;
      cin>>m>>n;
      int c[m];
      for(i=0;i<m;i++)
      cin>>c[i];
      int dp[n+1];
      sort(c,c+m);
      for(i=0;i<=n;i++)
      dp[i]=n+1;
      dp[0]=0;
      for(i=1;i<=n;i++)
      {  
        for(j=0;j<m;j++)
      {  
          if(i<c[j])
          break;
         dp[i]=min(dp[i],1+dp[i-c[j]]);
      }
      }
      if(dp[n]==n+1)
      {
        cout<<-1<<"\n";
       
      }
      else
      cout<<dp[n]<<"\n";

    
}
