/*
Given a sorted array and a sum, find if there is a triplet 
with given sum.

*/

#include<bits/stdc++.h>
using namespace std;
int Ispair(int array[], int start, int end, int x){
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

bool triplet(int array[], int n, int x){
    for(int i = 0; i < n; i++){
        if(Ispair(array, i+1, n-1, x-array[i])){
            return true;
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
    cout << triplet(array, n, x) << endl;
    return 0;
}
