#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; i++) cin >> arr[i];
    int k;
    cin >> k;

    int l = 0, r = 0;
    vector<int> ans;
    queue<int> q;
    while(r < m){
        if(arr[r] < 0 )
            q.push(arr[r]);
        if(r - l + 1 == k){
            if(!q.empty()){
                ans.push_back(q.front());
                if(arr[l] == q.front())
                    q.pop();    
            }
            else{
                ans.push_back(0);
            }
            l++;
        }
        r++;
    }

    for(auto x : ans) cout << x << " ";
    
    return 0;
}