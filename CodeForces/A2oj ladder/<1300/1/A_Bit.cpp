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
int x = 0;
void solve()
{
    get(n);
    while(n--)
   {    string s;
        cin>>s;
        if(s[0] == '+' || s[1] == '+') x++;
        else if(s[0] == '-' || s[1] == '-')x--;
    }
    cout<<x;
}
int main()
{
    
        solve();
    
    return 0;
}