// int hoarePartition(int array[], int start, int end){
//     int pivot = array[start];//5
//     int i = start-1;
//     int j = end + 1;
//     while(true){
//         do{
//             i++;
//         }while(array[i] < pivot);
//         do{
//             j--;
//         }while(array[j] > pivot);
//         if(i>=j){
//             return j;
//         }
//         swap(array[i], array[j]);
//     }

// }

// int lumotoPartition(int array[], int start, int end){
//     int pivot = array[end];
//     int i = start-1;
//     for(int j = start; j < end; j++){
//         if(array[j] < pivot){
//             i++;
//             swap(array[i], array[j]);
//         }
//     }
//     swap(array[i+1], array[end]);
//     return i+1;
// }

/* 
_ 5 3 8 4 2 7 1 10 _
  |           |

_ 1 3 8 4 2 7 5 10 _
      |   |

_ 1 3 2 4 8 7 5 10 _

sort(array, array+n);
*/


// #include<bits/stdc++.h>
// using namespace std;

// #define speedy ios_base::sync_with_stdio(0);cin.tie(0)

// // Modified Hoare's Partition Algorithm:

// int partition(int array[], int start, int end){
//     int pivot = array[start];
//     int i = start;
//     while(start<=end){
//         if(array[start] <= pivot){
//             start++;
//         }
//         else{
//             swap(array[start], array[end--]);
//         }
//     }
//     swap(array[i], array[end]);
//     return end;
// }

// void quickSort(int array[], int start, int end){
//     if(start<=end){
//         int p = partition(array, start, end);
//         quickSort(array, start, p-1);
//         quickSort(array, p+1, end);
//     }
// }

// void decode()
// {
//     speedy;
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i = 0; i < n; i++){
//         cin >> array[i];
//     }
//     quickSort(array, 0, n-1);
//     for(auto it : array){
//         cout << it << " ";
//     }
// }

// int32_t main()
// {
//     decode();
//     return 0;
// }

// Prime Numbers between range:
/* #include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    int m, n;
    cin >> m >> n;

    for(int i = m; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
*/


/* 
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)
// { 1, 2, 3, -4, 8 }
// Kadane's algorithm:
int kadaneAlgorithm(int array[], int n){
    int maxSum = array[0];
    int sum = array[0];
    for(int i = 1; i < n; i++){
        sum = max((sum + array[i]), array[i]);
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
// longest odd-even subarray:
int longest_odd_even_subarray(int array[], int n){
    int res = 1;
    int count = 1;

    for(int i = 1; i < n; i++){
        if((array[i]%2==0 && array[i-1]%2!=0) || (array[i]%2!=0 && array[i-1]%2==0)){
            count++;
            res = max(count, res);
        }
        else{
            count = 1;
        }
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
    cout << kadaneAlgorithm(array, n) << endl;
    cout << longest_odd_even_subarray(array, n) << endl;
}
int32_t main()
{
    decode();
    return 0;
}
 */


/* 
// maximum subarray sum:
//  Method-2 Kadane's Algorithm:
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)
// 1 -2 3 5 -9 9
int maxiSubarraySUm(int array[], int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=array[i];
        if (sum > maxSum){
            maxSum = sum;
        }
        if (sum < 0){
            sum = 0;
        }
    }
    return maxSum;
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
    cout << maxiSubarraySUm(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
 */



/*
8 -4 3 -5 4
normal = normalSubarraySum = 8
arraySum = 6

Invert:
-8 4 -3 5 -4
normalSubarraySum = 6
maximumCircularSubarraySum =
arraySum + normalSubarraySum = 6+6 = 12

// res = max(maximumCircularSubarraySum, normal);
 */

/* 
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)


int normalSubarraySum(int array[], int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=array[i];
        if (sum > maxSum){
            maxSum = sum;
        }
        if (sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}

int totalSubarraySum(int array[], int n){
    int normal = normalSubarraySum(array, n);
    if(normal < 0){
        return normal;
    }
    int arraySum = 0;
    for(int i = 0; i < n; i++){
        arraySum += array[i];
        array[i] = -array[i]; // inverting the array elements
    }
    int maximumCircularSubarraySum = arraySum + normalSubarraySum(array, n);
    int res = max(normal, maximumCircularSubarraySum);
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
    cout << totalSubarraySum(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
 */

/* 

// 14
#include<bits/stdc++.h>
using namespace std;

double ruchika(int a){
    double fact = 1;
    for(double i = 1; i <= a; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    double n;
    cin >> n;
    double sum = 0;
    for(double i = 1; i <=n; i++){
        sum += 2/ruchika(i);
    }
    cout << sum << endl;
    return 0;
}
*/


// (2/(1*1)) + (2/(2*2)) + (2/(3*3*3)) + (2/(4*4*4*4)) + ... + (2/(n*n*...*n)).
// 2 + 2/4

// Question 15:
/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    double sum = 0;
    for(double i = 1; i <= n; i++){
        sum += 2/pow(i, i);
    }
    cout << sum << endl;
    return 0;
}
 */

// Kadane's Algorithm: 
// Method-2:
// 1 -3 4 2 -6 9
/* 
#include<bits/stdc++.h>
using namespace std;
#define speedy ios_base::sync_with_stdio(0);cin.tie(0)
int maximumSubarraySum(int array[], int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += array[i];
        if(sum > maxSum) {
            maxSum = sum;//9
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxSum;
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
    cout << maximumSubarraySum(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
 */



/*
MAximum circularSubarraySum
8 -4 3 -5 4
normal = normalSubarraySum = 8

ArraySum = 6;

Invert array elements:
-8 4 -3 5 -4

normalSubarraySum = 6;

circularSubarraySum = (ArraySum + normalSubarraySum) = 12

res = max(circularSubarraySum, normal);
res = 12;

*/
/* 
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int normalSubarraySum(int array[], int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += array[i];
        if(sum > maxSum){
            maxSum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    } 
    return maxSum;
}

int totalSubarraySum(int array[], int n){
    int normal = normalSubarraySum(array, n);
    if(normal < 0){
        return normal;
    }
    int arraySum = 0;
    for(int i = 0; i < n; i++){
        arraySum += array[i];
        array[i] = -array[i];
    }
    int circularSubarraySum = arraySum + normalSubarraySum(array, n);
    int res = max(circularSubarraySum, normal);
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
    cout << totalSubarraySum(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
 */

// x*x2*x3*x4*............................xn (N terms)

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int x;
//     cin >> x;
//     int ans = 1;
//     for(int i = 1; i <= n; i++){
//         ans *= pow(x, i);
//     }
//     cout << ans << endl;
//     return 0;
// }


// Question 11:
// #include<bits/stdc++.h>
// using namespace std;

// double fact(int n){
//     double factorial = 1;
//     for(double i = 1; i <= n; i++){
//         factorial *= i;
//     }
//     return factorial;
// }

// int main()
// {
//     double x, n;
//     cin >> x >> n;
//     double ans = 1;
//     for(double i = 1; i <= n; i++){
//         ans *= pow(x, i)/fact(i);
//     }
//     cout << ans << endl;
//     return 0;
// }
