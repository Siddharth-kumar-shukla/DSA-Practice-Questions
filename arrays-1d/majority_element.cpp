#include <bits/stdc++.h>
using namespace std;
// Moore’s Voting Algorithm.
int majorityElement(int array[], int n)
{
    int count = 1, result = 0;
    for(int i = 1; i < n; i++){
        if(array[i]==array[result]){
            count++;
        }
        else{
            count--;
        }

        if(count == 0){
            result = i;
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == array[result]){
            count++;
        }
    }
    if (count <= n / 2)
    {
        return -1;
    }
    return result;
}

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << majorityElement(array, n);
    return 0;
}
