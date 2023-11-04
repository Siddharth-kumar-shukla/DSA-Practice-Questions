#include <bits/stdc++.h>
using namespace std;
// remove duplicates from an sorted array

int removeDuplicates(int array[], int n){
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] != array[res - 1])
        {
            array[res] = array[i];
            res++;
        }
    }
    return res;
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

    int res = removeDuplicates(array, n);
    for (int i = 0; i < res; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

    /* 
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] != array[res - 1])
        {
            array[res] = array[i];
            res++;
        }
    }
    */