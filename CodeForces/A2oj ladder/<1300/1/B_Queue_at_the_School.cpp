#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define get(a) \
    ll a;      \
    cin >> a;
#define psb push_back
#define srt(a) sort(a.begin(), a.end());

inline void printv(vector<ll> &a)
{
    for (auto it : a)
        cout << it << " ";
    cout << endl;
}
inline vl getv(int n)
{
    vl a;
    for (int i = 0; i < n; i++)
    {
        get(d);
        a.push_back(d);
    }
    return a;
}
void solve()
{
    get(n);get(t);
    string inp;
    cin>>inp;
    while(t--)
        for(int i=0;i<n-1;i++){
            if(inp[i] == 'B' and inp[i+1] == 'G') {swap(inp[i],inp[i+1]);i++;}
        }
    
    cout<<inp;
    return;
}
int main()
{
    
    solve();
    
    return 0;
}