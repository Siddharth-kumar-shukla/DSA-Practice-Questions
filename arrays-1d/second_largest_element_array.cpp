#include <bits/stdc++.h>
using namespace std;
void third_largest_ele(int array[], int n){
    int firstlargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        firstlargest = max(firstlargest, array[i]);
    }
    int secondlargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != firstlargest)
        {
            secondlargest = max(secondlargest, array[i]);
        }
    }
    int thirdlargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != secondlargest && array[i] != firstlargest)
        {
            thirdlargest = max(thirdlargest, array[i]);
        }
    }
    cout << thirdlargest << endl;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    third_largest_ele(array, n);
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int getlargest(int array[], int n){
//     int result = 0;
//     for(int i = 1; i < n; i++){
//         if(array[i]>array[result]){
//             result = i;
//         }
//     }
//     return result;
// }

// int secondlargest(int array[], int n){
//     int largest = getlargest(array, n);
//     int result = -1;
//     for(int i = 0; i < n; i++){
//         if(array[i]!= array[largest]){
//             if (result == -1 || array[i] > array[result]){
//                 result = i;
//             }
//         }
//     }
//     return array[result];
// }

// int32_t main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i = 0; i < n; i++){
//         cin >> array[i];
//     }
//     cout << secondlargest(array, n) << endl;
//     return 0;
// }
