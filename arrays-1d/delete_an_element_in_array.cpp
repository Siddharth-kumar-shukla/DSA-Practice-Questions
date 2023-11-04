#include <bits/stdc++.h>
using namespace std;
int deleteElement(int array[], int n, int x)
{
    int i = 0;
    for (i = 0; i < n; i++){
        if (array[i] == x){
            break;
        }
    }
    if (i == n){
        return n;
    }
    for (int j = i; j <= n - 1; j++){
        array[j] = array[j + 1];
    }
    return n - 1;
}


int insert_element(int array[], int n, int x, int capacity, int position)
{
    if (n == capacity)
        return n;

    int index = position - 1;
    for (int i = n - 1; i >= index; i--){
        array[i + 1] = array[i];
    }
    array[index] = x;
    return n + 1;
}

int LinearSearch(int array[], int n, int x){
    for(int i = 0; i < n; i++){
        if(array[i] == x){
            return i+1;
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
    cout << LinearSearch(array, n, x);

    // for (int i = 0; i < n; i++){
    //     cout << array[i] << " ";
    // }
    return 0;
}

