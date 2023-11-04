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
//     int start = 0;
//     int end = n-1;
//     while(start<end){
//         swap(array[start], array[end]);
//         start++;
//         end--;
//     }
//     for(int i = 0; i< n; i++){
//         cout << array[i] << " ";
//     }
//     return 0;
// }


/*
Create a function to reverse the elements of array 
without using second array and also 
find the second largest value in array.

*/

#include<bits/stdc++.h>
using namespace std;

void reversee(int array[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

int getlargest(int array[], int n)
{
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[result])
        {
            result = i;
        }
    }
    return result;
}

int secondlargest(int array[], int n)
{
    int largest = getlargest(array, n);
    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[largest])
        {
            if (result == -1 || array[i] > array[result])
            {
                result = i;
            }
        }
    }
    return array[result];
}
int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    reversee(array, n);
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << secondlargest(array, n) << endl;
    return 0;
}
