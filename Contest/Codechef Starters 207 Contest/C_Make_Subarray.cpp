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
        string s;
        cin >> n >> s;

        int first = -1, last = -1;
        for(int i = 0; i < n; i++){
            if (s[i] == '1') {
                if (first == -1) first = i;
                last = i;
            }
        }
        int cnt = 0;
        for(int j = first; j <= last; j++){
            if(s[j] == '0')
                cnt++;
        }
        cout << cnt << nl;

    }



    //alternate complex way bruteforce
    // int tc;
    // cin >> tc;
    // while(tc--){
    //     int n;
    //     string s;
    //     cin >> n >> s;
    //     int consOnes = 0;
    //     int ones = 0;
    //     int zeros = 0;

    //     int first = -1, last = -1;
    //     int i = 0;
    //     for(i = 0; i < n; i++){
    //         if (s[i] == '1') {
    //             ones++;
    //             if (first == -1) first = i;
    //             last = i;
    //         } else {
    //             zeros++;
    //         }

    //         if (i > 0 && s[i] == s[i - 1] && s[i] == '1') {
    //             consOnes++;
    //         }
    //     }
    //     if(consOnes > 0)
    //         consOnes++;

    //     if(zeros == n || ones == n || consOnes == ones){
    //         cout << "0" << nl;
    //         continue;
    //     }else{
    //         int cnt = 0;
    //         for(int j = first; j <= last; j++){
    //             if(s[j] == '0')
    //                 cnt++;
    //         }
    //         cout << cnt << nl;
    //     }

    // }
    
    return 0;
}