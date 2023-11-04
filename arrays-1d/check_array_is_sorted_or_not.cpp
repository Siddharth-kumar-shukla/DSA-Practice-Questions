#include<bits/stdc++.h>
using namespace std;

bool check(int array[], int size){
    for(int i = 1; i < size; i++){
        if(array[i] < array[i-1]){
            return false;
        }
    }
    return true;
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
    cout << check(array, n);
    return 0;
}



/*
Find Pythagorean Triplets from Array

We have given an array that contains n integers. We need to find the set of Pythagorean triples from the given array.
Note: Pythagorean triplets condition: a^2 + b^2 = c^2.


*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int N;
//     cin >> N;
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> arr[i];
//     }
//     int a, b, c;
//     for (int i = 0; i < N - 2; i++) //select an element
//     {
//         for (int j = i + 1; j < N - 1; j++) //select an element in front of the considered element
//         {
//             for (int k = i + 2; k < N; k++) // this element will be one ahead of the previously selected element in the jus touter loop
//             {
//                 a = arr[i];
//                 b = arr[j];
//                 c = arr[k];
//                 if (a * a + b * b == c * c) // if the chosen elements satisfy the pythagoras theorem then simply print the three values.
//                     cout << a << "  " << b << "  " << c << endl;
//             }
//         }
//     }
//     return 0;
// }


