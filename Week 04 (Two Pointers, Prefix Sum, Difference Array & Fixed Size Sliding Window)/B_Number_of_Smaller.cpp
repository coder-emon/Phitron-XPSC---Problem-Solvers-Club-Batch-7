#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> a(n) ,b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    int l = 0, r = 0;
    int cnt = 0;
    vector<int> ans;
    while(r < m){
        if(l < n && a[l] < b[r]){
            cnt++;
            l++;
        }else{
            ans.push_back(cnt);
            r++;
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    
    return 0;
}