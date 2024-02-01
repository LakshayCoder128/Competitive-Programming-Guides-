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
    get(n);
    int arr[n];
    for(int i=0;i<n;i++){
        get(inp);
        arr[inp] = i+1;
    }
    ll a = 0,b=0;
    get(m);
    for(int i=0;i<m;i++){
        get(d);
        a += arr[d];
        b += n - arr[d] +1;
    }
    cout<<a << " "<<b;
    
}
int main()
{
    
        solve();
    
    return 0;
}