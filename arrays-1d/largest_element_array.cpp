#include <bits/stdc++.h>
using namespace std;
int getlargest(int array[], int n){
    int result = 0;
    for(int i = 1; i < n; i++){
        if(array[i]>array[result]){
            result = i;
        }
    }
    return result;
}

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int x = getlargest(array, n);
    cout << array[x] << endl;
    return 0;
}
