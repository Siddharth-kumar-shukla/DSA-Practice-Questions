#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void mergefun(int array[], int start, int mid, int end){
    int n1 = mid-start+1, n2 = end - mid;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++){
        left[i] = array[start+i];
    }
    for(int i = 0; i < n2; i++){
        right[i] = array[mid+i+1];
    }
    int i = 0, j = 0, k = start;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            array[k++] = left[i++];
        }
        else{
            array[k++] = right[j++];
        }
    }
    while(i<n1){
        array[k++] = left[i++];
    }
    while(j<n2){
        array[k++] = right[j++];
    }
}

void mergeSortAlgo(int array[], int start, int end)
{
    if(end > start) // atleast 2 element
    {
        int mid = (start+end)/2;
        mergeSortAlgo(array, start, mid);
        mergeSortAlgo(array, mid+1, end);
        mergefun(array, start, mid, end);
    }
}

void decode()
{
    speedy;
    int m;
    cin >> m;
    int a[m];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    mergeSortAlgo(a, 0, m-1);
    for(int i = 0; i < m; i++){
        cout << a[i] << " ";
    }
}

int32_t main()
{
    decode();
    return 0;
}

// void mergearray(int a[], int b[], int m, int n){
//     int i = 0, j = 0;
//     while(i<m && j<n){
//         if(a[i]<=b[j]){
//             cout << a[i++] << " ";
//         }
//         else //b[j] < a[i]
//         {
//             cout << b[j++] << " ";
//         }
//     }
//     while(i<m){
//         cout << a[i++] << " ";
//     }
//     while(j<n){
//         cout << b[j++] << " ";
//     }
// }

