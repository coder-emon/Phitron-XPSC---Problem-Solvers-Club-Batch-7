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
    map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }
    
    int oddCount = 0;
    char oddChar = '0';
    int oddVal = 0;
    for(auto [ch, cnt] : mp){
        if(cnt % 2 != 0){
            oddCount++;
            oddChar = ch;
            oddVal = cnt;
        }
    }

    if(oddCount > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    string firstHalf;
    for(auto [ch, cnt] : mp){
        for(int i = 0; i < cnt / 2; i++){
            if(cnt % 2 == 0)
                firstHalf.push_back(ch);
        }
    }

    string lastHalf;
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        char ch = it->first;
        int cnt = it->second;
        for(int i = 0; i < cnt / 2; i++){
            if(cnt % 2 == 0)
                lastHalf.push_back(ch);
        }
    }

    string middle;
    if(oddCount == 1){
        for(int i = 0; i < oddVal; i++){
            middle.push_back(oddChar);
        }
    }

    string result = firstHalf + middle + lastHalf;
    cout << result;
    
    return 0;
}