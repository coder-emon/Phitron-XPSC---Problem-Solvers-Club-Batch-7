//https://www.codechef.com/problems/P1149

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,k;
    cin >> x >> y >> k;
    if(abs(x-y) <= k)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}