
// Sliding window technique:
#include <bits/stdc++.h>
using namespace std;

#define speedy                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
// find maximum subarray sum of given window size
// Sliding Window technique:
int maxximumSum(int array[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += array[i];
    }
    int maxiSum = sum;
    for (int i = k; i < n; i++)
    {
        sum += (array[i] - array[i - k]);
        maxiSum = max(maxiSum, sum);
    }
    return maxiSum;
}

void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int x;
    cin >> x;
    cout << maxximumSum(array, n, x) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
