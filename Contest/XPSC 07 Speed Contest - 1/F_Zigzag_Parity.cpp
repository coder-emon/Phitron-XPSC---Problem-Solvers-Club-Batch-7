#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        for(int i = 1, j = n; i <= j; i++, j--){
            if(i == j)
                cout << i << " ";
            else
                cout << i << " " << j << " ";
        }
        cout << nl;
    }
 
    return 0;
}