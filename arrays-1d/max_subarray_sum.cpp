#include <bits/stdc++.h>
using namespace std;
// int max_subarray_sum(int array[], int size)
// {
//     int result = array[0];
//     int maxEnd = array[0];
//     for (int i = 1; i < size; i++)
//     {
//         maxEnd = max((maxEnd + array[i]), array[i]);
//         int result = max(result, maxEnd);
//     }
//     return result;
// }
int maxSubarraySum(int array[], int n)
{
    int ans = INT_MIN;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += array[i];
        if (res > ans)
        {
            ans = res;
        }
        if (res < 0)
        {
            res = 0;
        }
    }
    return ans;
}
int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // cout << max_subarray_sum(array, n) << endl;
    cout << maxSubarraySum(array, n) << endl;
    return 0;
}
