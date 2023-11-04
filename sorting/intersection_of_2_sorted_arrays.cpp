#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void intersection(int a[], int b[], int n, int m){
    int i = 0, j = 0;
    while(i < n && j < m){
        if (i > 0 && a[i] == a[i - 1]){
            i++;
            continue;
        }

        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

// void unionnn(int a[], int b[], int n, int m){
//     int i = 0, j = 0;
//     while(i < n && j < m){
//         if(i > 0 && a[i] == a[i-1]){
//             i++;
//             continue;
//         }
//         if(j > 0 && b[j] == b[j-1]){
//             j++;
//             continue;
//         }

//         if(a[i] > b[j]){
//             cout << b[j] << " ";
//             j++;
//         }
//         else if(a[i] < b[j]){
//             cout << a[i] << " ";
//             i++;
//         }
//         else{
//             cout << b[j] << " ";
//             j++;
//             i++;
//         }
//     }
//     while(i<n){
//         if(i > 0 && a[i] != a[i-1])
//             cout << a[i] << " ";
//         i++;
//     }
//     while(j<m){
//         if(j > 0 && b[j] != b[j-1]){
//             cout << b[j] << " ";
//         j++;
//     }
// }

void decode()
{
    speedy;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    intersection(a, b, n, m);
    cout << endl;
    // unionnn(a, b, n, m);
}

int32_t main()
{
    decode();
    return 0;
}
