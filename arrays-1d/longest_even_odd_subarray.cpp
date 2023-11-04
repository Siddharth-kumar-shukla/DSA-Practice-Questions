#include<bits/stdc++.h>
using namespace std;
int oddevenSubarray(int array[], int n){
    int res = 1;
    int current = 1;
    for(int i = 1; i < n; i++){
        if((array[i]%2==0 && array[i-1]%2!=0) || array[i-1]%2==0 && array[i]%2!=0)
        {
            current++;
            res = max(res,current);
        }
        else
        {
            current = 1;
        }
    }
    return res;
}

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << oddevenSubarray(array, n) << endl;
    
    return 0;
}
