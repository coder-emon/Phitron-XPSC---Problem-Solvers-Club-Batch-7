#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string,int> mp;
    map<int,string> mp2;
    for(int i = 0; i < n -1; i++){
        string sub = s.substr(i,2);
        mp[sub]++;
        mp2[mp[sub]] = sub;
    }

    auto lastElem = mp2.rbegin();
    cout << lastElem->second ;
    
    return 0;
}