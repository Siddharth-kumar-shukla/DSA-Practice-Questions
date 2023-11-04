#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int hoare_partition(int a[], int start, int end){
    int pivot = a[start];
    int i = start-1;
    int j = end + 1;
    while(true){
        do{
            i++;
        }while(a[i] < pivot);
        
        do{
            j--;
        }while(a[j] > pivot);

        if(i>=j) return j;
        swap(a[i],a[j]);
    }
}
//analyse this hoare's partition & tell me 
void quick_Sort(int a[], int start, int end){
    if(start < end){
        int hp = hoare_partition(a, start, end);
        quick_Sort(a, start, hp);
        quick_Sort(a, hp+1, end);
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
    quick_Sort(array, 0, n-1);

    for(auto x : array){
        cout << x << " ";
    }
}

int32_t main()
{
    decode();
    return 0;
}


