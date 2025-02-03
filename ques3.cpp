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
  if(v[0] == key)
   {
     cout<<"Present at"<<" "<<1<<endl;
     return;
   }
   int st = 0;
   int prev =0;
   for(int i =0 ; i< min((int)pow(2,st) , n) ; i++)
   {
     int temp = pow(2,i);
     if(v[temp] == key)
     {
       cout<<"Present at"<<" "<<temp+1<<endl;
       return;
     }
     else if(v[temp]>key)
        break;  
        
      prev = i;
   }
   
   for(int i = pow(2,prev) ;i <min((int)pow(2,i+1) , n) ; i++)
   {
     if(v[i] == key)
     {
       cout<<"Present at"<<" "<<i<<endl;
       return;
     }
   }
   cout<<"Not Present"<<endl;
   return;
   
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
