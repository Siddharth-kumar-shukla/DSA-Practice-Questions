#include<bits/stdc++.h>
using namespace std;

void min_consecutive_flip(int array[], int n){
    for(int i = 1; i < n; i++){
        if(array[i] != array[i-1]){
            if(array[i] != array[0]){
                cout << "From " << i << " to ";
            }
            else
            {
                cout << i-1 << endl;
            }
        }
    }
    if(array[n-1] != array[0])
    {
        cout << n-1 << endl;
    }
}


int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    min_consecutive_flip(array, n);
    return 0;
}
