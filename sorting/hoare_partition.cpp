#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int hoare_partition(int a[], int start, int end) {
    int pivot = a[start];
    int i = start-1;
    int j = end+1;
    while(1){
        do{
            i++;
        }while(a[i] < pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j) return j;
        swap(a[i], a[j]);
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
    hoare_partition(array, 0, n-1);
    for(int i : array){
        cout << i << " ";
    }
}

int32_t main()
{
    decode();
    return 0;
}
