// Pair with given sum in unsorted array

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

// 8 3 4 2 5
//» YES

bool isPairPresent(int array[], int n, int sum) {
    unordered_set<int>s;
    for(int i = 0; i < n; i++){
        if(s.find(sum-array[i])!= s.end()){
            return true;
        }
        else{
            s.insert(array[i]);
        }
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
    int sum;
    cin >> sum;
    if(isPairPresent(array, n, sum)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main()
{
    decode();
    return 0;
}


/* 
Analysis:
Time Complexity: O(n);
Space Complexity: O(n);

 */

