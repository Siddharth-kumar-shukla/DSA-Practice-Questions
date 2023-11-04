#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int modified_hoare_partition(int a[], int start, int end)
{
    int pivot = a[start];
    int i = start;
    int j = end;
    while (start <= end)
    {
        if (a[i] <= pivot)
        {
            start++;
        }
        else //a[i] > pivot
        {
            swap(a[start], a[end]);
            end--;
        }
    }
    swap(a[i], a[end]);
    return end;
}

void quick_Sort(int a[], int start, int end)
{
    if (start <= end)
    {
        int hp = modified_hoare_partition(a, start, end);
        quick_Sort(a, start, hp - 1);
        quick_Sort(a, hp + 1, end);
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
    
}

int32_t main()
{
    decode();
    return 0;
}
