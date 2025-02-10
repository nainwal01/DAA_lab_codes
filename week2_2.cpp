#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  vector<int>v(n);
  bool flag =true;
  for(int &i:v)cin>>i;
  for(int i = 2; i<n ; i++)
  {
    int left = 0 , right = i-1;
    int target = v[i];
    while(left <right)
    {
      int sum = v[left]+ v[right];
      if(sum == target)
      {
        cout<<"Present in Array"<<endl;
        cout<<left+1 <<" "<<right+1<<" "<<i+1<<endl;
        flag = false;
        return;
      }
      else if(sum < target) left++;
      else right--;
    }
  }
  if(!flag)
  cout<<"No such Index Present"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
