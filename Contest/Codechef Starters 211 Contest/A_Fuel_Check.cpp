#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;
    if(x * y >= 100)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}