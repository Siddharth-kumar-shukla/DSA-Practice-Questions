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

    int res = 0;
    for(int i = 0; i < n; i++){
        if(array[i]!=0){
            swap(array[i], array[res]);
            res++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}
