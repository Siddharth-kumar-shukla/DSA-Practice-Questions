// Subarray with zero sum:

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

bool isSubarray(int array[], int n){
    unordered_set<int>s;
    int prefixSum = 0;
    for(int i = 0; i < n; i++){
        prefixSum += array[i];
        if(s.find(prefixSum) != s.end()){
            return true;
        }
        if(prefixSum == 0){
            return true;
        }
        s.insert(prefixSum);
    }
    return false;
}

void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    if(isSubarray(array, n)){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FALSE" << endl;
    }
    
}

int32_t main()
{
    decode();
    return 0;
}
