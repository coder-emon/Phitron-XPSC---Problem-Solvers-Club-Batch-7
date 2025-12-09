#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //divisors O(n) complexity
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++){
    //     if(n % i == 0){
    //         cout << i << " ";
    //     }
    // }
    // cout << nl;

    // divisors O(sqrt(n)) complexity 
    int n;
    cin >> n;
    vector<int> divisors;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            // cout << i << " ";
            divisors.push_back(i);
            if(n / i != i){
                // cout << n / i <<  " ";
                divisors.push_back(n/i);
            }
        }
    }

    sort(divisors.begin(),divisors.end());
    for(auto x : divisors) cout << x << " ";
    
    return 0;
}