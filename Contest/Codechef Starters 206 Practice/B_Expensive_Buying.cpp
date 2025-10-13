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
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end(), greater<int>());
        int sum = 0;
        for(int i = 0; i < k; i++)
            sum += arr[i];

        cout << sum << nl;
    }
    
    return 0;
}