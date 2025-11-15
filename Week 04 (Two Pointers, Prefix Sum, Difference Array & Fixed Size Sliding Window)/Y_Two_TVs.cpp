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
    map<int,int> d;
    for(int i = 1; i <= n; i++){
        int l,r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }

    ll sum = 0;
    bool flag = true;
    for(auto [key, value] : d){
        sum += value;
        if(sum > 2)
            flag = false;
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}