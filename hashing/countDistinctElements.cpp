#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)
// Method-1:
int countDistinctEle1(int array[], int n)
{
    unordered_set<int>s;
    for(int i = 0; i < n; i++){
        s.insert(array[i]);
    }
    return s.size();
}

// Method-2:
int countDistinctEle2(int array[], int n){
    unordered_set<int>s(array, array+n);
    return s.size();
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
    cout << countDistinctEle1(array, n) << endl;
    cout << countDistinctEle2(array, n) << endl;

}

int32_t main()
{
    decode();
    return 0;
}

/* 
// Method-3:
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int countDistinctEle3(vector<int>&v){
    unordered_set<int>s(v.begin(), v.end());
    return s.size();
}

void decode()
{
    speedy;
    vector<int> v = {1, 2, 9, 10, 5, 8, 46, 0, 97};
    cout << countDistinctEle3(v) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
 */

/* 
Analysis:
Time complexity: theta(n);
Space complexity: O(n);
 */