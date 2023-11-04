// // iterative approach:

#include<bits/stdc++.h>
using namespace std;

int binary_search(int array[], int n, int x){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(array[mid] == x){
            return mid;
        }
        else if(array[mid] < x){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
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
    cout << binary_search(array, n, x);
    return 0;
}


// Recursive approach:

// #include<bits/stdc++.h>
// using namespace std;
// int binary_search(int array[], int low, int high, int x){
//     int mid = (high+low)/2;
    
//     if(low>high){
//         return -1;
//     }

//     if(array[mid] == x){
//         return mid;
//     }
//     else if(array[mid] < x){
//         return binary_search(array, mid+1, high, x);
//     }

//     else{
//         return binary_search(array, low, mid-1, x);
//     }
// }

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
//     int start = 0, end = n-1;
//     cout << binary_search(array, start, end, x);

    
//     return 0;
// }

