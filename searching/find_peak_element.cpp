#include<bits/stdc++.h>
using namespace std;

int getPeak(int array[], int n){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start + end)/2;
        if((mid == 0 || array[mid-1] <= array[mid]) && (mid == n-1 || array[mid+1] <= array[mid]))
            return mid;
        if(mid > 0 || array[mid-1] >= array[mid])
            end  = mid-1;
        else
            start = mid+1;
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

    cout<< getPeak(array, n) << endl;
    return 0;
}
