#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int array[], int start, int end, int x){
    int mid = (start + end)/2;
    if(array[mid] == x){
        return mid;
    }
    else if(array[mid]>x){
        end = mid-1;
    }
    else
    {
        start = mid+1;
    }
    return -1; 
}

int search(int array[], int x){
    if(array[0] == x) return 0;
    int i = 1;
    while (array[i]< x)
    {
        i = i*2;
    }
    if(array[i] == x) return i;
// 20 40 60 80 100 200 
    return BinarySearch(array, i/2+1, i-1, x);
}

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int x;
    cin >> x;
    cout << search(array, x) << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int MinDist(int array[], int n, int x, int y)
// {
//     int z = -1;
//     int minimum_distance = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] == x || array[i] == y)
//         {
//             if (z != -1 && array[i] != array[z])
//             {
//                 minimum_distance = min(minimum_distance, i - z);
//             }
//             z = i;
//         }
//     }
//     if (minimum_distance == INT_MAX)
//     {
//         return -1;
//     }
//     return minimum_distance;
// }
// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     int x, y;
//     cin >> x >> y;

//     cout << MinDist(array, n, x, y) << endl;
//     return 0;
// }
