#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int array[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] < x)
            low = mid + 1;

        else if (array[mid] > x)
            high = mid - 1;

        else
        {
            if (mid == 0 || array[mid] != array[mid - 1])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int lastOccurrence(int array[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] < x)
            low = mid + 1;
        else if (array[mid] > x)
            high = mid - 1;
        else
        {
            if (mid == n - 1 || array[mid] != array[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int countOccurrences(int array[], int n, int x)
{
    int first = firstOccurrence(array, n, x);
    if (first == -1)
    {
        return 0;
    }
    return (lastOccurrence(array, n, x) - first + 1);
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

    cout << countOccurrences(array, n, x) << endl;

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i = 0; i < n; i++){
//         cin >> array[i];
//     }

//     int x;
//     cin >> x;
//     int count = 0;
//     bool flag = true;
//     for(int i = 0; i < n; i++){
//         if(array[i] == x){
//             flag = true;
//             count++;
//         }
//     }
//     if(flag == false){
//         cout << "0" << endl;
//     }
//     else
//     {
//         cout << count << endl;
//     }
//     return 0;
// }
