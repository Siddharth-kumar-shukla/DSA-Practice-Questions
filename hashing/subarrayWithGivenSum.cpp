// Subarray with given sum:

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

bool isSubarray(int array[], int n, int sum){
    unordered_set<int>s;
    int prefixSum = 0;
    for(int i = 0; i < n; i++){
        prefixSum += array[i];
        if (prefixSum == sum){
            return true;
        }
        if(s.find(prefixSum-sum) != s.end()){
            return true;
        }
        s.insert(prefixSum);
    }
    return false;
}

void decode(){
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int sum;
    cin >> sum;
    if(isSubarray(array, n, sum)){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FALSE" << endl;
    }
}

int32_t main(){
    decode();
    return 0;
}
