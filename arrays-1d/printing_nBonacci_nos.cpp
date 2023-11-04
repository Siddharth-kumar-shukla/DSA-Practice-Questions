/*
We've to print first M N-bonacci number.
INPUT:
N = 3 M = 8

OUTPUT
9
0 0 1 1 2 4 8 15 29



9
0 0 1 1 2 4 8 15 29
3
8
*/

// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int size;
//     cin >> size;
//     int array[size];
//     for(int i = 0; i < size; i++){
//         cin >> array[i];
//     }

//     int n;
//     cin >> n;

//     int m;
//     cin >> m;

//     int current_sum = 0;
//     for(int i = 0; i < n; i++){
//         current_sum += array[i];
//     }
    
    
    
//     return 0;
// }



// CPP program print first M terms of N-bonacci series. 
// #include <bits/stdc++.h> 
// using namespace std; 

// void bonacciseries(long n, int m) 
// { 

// 	// Assuming m > n. 
// 	int a[m] = { 0 }; 
// 	a[n - 1] = 1; 
// 	a[n] = 1; 

// 	// Uses sliding window 
// 	for (int i = n + 1; i < m; i++) 
// 		a[i] = 2 * a[i - 1] - a[i - n - 1]; 

// 	// Printing result 
// 	for (int i = 0; i < m; i++) 
// 		cout << a[i] << " "; 
// } 

// // Driver's Code 
// int main() 
// { 
// 	int N = 5, M = 15; 
// 	bonacciseries(N, M); 
// 	return 0; 
// } 

