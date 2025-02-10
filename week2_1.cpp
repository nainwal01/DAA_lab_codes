#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v)cin>>i;
    int x;
    cin>>x;
    int f,l;
    bool flag = false;
    int st =0, end = n-1;
    while(st<=end)
    {
        int mid= (end+st)/2;
        if(v[mid] == x)
        {
            cout<<"Present in Array"<<endl;
            flag = true;
            break;
        }
        else if(v[mid]<x)
          st = mid+1;
        else end = mid-1;
    }
    if(flag)
    {
           l = upper_bound(v.begin(),v.end() , x+1)-v.begin();
           f = upper_bound(v.begin(), v.end() , x) -v.begin();
          cout<<"Number of copies are "<<l-f<<endl;
    }
    else cout<<"Not Present"<<endl;

}
