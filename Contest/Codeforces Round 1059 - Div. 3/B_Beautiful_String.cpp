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
        bool isPalindrome = true;
        cin >> n >> s;
        int i = 0, j = n-1;
        while(i < j){
            if(s[i] != s[j])
                isPalindrome = false;

            i++;
            j--;
        }
        if(isPalindrome){
            cout << 0 << nl << nl;
        }else{
            int cnt = count(s.begin(),s.end(),'0');
            cout << cnt << nl;
            for(int i = 0; i < n; i++){
                if(s[i] == '0')
                    cout << i + 1 << " ";
            }
            cout << nl;
        }
    }
    
    return 0;
}