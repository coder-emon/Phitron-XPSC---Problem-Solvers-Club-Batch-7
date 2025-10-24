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
        int x,y;
        cin >> x >>  y;
        int evenSum = 0, oddSum = 0;
        for(int i = 1; x * i <= y; i++){
            ll k = x * i;
            if(k % 2 == 0){
                evenSum += k;
            }else{
                oddSum += k;
            }
        }
        if(evenSum >= oddSum){
            cout << "YES" << nl;
        }else{
            cout << "NO" << nl;
        }
    }
    
    return 0;
}