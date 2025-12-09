#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

// //Primality Test Complexity O(N)
// bool isPrime(int n){
//     if(n == 1)
//         return false;
//     for(int i = 2; i < n; i++){
//         if(n%i == 0)
//             return false;
//     }

//     return true;
// }

// //Primality Test Complexity O(Sqrt(N))
bool isPrime(int n){
    if(n == 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << isPrime(n);
    
    return 0;
}