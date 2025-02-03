#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void solve()
{
   int n;
  cin>>n;
  vector<int>v(n);
  for(int&i:v)cin>>i;
  int p;
  cin>>p;
  for(int i=0 ;i <n; i++)
  {
    if(v[i] ==p)
    {
      cout<<"Present at index"<<" "<<i+1<<endl;
      return;
    }
  }
  cout<<"Not Present"<<" "<<n<<endl;
  return;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
 
}
