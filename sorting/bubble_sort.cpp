
// #include<bits/stdc++.h>
// using namespace std;

// #define fastio ios_base::sync_with_stdio(0);cin.tie(0)

// void bubble_Sort(int array[], int n)
// {
//     for(int i = 0; i < n-1; i++)
//     {
//         for(int j = 0; j < n-i-1; j++)
//         {
//             if(array[j]>array[j+1])
//                 swap(array[j], array[j+1]);
//         }
//     }
// }
// // 1 2 8 5 7
// int32_t main()
// {
//     fastio;

    // int n;
    // cin >> n;
    // int array[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }

    // bubble_Sort(array, n);

    // for(int i = 0; i<n; i++){
    //     cout << array[i] << " ";
    // }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// #define booster ios_base::sync_with_stdio(0); cin.tie(0)

// void bubble_sort(int array[], int n){
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n-i; j++){
//             if(array[j] > array[j + 1]){
//                 swap(array[j], array[j + 1]);
//             }
//         }
//     }
// }

// void selection_sort(int array[], int n){
//     for(int i = 0; i<n-1; i++){
//         for(int j = i+1; j<n; j++){
//             if(array[j] < array[i]){
//                 swap(array[j], array[i]);
//             }
//         }
//     }
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     int array[n];

//     for (int i = 0; i < n; i++)
//         cin >> array[i];

//     // bubble_sort(array, n);
//     selection_sort(array, n);
//     for (int i = 0; i < n; i++)
//         cout << array[i] << " ";
// }

// int32_t main()
// {
//     booster;
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         solve();
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void bubble_sort(int array[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}

void selection_sort(int array[], int n){
    for(int i = 0; i < n; i++){
        int minni = i;
        for(int j = i+1; j < n; j++){
            if(array[j] < array[minni]){
                minni = j;
            }
        }
        swap(array[minni], array[i]);
    }
}

void inerstion_sort(int array[], int n){
    for(int i = 1; i < n; i++) {
        int res = array[i];
        int j = i-1;
        while(j>=0 && array[j]>res){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = res;
    }
}

void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    
}

int32_t main()
{
    decode();
    return 0;
}

