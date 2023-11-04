#include<bits/stdc++.h>
using namespace std;

// int prefix_sum[1000];

// void prefixsum(int array[], int n){
//     int sum = 0;
//     while(start < end){
//         sum+=array[start];
//         start++;
//     }
//     return sum;

//     prefix_sum[n];
//     prefix_sum[0] = array[0];
//     for(int i = 1; i < n; i++){
//         prefix_sum[i] = prefix_sum[i-1] + array[i];
//     }
//     cout << prefix_sum << endl;

// }
int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    // prefixsum(array, n);

    int prefix_sum[n];
    for(int i = 0; i < n; i++){
        cin >> prefix_sum[i];
    }

    prefix_sum[0] = array[0];
    for (int i = 1; i < n; i++){
        prefix_sum[i] = prefix_sum[i - 1] + array[i];
    }
    cout << prefix_sum << endl;
    return 0;
}







// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     int start = 0;
//     int end = n - 1;
//     int Prefixsum = 0;
//     while (start <= end)
//     {
//         Prefixsum += array[start];
//         start++;
//         cout << Prefixsum << " ";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// void prefixsum(int array[], int start, int end){
//     int sum = 0;
//     while(start <= end){
//         sum += array[start];
//         start++;
//     }
//     cout << sum << " ";
// }
// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i = 0; i < n; i++){
//         cin >> array[i];
//     }
//     int start, end;
//     cin >> start >> end;
//     prefixsum(array, start, end);
//     return 0;
// }



