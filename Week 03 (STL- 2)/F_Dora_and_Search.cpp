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
            set<int> s;
            vector<int> v(n);
            for(int i = 0; i < n; i++ ){
                cin >> v[i];
                s.insert(v[i]);
            }
            int l = 0;
            int r = n -1;
            bool found = false;
            while(l < r){
                int mn = *s.begin(), mx = *s.rbegin();
                if((v[l] != mn && v[l] != mx) && (v[r] != mn && v[r] != mx)){
                    cout << l + 1 << " " << r+ 1 << nl;
                    found = true;
                    break;
                }
                if(v[l] == mn || v[l] == mx){
                    s.erase(v[l]);
                    l++;
                }
                if(v[r] == mn || v[r] == mx){
                    s.erase(v[r]);
                    r--;
                }
            }

            if(found != true){
                cout << -1 << nl;
            }
        }
        
        return 0;
    }