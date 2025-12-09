#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int GCD(int a, int b){
    return __gcd(a,b);      //Complexity O(log(min(a,b)));
}

int LCM(int a, int b){
    // return (a * b / (GCD(a,b)))
    return (a / (GCD(a,b)) * b);        //Complexity O(log(min(a,b)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    cout << GCD(a,b) << nl;
    cout << LCM(a,b) << nl;
    
    return 0;
}