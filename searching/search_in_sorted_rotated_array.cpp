#include <bits/stdc++.h>
using namespace std;

int search(int array[], int n, int x)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] == x)
        {
            return mid;
        }
        // left half sorted:
        if (array[start] < array[mid])
        {
            if (x >= array[start] && x < array[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // right half sorted:
        else
        {
            if (x > array[mid] && x <= array[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
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
    int x;
    cin >> x;
    cout << search(array, n, x) << endl;
    return 0;
}
