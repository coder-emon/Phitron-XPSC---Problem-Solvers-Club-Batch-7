//https://open.kattis.com/problems/oddecho

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
    string arr[n+1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << arr[i] << nl;
        }
    }
    
    return 0;
}