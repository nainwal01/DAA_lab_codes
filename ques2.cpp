#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int &i:v)cin>>i;
  int key;
  cin>>key;
  int st =0;
  int end = n-1;
  int mid =0;
  int cnt =0;
  while(st<=end)
  {
    mid = st+ (end-st)/2;
    if(v[mid] == key)
    {
      cout<<"Present at"<<" "<<mid+1<<endl;
      cout<<"Comparison"<<" "<<cnt<<endl;
      return ;
    }
    else if(v[mid]<key)
      st = mid + 1; 
    else
      end  =mid-1;
      cnt++;
  }
  cout<<"Not Present"<<" "<<n<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}

