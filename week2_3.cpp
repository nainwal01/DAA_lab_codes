#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int &i:v)cin>>i;
  map<int,int>mp;
  int k ;
  cin>>k;
  sort(v.begin() , v.end());
  int cnt =0;
  for(int i =0; i<n ; i++)
  {
    int find = v[i] - k;
    cnt+= mp[find];
    mp[v[i]]++;
  }
  cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
