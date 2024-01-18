#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define get(a) ll a;cin>>a;
#define psb push_back
#define srt(a) sort(a.begin(),a.end());

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

int main()
{
    cout << "a" << endl;
    get(d);
    vl a = getv(5);
    srt(a);
    printv(a);
    return 0;
}