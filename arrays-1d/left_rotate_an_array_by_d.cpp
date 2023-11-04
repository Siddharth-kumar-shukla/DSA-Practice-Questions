#include<bits/stdc++.h>
using namespace std;

void reversee(int array[], int start, int end){
    while(start < end){
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void leftRotateAnArrayByD(int array[], int n, int d){
    reversee(array, 0, d-1);
    reversee(array, d, n-1);
    reversee(array, 0, n-1);
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int d;
        cin >> d;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        leftRotateAnArrayByD(array, n, d);
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " ";
        }
    }
    return 0;
}
