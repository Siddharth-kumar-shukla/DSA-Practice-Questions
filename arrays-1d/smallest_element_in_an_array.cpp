#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int minni = INT_MAX;
    for(int i = 0; i< n; i++){
        minni = min(minni, array[i]);
    }
    cout << minni << endl;
    return 0;
}
