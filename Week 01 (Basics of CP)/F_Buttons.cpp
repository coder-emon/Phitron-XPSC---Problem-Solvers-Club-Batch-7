//https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << a + b;
    }else{
        int mx = max(a,b);
        int res = (mx * 2) -1;
        cout << res;
    }
    
    return 0;
}