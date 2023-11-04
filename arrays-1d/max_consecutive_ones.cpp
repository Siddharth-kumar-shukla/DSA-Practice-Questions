#include<bits/stdc++.h>
using namespace std;
int max_consecutive_ones(int array[], int size){
    int res = 0;
    int current = 0;
    for(int i=0; i<size; i++){
        if(array[i]==0){
            current = 0;
        }
        else
        {
            current++;
            res = max(res, current);
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

    cout << max_consecutive_ones(array, n);
    return 0;
}
