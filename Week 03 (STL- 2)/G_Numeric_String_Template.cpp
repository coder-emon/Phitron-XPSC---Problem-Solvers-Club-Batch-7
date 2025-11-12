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
            vector<int> a(n);
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            
            int m;
            cin >> m;
            for(int i = 0; i < m; i++){
                string s;
                cin >> s;
                unordered_map<int,char> num2Char;
                unordered_map<char,int> char2Num;
                bool flag = true;
                if(s.size() != n)
                    flag = false;
                for(int i = 0; i < n; i++){
                    int num = a[i];
                    char ch = s[i];
                    if(num2Char.count(num) && num2Char[num] != ch){
                        flag = false;
                        break;
                    }
                    if(char2Num.count(ch) && char2Num[ch] != num){
                        flag = false;
                        break;
                    }

                    num2Char[a[i]] = s[i];
                    char2Num[s[i]] = a[i];
                }
            
    
                if(flag)
                    cout << "YES" << nl;
                else
                    cout << "NO" << nl;
            }
        }
        
        return 0;
    }