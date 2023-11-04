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

    int res = array[1]-array[0];
    int minValue = array[0];
    for(int i = 0; i < n; i++){
        res = max(res, array[i] - minValue);
        minValue = min(minValue, array[i]);
    }
    cout << res << endl;
    return 0;
}
