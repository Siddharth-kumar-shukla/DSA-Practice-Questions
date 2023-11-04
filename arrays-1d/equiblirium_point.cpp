// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i = 0; i < n; i++){
//         cin >> array[i];
//     }

//     int sum = 0;
//     bool flag = false;
//     for(int i = 0; i < n; i++){
//         sum+=array[i];
//     }
//     int lsum = 0;
//     for(int i = 0; i < n; i++){
//         if(lsum == (sum-array[i])){
//             flag = true;
//             break;
//         }
//         lsum += array[i];
//         sum-=array[i];
//     }

//     if(flag){
//         cout << "YES" << endl;
//     }
//     else
//         cout << "NO" << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// bool equilibriumPoint(int array[], int n){
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum+=array[i];
//     }
//     int lsum = 0;
//     for(int i = 0; i < n; i++){
//         if(lsum == sum-array[i]){
//             return true;
//         }
//         lsum += array[i];
//         sum-=array[i];
//     }
//     return false;
// }

// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i = 0; i < n; i++){
//         cin >> array[i];
//     }

//     cout << equilibriumPoint(array, n);
//     return 0;
// }
