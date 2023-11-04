/*
Finding repeating element:

RULES:-
* Array size, n >= 2
* Only one element repeats(any no. of times).
* All the elements from 0 to max(array) are present.
* Therefore, 0 <= max(array) <= n-2

* Time complexity O(n)
* Space complexity O(1)
NOTE: No modifications in original array.
*/


#include<bits/stdc++.h>
using namespace std;
/*
Time complexity O(n^2)
Space complexity O(1)
*/
int SuperNaiveMethod(int array[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(array[i] == array[j]){
                return i;
            }
        }
    }
    return -1;
}
/*
Time complexity O(nlogn)
Space complexity O(1)
*/
int NaiveMethod(int array[], int n){
    sort(array, array+n);
    for(int i=0; i < n; i++){
        if(array[i] == array[i+1]){
            return array[i];
        }
    }
    return -1;
}

/*
Time complexity O(n)
Space complexity O(1)
no changes in original array.
Two Step Algorithm
*/

int efficienctMethod(int array[], int n){
    int slow = array[0]+1;
    int fast = array[0]+1;
    do{
        slow = array[slow]+1;
        fast = array[array[fast]+1]+1;
    }while(slow!=fast);

    slow = array[0]+1;
    while(slow!=fast){
        fast = array[fast]+1;
        slow = array[slow]+1;
    }
    return slow-1;
}

int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << efficienctMethod(array, n);
    return 0;
}

