#include<bits/stdc++.h>
using namespace std;
// 1 2 15 4 10 6 7 8
// 8 10 15
void leadersInArray(int array[], int n){
    int current_leader = array[n - 1];
    cout << current_leader << " ";
    for(int i = n - 2; i >= 0; i--)
    {
        if(current_leader < array[i])
        {
            current_leader = array[i];
            cout << current_leader << " ";
        }
    }
}

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    leadersInArray(array, n);
    return 0;
}
