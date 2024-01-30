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
int solve()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        int first ,second;
        if(isupper(a[i])){
            first = a[i] - 65;
        }
        else first = a[i] - 97;
        if(isupper(b[i])){
            second = b[i] - 65;
        }
        else second = b[i]-97;

        if(first < second) return -1;
        else if(first > second) return 1;
    }
    return 0;
}
int main()
{
    cout<<solve();
    return 0;
}