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
    
}
int main()
{
    get(T);
    vl a ;
    a = getv(T);

    ll sum = accumulate(a.begin(),a.end(),0);
    // cout<<sum << " ";
    int ans = 0;
    for(int i=1;i<=5;i++){
       if((sum + i) % (T+1) != 1){ans++;}
    }
    cout<<ans;

    return 0;
}
/*
2
1 + 1 
*/ 