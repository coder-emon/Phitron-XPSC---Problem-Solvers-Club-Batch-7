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

    
    int n;
    cin >> n;
    // pbds<int> p;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     p.insert(x);
    // }

    

    // //strictly less value count
    // auto it = p.order_of_key(5);
    // cout << it << nl;

    // //find by order like arr[5] and p.find_by_order(5) are same
    // auto it = p.find_by_order(5);
    // cout << *it << nl;

    // for(auto x : p) cout << x << " ";


    // if we want to erase in pbds that we have to maintain pair of pbds
    pbds<pair<int,int>> p;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        p.insert({x,i});
    }

    p.erase({4,2});

    for(auto [x,y] : p) cout << x << " " << y << nl;
    
    return 0;
}