#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int inversioncount(int a[], int start, int mid, int end){
    int n1 = mid-start+1;
    int n2 = end - mid;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++){
        left[i] = a[start+i];
    }
    for(int i = 0; i < n2; i++){
        right[i] = a[mid+i+1];
    }
    int i = 0, j = 0, k = start;
    int res = 0;
    while(i<n1 && j < n2){
        if(left[i] <= right[j]){
            a[k++] = left[i++];
        }
        else
        {
            a[k++] = right[j++];
            res = res + (n1-i);
        }
    }
    while(i < n1){
        a[k++] = left[i++];
    }
    while(j<n2){
        a[k++] = right[j++];
    }
    return res;
}

int overallcount(int a[], int start, int end){
    int res = 0;
    if(start < end){
        int mid = (start+end)/2;
        res += overallcount(a, start, mid);
        res += overallcount(a, mid+1, end);
        res += inversioncount(a, start, mid, end);
    }
    return res;
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
    cout << overallcount(array, 0, n-1);
}

int32_t main()
{
    decode();
    return 0;
}
