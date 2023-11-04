#include<bits/stdc++.h>
using namespace std;

int countOnes(int array[], int n){
    int start = 0;
    int end = n-1;
    while(start<= end){
        int mid = (start + end)/2;
        if(array[mid]==0){
            start = mid + 1;
        }
        //  0 0 0 0 0 1 1 1 1
        else{
            if(mid == 0 || array[mid-1] == 0){
                return (n-mid);
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return 0;
}
int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << countOnes(array, n) << endl;
    return 0;
}


