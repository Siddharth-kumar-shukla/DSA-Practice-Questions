
// // A C++ program to demonstrate working of sort(),
// // reverse()
// #include <algorithm>
// #include <iostream>
// #include <vector>
// #include <numeric> //For accumulate operation
// using namespace std;

// int main()
// {
//     // Initializing vector with array values
//     int arr[] = {10, 20, 5, 23, 42, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     vector<int> vect(arr, arr + n);

//     cout << "Vector is: ";
//     for (int i = 0; i < n; i++)
//         cout << vect[i] << " ";

//     // Sorting the Vector in Ascending order
//     sort(vect.begin(), vect.end());

//     cout << "\nVector after sorting is: ";
//     for (int i = 0; i < n; i++)
//         cout << vect[i] << " ";

//     // Reversing the Vector
//     reverse(vect.begin(), vect.end());

//     cout << "\nVector after reversing is: ";
//     for (int i = 0; i < 6; i++)
//         cout << vect[i] << " ";

//     cout << "\nMaximum element of vector is: ";
//     cout << *max_element(vect.begin(), vect.end());

//     cout << "\nMinimum element of vector is: ";
//     cout << *min_element(vect.begin(), vect.end());

//     // Starting the summation from 0
//     cout << "\nThe summation of vector elements is: ";
//     cout << accumulate(vect.begin(), vect.end(), 0);

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int firstOccurence(vector<int> &array, int x)
{
    int n = array.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] < x)
        {
            start = mid + 1;
        }
        else if (array[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            if (mid == 0 || array[mid] != array[mid - 1])
            {
                return mid;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int lastOccurence(vector<int> &array, int x)
{
    int n = array.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] > x)
        {
            end = mid - 1;
        }
        else if (array[mid] < x)
        {
            start = mid + 1;
        }
        else
        { // array[mid] == x
            if (mid == n - 1 || array[mid] != array[mid + 1])
            {
                return mid;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}

vector<int> searchRange(vector<int> &array, int x)
{
    vector<int> v;
    v.push_back(firstOccurence(array, x));
    v.push_back(lastOccurence(array, x));
    return v;
}

void decode()
{
    speedy;
    double x;
    cin >> x;
    double n;
    cin >> n;
    cout << (double)pow(x, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
