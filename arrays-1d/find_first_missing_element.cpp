#include <bits/stdc++.h>
using namespace std;

int MissingNo(int a[], int n)
{
    int normalsum = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += a[i];
    return normalsum - sum;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << MissingNo(array, n);
    return 0;
}

