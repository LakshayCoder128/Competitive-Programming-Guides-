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
    string s;
    cin >> s;
    for (int i = 0;i<s.length();i++)
    {
        char ch = s[i];
        if (ch == 'H' || ch == 'Q' || ch == '9' and s[i+1] != '+')
        {
            
            cout << "YES";
            return;
        }
        if(s[i] == '+' and (s[i-1]+1 == 'H' || s[i-1] + 1 == 'Q')){cout<<"YES";return;}
    }
    cout << "NO";
}
int main()
{

    solve();

    return 0;
}