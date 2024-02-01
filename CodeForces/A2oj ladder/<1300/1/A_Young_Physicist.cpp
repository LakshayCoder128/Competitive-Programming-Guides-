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
    int x = 0,y=0,z=0;
    while (T--)
    {
        vl a = getv(3);
        x += a[0];y+=a[1];z+=a[2];
    }
    if(x == y and y==z and z == 0) cout<< "YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
