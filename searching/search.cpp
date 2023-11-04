// #include <bits/stdc++.h>
// using namespace std;

// #define speedy ios_base::sync_with_stdio(0); cin.tie(0)

// bool linearSearch(int array[], int n, int element){
//     for(int i = 0; i<n; i++){
//         if(array[i] == element){
//             return true;
//         }
//     }
//     return false;
// }

// int32_t main()
// {
//     speedy;
//     int n;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     int element;
//     cin >> element;
//     //applying linear search
//     if(linearSearch(array, n, element)){
//         cout << "The element exist in the array" << endl;
//     }
//     else
//         cout << "The element does not exist in the array" << endl;

//     cout << "\n\n\n\n";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define speedy ios_base::sync_with_stdio(0); cin.tie(0)

// int binary_search(int array[], int n, int x)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (array[mid] == x)
//         {
//             return mid;
//         }
//         // 1 2 3 4 5
//         else if (array[mid] < x)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     speedy;
//     int n;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> array[i];
//     }
//     int element;
//     cin >> element;
//     //applying Binary search
//     int x = binary_search(array, n, element);
//     cout << x << endl;
//     if (x == -1)
//     {
//         cout << "The element does not exist in the array" << endl;
//     }
//     else
//         cout << "The Element exist in the array" << endl;
//     cout << "\n\n\n\n";
//     return 0;
// }