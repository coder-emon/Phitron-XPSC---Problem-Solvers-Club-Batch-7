#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string res;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '<')
            res.pop_back();
        else
            res.push_back(s[i]);
    }

    cout << res;

    
    return 0;
}