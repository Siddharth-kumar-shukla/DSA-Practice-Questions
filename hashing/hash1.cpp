/* #include <bits/stdc++.h>
using namespace std;

#define booster ios_base::sync_with_stdio(0); cin.tie(0)

struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }
    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    void deletee(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }
    bool search(int key){
        int i = key % BUCKET;
        for(auto x: table[i])
        {
            if(x==key) 
            return true;
        }
        return false;
    }
};

void solve()
{
    MyHash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    cout << mh.search(10) << endl;
    // mh.remove(15);
    cout << mh.search(15);
}

int32_t main()
{
    booster;
        solve();
    return 0;
}



 */

/*
Maximum Circular Subarray Sum.

8, -4, 3, -5, 4

» maxSubarraySum = 8
» sum = 6;

» Inversion of array elements:
-8, 4, -3, 5, -4

» maxSubarraySum = 6

circularSubarraySum = maxSubarraySum + sum;
circularSubarraySum = 6 + 6 = 12;

maxCircularSubArraySum = max(circularSubarraySum, maxSubarraySum);

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int maxSubarraySum(int array[], int n){
    int sum = 0;
    int maxxi = INT_MIN;
    for(int i = 0; i < n; i++){
        sum+=array[i];
        if(sum>maxxi){
            maxxi = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return maxxi;
}


int totalsubarraySum(int array[], int n){
    int normal = maxSubarraySum(array, n);
    if(normal < 0){
        return normal;
    }
// Finding circular subarray sum:
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=array[i];
        array[i] = -array[i];
    }
    int circularSubarraySum = sum + maxSubarraySum(array, n);
    int maxCircularSubArraySum = max(normal, circularSubarraySum);
    return maxCircularSubArraySum;
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
    cout << totalsubarraySum(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
 */

/* 

longest even-odd subarray:

1 2 3 5 7 9 4 6 8
»3

1 3 5 7 
» 1

2 4 6 8
» 1
 */

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int longestEvenOddSubarray(int array[], int n){
    int count = 1;
    int maxxi = 1;
    for(int i = 1; i < n; i++){
        if((array[i]%2!=0 && array[i-1]%2==0) || (array[i]%2==0 && array[i-1]%2!=0)){
            count++;
            maxxi = max(maxxi, count);
        }
        else{
            count = 1;
        }
    }
    return maxxi;
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
    cout << longestEvenOddSubarray(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
