// C++ implementation of the above approach
/*
Given an array of size N and a sum, the task is to check whether some array elements can be added to sum to N .
Note: At least one element should be included to form the sum.(i.e. sum cant be zero)

Input: array = -1, 2, 4, 121, N = 5

Output: YES

The array elements 2, 4, -1 can be added to sum to N



Input: array = 1, 3, 7, 121, N = 5

Output:NO

Approach: The idea is to generate all subsets using Generate all subsequences of array and correspondingly check if any subsequence has the sum equal to the given sum.
Below is the implementation of the above approach:

Note: This program would not run for the large size of the array.


 */

#include <bits/stdc++.h>
using namespace std;

// Find way to sum to N using array elements atmost once
void find(int arr[], int length, int s)
{
    // loop for all 2^n combinations
    for (int i = 1; i < (pow(2, length)); i++)
    {

        // sum of a combination
        int sum = 0;

        for (int j = 0; j < length; j++)

            // if the bit is 1 then add the element
            if (((i >> j) & 1))
                sum += arr[j];

        // if the sum is equal to given sum print yes
        if (sum == s)
        {
            cout << "YES" << endl;
            return;
        }
    }

    // else print no
    cout << "NO" << endl;
}

// driver code
int main()
{
    int sum = 5;
    int array[] = {-1, 2, 4, 121};
    int length = sizeof(array) / sizeof(int);

    // find whether it is possible to sum to n
    find(array, length, sum);

    return 0;
}
