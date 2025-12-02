#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    vector<int> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    pbds<pair<int,int>> p;
    int l = 1, r = 1;
    
    while(r <= n){
        p.insert({a[r],r});
        if(r - l + 1 == k){
            int pos = k/2;
            if(k % 2 == 0) pos--;
            cout << p.find_by_order(pos)->first << " ";
            p.erase({a[l], l});
            l++;
        }

        r++;

    }
    
    
    return 0;
}