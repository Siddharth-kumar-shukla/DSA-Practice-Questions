#include<bits/stdc++.h>
using namespace std;

int getwater(int array[], int n)
{
    int lmax[n], rmax[n];
    int res = 0;

    lmax[0] = array[0];
    for(int i = 1; i < n; i++){
        lmax[i] = max(lmax[i-1], array[i]);
    }

    rmax[n-1] = array[n-1];
    for(int i = n-2; i>=0; i--){
        rmax[i] = max(array[i], rmax[i+1]);
    }

    for(int i=1; i<n-1; i++){
        res+= (min(rmax[i], lmax[i])-array[i]);
    }
    return res;
}

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << getwater(array, n) << endl;
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int getwater(int array[], int n){
//     int lmax[n], rmax[n];
//     int result = 0;
//     lmax[0] = array[0];
//     for(int i = 1; i < n; i++){
//         lmax[i] = max(lmax[i-1], array[i]);
//     }

//     rmax[n-1] = array[n-1];
//     for(int i = n-2; i >= 0; i--){
//         rmax[i] = max(array[i], rmax[i+1]);
//     }
//     for(int i = 1; i <= n-2; i++){
//         result += min(rmax[i], (lmax[i]-array[i]));
//     }

//     return result;

// }
// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i = 0; i < n; i++){
//         cin >> array[i];
//     }
//     getwater(array, n);
//     return 0;
// }
