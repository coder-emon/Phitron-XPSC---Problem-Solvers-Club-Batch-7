#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //normal 2D array type vector
    // int n,m;
    // cin >> n >> m;
    // vector<vector<int>> v(n,vector<int>(m));

    //dynamic 2d vector different column size
    // int n;
    // cin >> n;
    // vector<vector<int>> v;
    // for(int i = 0; i < n; i++){
    //     int m;
    //     cin >> m;
    //     vector<int> a(m);
    //     for(int j = 0; j < m; j++){
    //         cin >> a[j];
    //     }
    //     v.push_back(a);
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < v[i].size(); j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << nl;
    // }
    

    //2d string vector
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << nl;
    }
    return 0;
}