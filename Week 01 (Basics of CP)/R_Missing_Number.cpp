//https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        int val;
        cin >> val;
        mp[val]++;
    }

    int missingNum;
    for(int i = 1; i <= n; i++){
        if(mp[i] == 0)
            missingNum = i;
    }

    cout << missingNum;

    return 0;
}