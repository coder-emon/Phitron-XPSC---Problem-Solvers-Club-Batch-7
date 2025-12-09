#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int tc;
    // cin >> tc;
    // while(tc--){
    //     int n,k;
    //     cin >> n >> k;
    //     string s;
    //     cin >> s;
    //     int c0 = 0, c1 = 0;

    //     for(int i = 0; i < n; i++){
    //         if(s[i] == '0') c0++;
    //         else c1++;
    //     }

    //     int maxZeros = 0, maxOnes = 0;

    //     for (int i = 0; i < k; i++) {
    //         int len = 0;

    //         for (int j = i; j < n; j += k)
    //             len++;

    //         int cap = (len + 1) / 2;
    //         maxZeros += cap;
    //         maxOnes += cap;
    //     }

    //     if (c0 <= maxZeros && c1 <= maxOnes)
    //         cout << "Yes" << nl;
    //     else
    //         cout << "No" << nl;
    // }

    int tc;
    cin >> tc;
    while(tc--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c0 = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '0') c0++;
        }

        int minZeros = 0, maxZeros = 0;

        for (int i = 0; i < k; i++) {
            int group_sz = (n-i+k-1) / k;
            minZeros += group_sz / 2;
            maxZeros += (group_sz + 1)/2;
        }

        if (c0 >= minZeros && c0 <= maxZeros)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }
    
    return 0;
}