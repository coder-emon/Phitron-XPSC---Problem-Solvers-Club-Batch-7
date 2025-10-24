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
        string a,b;
        cin >> n >> a >> b;
        int a_odd_1 = 0, a_even_1 = 0, b_odd_0 = 0, b_even_0 = 0;
        for(int i = 0; i < n; i++){
            int idx = i + 1;
            if(idx %  2 != 0){
                if(a[i] == '1'){
                    a_odd_1++;
                }
                if(b[i] == '0'){
                    b_odd_0++;
                }
            }else{
                if(a[i] == '1'){
                    a_even_1++;
                }
                if(b[i] == '0'){
                    b_even_0++;
                }
            }
        }

        if(a_odd_1 <= b_even_0 && a_even_1 <= b_odd_0){
            cout  << "YES" << nl;
        }else{
            cout << "NO" << nl;
        }
    }
    
    return 0;
}