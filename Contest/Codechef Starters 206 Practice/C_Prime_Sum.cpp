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
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int cnt = 0;
        for(int i = 0; i < n -1; i++){
            for(int j = i+1; j < n; j++){
                int sum = arr[i] + arr[j];
                if(sum % 2 != 0 || sum == 2)
                    cnt++;
            }
        }
        cout << cnt << nl;
    }
    
    return 0;
}