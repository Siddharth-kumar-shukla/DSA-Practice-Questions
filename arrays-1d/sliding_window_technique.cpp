#include<bits/stdc++.h>
using namespace std;
int slidingWindowTechnique(int array[], int n, int k){
    int current_sum = 0;
    for(int i = 0; i < k; i++){
        current_sum += array[i];
    }
    int maxsum = current_sum;
    for(int  i = k; i < n; i++){
        current_sum += (array[i] - array[i-k]);
        maxsum = max(maxsum, current_sum);
    }
    return maxsum;
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
    cout << slidingWindowTechnique(array, n, x);
    return 0;
}

/*

Given an Unsorted array of non-negative integers
find if there is a subarray with given sum

1 4 20 3 10 5
sum = 33   YES

1 4 0 0 3 10 5
sum = 7   YES

2 4
sum = 3   NO

*/

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int summ;
    cin >> summ;
    bool flag = false;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum+=array[j];
            if(sum == summ){
                flag = true;
            }
        }
    }
    if(flag){
        cout<< "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}

/*
1 4 20 3 10 5
x = 33;

*/

// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++){
//         cin >> array[i];
//     }
//     int x;
//     cin >> x;

//     int sum = array[0];
//     int start = 0;
//     bool flag = false;
//     for (int i = 1; i < n; i++)
//     {
//         while ((sum > x) && start < (i - 1)){
//             sum = sum - array[start];
//             start++;
//         }
//         if (sum == x){
//             flag = true;
//         }
//         if (i < n){
//             sum += array[i];
//         }
//     }

//     if (flag == true || sum == x){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
//     }
//     return 0;
// }
