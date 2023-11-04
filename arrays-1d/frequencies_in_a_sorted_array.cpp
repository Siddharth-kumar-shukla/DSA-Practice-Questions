#include<bits/stdc++.h>
using namespace std;

void frequencies(int array[], int n){
    int freq = 1;
    int i = 1;
    while(i<n){
        while((i<n) && array[i] == array[i-1]){
            freq++;
            i++;
        }
        cout << freq << " ";
        i++;
        freq=1;
    }
    if(n==1 || array[n-1]!= array[n-2]){
        cout << "1 " << " ";
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

    frequencies(array, n);
    return 0;
}
