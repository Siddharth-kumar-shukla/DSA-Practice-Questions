#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int hoare_partition(int a[], int start, int end)
{
    int pivot = a[start];
    int i = start - 1;
    int j = end + 1;
    while (true)
    {
        do
        {
            i++;
        } while (a[i] < pivot);

        do
        {
            j--;
        } while (a[j] > pivot);

        if (i >= j)
            return j;
        swap(a[i], a[j]);
    }
}

int random_pivot(int a[], int start, int end)
{
    srand(time(0));
    int random = start + rand() % (end - start);
    swap(a[random], a[end]);
    return hoare_partition(a, start, end);
}

void quickSort(int a[], int start, int end)
{
    if (start < end)
    {
        int hp = random_pivot(a, start, end);
        quickSort(a, start, hp);
        quickSort(a, hp + 1, end);
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
    quickSort(array, 0, n - 1);

    for(auto x : array){
        cout << x << " ";
    }
}

int32_t main()
{
    decode();
    return 0;
}
