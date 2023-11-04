#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

//choclate sum problem
int minDifference(int array[], int n, int k){
    if(k > n){
        return -1;
    }
    sort(array, array+n);
    int res = array[k-1] - array[0];
    for(int i = 1; i+k-1 < n; i++){
        res = min(res, array[i+k-1]-array[i]);
    }
    return res;
}
/*
7
7 3 2 4 9 12 56
3

*/

void positive_negative(int array[], int n){
    int i = -1;
    int j = n;
    while(true){
        do{
            i++;
        }while(array[i]<0);

        do{
            j--;
        }while(array[j]>=0);
        if(i>=j){
            return ;
        }
        swap(array[i], array[j]);
    }
}

void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int k;
    cin >> k;
    cout << minDifference(array, n, k);
}

int32_t main()
{
    decode();
    return 0;
}
