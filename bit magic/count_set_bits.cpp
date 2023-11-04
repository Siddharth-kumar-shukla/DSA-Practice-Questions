// #include<bits/stdc++.h>
// using namespace std;

// int naiveCountSet(int n)
// {
//     int res = 0;
//     while(n>0){
//         res+=(n&1);
//         n= n>>1;
//     }
//     return res;
// }

// // Brian & Kerningam's Algorithm:
// // n = 40
// // 101000

// int algo(int n){
//     int res = 0;
//     while(n>0){
//         n = (n&(n-1));
//         res++;
//     }
//     return res;
// }

// // Naive implementation
// bool powerof2(int n){
//     if(n==0){
//         return false;
//     }
//     while(n!=1){
//         if(n%2!=0){
//             return false;
//         }
//         n/=2;
//     }
//     return true;
// }

// // Brian & Kerningam's Algorithm:
// bool isPow(int n){
//     if(n==0){
//         return false;
//     }
//     return ((n&(n-1))==0);
// }
// int32_t main()
// {
//     cout << naiveCountSet(5) << endl;
//     cout << algo(5) << endl;
//     cout << algo(40) << endl;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int countsetbit(int n){
//     int res = 0;
//     while(n>0){
//         res+=(n&1);
//         n = (n>>1);
//     }
//     return res;
// }

// // Brian & Kerningham Algorithm
// int effApproach(int n){
//     int res = 0;
//     while(n>0){
//         n = (n&(n-1));
//         res++;
//     }
//     return res;
// }
// bool powOf2(int n){
//     if(n==0){
//         return false;
//     }
//     while(n!=1){
//         if(n%2!=0){
//             return false;
//         }
//         n = n/2;
//     }
//     return true;
// }

// bool ispowOf2(int n){
//     if(n==0){
//         return false;
//     }
//     return ((n&(n-1))==0);
// }

// // we've to find only one odd occuring number in an array...
// // 7 6 6 7 7 
// // 7

// // 2 5 2 2 2 5 5
// // 5

// void oddocc(int array[], int n){
//     for(int i = 0; i < n; i++){
//         int count = 0;
//         for(int j = 0; j < n; j++){
//             if(array[i] == array[j]){
//                 count++;
//             }
//         }
//         if(count%2!=0){
//             cout << array[i] << endl;
//         }
//     }
// }
// /*
// XOR(^)
// x, y, z

// x^0 = x
// x^y = y^x
// x^(y^z) = (x^y)^z


// */

// int oddOcccu(int array[], int n){
//     int res = 0;
//     for(int i = 0; i < n; i++){
//         res = res^array[i];
//     }
//     return res;
// }

// // 4 3 4 3 3 5 5 2
// // 3 2

// // 2 5 2 9
// // 5 9

// void twooddocc(int array[], int n){
//     for(int i = 0; i < n; i++){
//         int count = 0;
//         for(int j = 0; j < n; j++){
//             if(array[i]==array[j]){
//                 count++;
//             }
//         }
//         if(count%2!=0){
//             cout << array[i] << endl;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int array[n];
//     for(int i=0; i<n; i++){
//         cin >> array[i];
//     }
//     twooddocc(array, n);
//     // cout << countsetbit(5) << endl;
//     // cout << effApproach(5) << endl;
//     return 0;
// }

// C++ program to Count set
// bits in an integer
#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

/* Program to test function countSetBits */
int main()
{
    int i = 9;
    cout << countSetBits(i);
    return 0;
}