//https://cses.fi/problemset/task/1094/

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
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll moves = 0;
    for(int i =  1; i < n; i++){
        if(arr[i-1] > arr[i]){
            moves += arr[i-1] -arr[i];
            arr[i] += arr[i-1] -arr[i];
        }
    }

    cout << moves;
    
    return 0;
}