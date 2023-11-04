#include<bits/stdc++.h>
using namespace std;
// int NaiveApproach(int array[], int n, int x){
//     for(int i = 0; i < n; i++){
//         if(array[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }

int efficientapproach(int array[], int n, int x){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(array[mid] < x)
            low = mid+1;
        
        else if(array[mid] > x)
            high = mid-1;
        
        else
        {
            if(mid == 0 || array[mid] != array[mid-1])
                return mid;
            else
                high = mid-1;
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

    // cout << NaiveApproach(array, n, x) << endl;
    cout << efficientapproach(array, n, x) << endl;
    return 0;
}
