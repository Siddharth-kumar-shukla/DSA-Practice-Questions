/* #include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int profit = 0;
    for(int i = 1; i < n; i++){
        if(array[i] > array[i-1]){
            profit += (array[i] - array[i-1]);
        }
    }
    cout << profit << endl;
    return 0;
}

*/

/* 
#include <bits/stdc++.h>
using namespace std;

int maxProfit(int array[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[i - 1]){
            profit += (array[i] - array[i - 1]);
        }
    }
    return profit;
}

int main()
{

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << maxProfit(array, n);
    return 0;
}
 */



/*

// Leaders In an array.
// 1 2 15 4 10 6 7 8
// 8 10 15
void leadersInArray(int array[], int n){
    int current_leader = array[n - 1];
    cout << current_leader << " ";
    for(int i = n - 2; i >= 0; i--)
    {
        if(current_leader < array[i])
        {
            current_leader = array[i];
            cout << current_leader << " ";
        }
    }
}




// Stock Buy and Sell

int maxProfit(int array[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[i - 1]){
            profit += (array[i] - array[i - 1]);
        }
    }
    return profit;
}




// Remove duplicates in a sorted array.
int removeDuplicates(int array[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] != array[res - 1])
        {
            array[res] = array[i];
            res++;
        }
    }
    return res;
}
*/

