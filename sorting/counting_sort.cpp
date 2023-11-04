// counting sort:—

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void countingSort(int array[], int n, int k){
    int count[k];
    for(int i = 0; i < k; i++){
        count[i] = 0;
    }
    for(int i = 0; i < n; i++){
        count[array[i]]++;
    }
    for(int i = 1; i < n; i++){
        count[i] = count[i-1] + count[i];
    }
    int output[n];
    for(int i = n-1; i >= 0; i--){
        output[count[array[i]]-1] = array[i];
        count[array[i]]--;
    }
    for(int i = 0; i < n; i++){
        array[i] = output[i];
    }
}

void decode()
{
    speedy;
    // int n = 5;
    // cin >> n;
    int a[6] = {1, 4, 4, 1, 0, 1};
    // for(int i = 0; i < n; i++){
    //     cin >> array[i];
    // }
    int k = 5;
    countingSort(a, 6, k);
    for(auto it : a){
        cout << it << " ";
    }
    cout << endl;
    
}

int32_t main()
{
    decode();
    return 0;
}
