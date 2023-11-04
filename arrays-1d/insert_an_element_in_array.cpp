#include <bits/stdc++.h>
using namespace std;

int insert_element(int array[], int n, int x, int capacity, int position)
{
    if (n == capacity) return n;

    int index = position - 1;
    for (int i = n - 1; i >= index; i--){
        array[i + 1] = array[i];
    }
    array[index] = x;
    return n + 1;
}

int main()
{
    int array[5], capacity = 5, n = 4;
    array[0] = 10;
    array[1] = 20;
    array[2] = 40;
    array[3] = 60;
    int x = 7, position = 2;

    n = insert_element(array, n, x, capacity, position);

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}