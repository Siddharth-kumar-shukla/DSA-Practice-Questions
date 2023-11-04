/*
Given a sorted array and a sum, find if there is a pair with given sum.

*/


#include<bits/stdc++.h>
using namespace std;
bool FindSum(int array[], int n, int x){
    int start = 0, end = n-1;
    while(start < end){
        if(array[start] + array[end]==x){
            return true;
        }
        else if(array[start] + array[end] < x){
            start++;
        }
        else
        {
            end--;
        }
    }
    return false;
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
    cout << FindSum(array, n, x);
    return 0;
}
