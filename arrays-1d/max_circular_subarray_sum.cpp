#include<bits/stdc++.h>
using namespace std;

int maxSum(int array[], int size){
    int result = array[0];
    int maxEnd = array[0];
    for(int i = 1; i < size; i++){
        maxEnd = max((maxEnd+array[i]), array[i]);
        result = max(result, maxEnd);
    }
    return result;
}

int overallsubarraysum(int array[], int size){
    int normalsubarraysum = maxSum(array, size);
    if(normalsubarraysum < 0){
        return normalsubarraysum;
    }
    int sum = 0;
    for(int i = 1; i < size; i++){
        sum+=array[i];
        array[i] = -array[i];
    }
    int maxCircularsubarraysum = sum + maxSum(array, size);
    return max(maxCircularsubarraysum, normalsubarraysum);
}
int32_t main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << overallsubarraysum(array, n);
    return 0;
}
