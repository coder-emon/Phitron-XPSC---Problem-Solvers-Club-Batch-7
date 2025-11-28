#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<ll,ll>> arr(n+1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(),arr.end());
    int f = 1, l = 2, r = n;
    bool flag = false;
    while(l < r){
        if(arr[f].first + arr[l].first  + arr[r].first > x){
            r--; 
        }
        else if(arr[f].first + arr[l].first  + arr[r].first < x){
            l++;
        }
        else{
            flag =true;
            cout << arr[f].second << " " << arr[l].second  << " " << arr[r].second;
            break;
        }

        if(r == l){
            f++;
            l=f+1;
            r=n;
        }
    }

    if(flag == false)
        cout << "IMPOSSIBLE";

    return 0;
}