// Search in an inifnite sized sorted array.
#include <bits/stdc++.h>
using namespace std;

#define speedy                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
int binary_Search(int array[], int x, int start, int end)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] == x)
        {
            return mid;
        }
        else if (array[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
// 1, 10, 15, 20, 40, 60, 80, 100, 200, 500, 1000, ......
// x = 100
// i = 2*2 = 4 = 4*2 = 8;
// start = 40 ❌ ==> start = 60
// end = 200 ❌ ==> end = 100
// elements hamesha left most side pe milenge.

// Unbounded Binary Search.
int inifniteSearch(int array[], int x)
{
    if (array[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (array[i] < x)
    {
        i = i * 2;
    }
    if (array[i] == x)
    {
        return i;
    }
    return binary_Search(array, x, i / 2 + 1, i - 1);
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
    cout << inifniteSearch(array, x);
}

int32_t main()
{
    decode();
    return 0;
}
