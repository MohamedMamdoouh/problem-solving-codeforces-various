// Subsets
// NOT my solution!!
 
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ll long long
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define Glitch ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
 
int main()
{
 
    Glitch;
    ll n; cin>>n;
    ll arr[n]; rep(i,n)cin>>arr[i];
    multiset<vector<ll>>s;
    for(int i=0 ; i<(1<<n);i++){
    vector<ll>v;
    bitset<64>ss(i);
    rep(j,n){
    if(ss[j]==1)v.push_back(arr[j]);
    }
    s.insert(v);
    }
    for(auto it:s){
    for(auto i:it)cout<<i<<" ";
    cout<<endl;
    }
    return 0;
 
}
