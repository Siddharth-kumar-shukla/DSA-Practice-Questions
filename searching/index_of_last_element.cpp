#include<bits/stdc++.h>
using namespace std;

// int NaiveApproach(int array[], int n, int x){
//     for(int i = n-1; i >= 0; i--){
//         if(array[i] == x){
//             return i;
//         }
//     }
//     return -1;
// }


int efficientRecursiveApproach(int array[], int low, int high, int n, int x){
    low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(array[mid] < x){
            low = mid + 1;
        }
        else if(array[mid] > x){
            high = mid - 1;
        }
        else{
            if( mid == n-1 || array[mid] != array[mid + 1]){
                return mid;
            }
            else{
                low = mid + 1;
            }
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

    // cout << NaiveApproach(array, n, x) << endl;

    int end = n-1, start = 0;
    cout << efficientRecursiveApproach(array, start, end, n, x);
    return 0;
}
