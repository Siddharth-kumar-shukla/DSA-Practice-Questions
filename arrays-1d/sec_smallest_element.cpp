// #include<bits/stdc++.h>
// using namespace std;

// #define speedy ios_base::sync_with_stdio(0);cin.tie(0)

// pair<int, int>smallest(int array[], int n){
//     pair<int, int>p;
//     int minni1, minni2;
//     minni1 = minni2 = INT_MAX;
//     for(int i = 0; i < n; i++){
//         minni1 = min(minni1, array[i]);
//     }

//     for(int i = 0; i < n; i++){
//         if(array[i] != minni1){
//             minni2 = min(minni2, array[i]);
//         }
//     }
//     p.first = minni1;
//     p.second = minni2;
//     return p;
// }

// void decode()
// {
//     speedy;
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i = 0; i < n; i++){
//         cin >> array[i];
//     }
//     smallest(array, n);
// }

// int32_t main()
// {
//     decode();
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// #define ll long long int
// ll gcd(ll a, ll b)
// {
//     while(a!=b){
//         if (a > b)
//         {
//             a = a - b;
//         }
//         else if (b > a)
//         {
//             b = b - a;
//         }
//     }
//     return a;
// }

// ll lcm(ll a, ll b)
// {
//     ll lcm = ((a / gcd(a, b)) * b);
//     return lcm;
// }

// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         vector<ll> v;
//         v.push_back(gcd(a, b));
//         v.push_back(lcm(a, b));
//         for(auto x : v){
//             cout << x << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void decode(){
//     int a, b;
//     cin >> a >> b;
//     int z = max(a, b);
//     int lcm = 1;
//     while (true)
//     {
//         if (z % a == 0 && z % b == 0)
//         {
//             lcm = z;
//             break;
//         }
//         z++;
//     }
//     cout << lcm << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--){
//         decode();
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else if (b > a)
        {
            b = b - a;
        }
    }
    return a;
}

ll lcm(ll a, ll b)
{
    ll lcm = ((a / gcd(a, b)) * b);
    return lcm;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        vector<ll> s;
        s.push_back(gcd(a, b));
        s.push_back(lcm(a, b));
        for (auto i : s)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}