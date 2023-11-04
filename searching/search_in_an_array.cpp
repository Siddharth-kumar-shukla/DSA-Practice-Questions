#include<bits/stdc++.h>
using namespace std;

int search(int array[], int size, int x){
    for(int i = 0; i < size; i++){
        if(array[i]==x){
            return i;
        }
    }
    return -1;
}
int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    int x;
    cin >> x;
    cout << search(array, n, x) << endl;
    return 0;
}
