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
        string s;
        cin >> s;
        if(s[0] == '0' || s[n-1] == '0'){
            cout << -1 << nl;
            continue;
        }
        
        vector<int> arr;
        for(int i = 0; i < n; i++){
            arr.push_back(i+1);
        }

        for(int i = 1; i < n -1; i++){
            if(s[i] == '0') swap(arr[i],arr[i+1]);
        }

        for(auto x : arr)
            cout << x << " ";
        
        cout << nl;
    }
    
    return 0;
}