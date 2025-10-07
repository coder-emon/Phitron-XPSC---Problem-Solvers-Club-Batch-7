//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin >> s >> t;
    int n = s.size();
    int ops = 0;
    for(int i = 0; i < n; i++)
        if(s[i] != t[i])
            ops++;

    cout << ops;
    
    return 0;
}