#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        string txt, pat;
        cin >> txt >> pat;

        vector<int> freq(26, 0), window(26, 0);
        int n = txt.size(), m = pat.size();

        // Build frequency of pattern
        for(char c : pat) freq[c - 'a']++;

        int count = 0;

        // First window
        for(int i = 0; i < m; i++) window[txt[i] - 'a']++;

        if(window == freq) count++;

        // Sliding window
        for(int i = m; i < n; i++){
            window[txt[i] - 'a']++;                  // include new char
            window[txt[i - m] - 'a']--;              // remove old char

            if(window == freq) count++;
        }

        cout << count;
    
    return 0;
}