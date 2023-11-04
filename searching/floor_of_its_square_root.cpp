#include<bits/stdc++.h>
using namespace std;
int findsquareroot(int x){
    int low = 1, high = x, answer = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int res = (mid*mid);
        if(res == x){
            return mid;
        }
        // 1 2 3 4 5 6 7 8 9 10
        else if(res>x){
            high = mid-1;
        }
        else
        {
            low = mid+1;
            answer = mid;
        }
    }
    return answer;
}
int32_t main()
{
    int n;
    cin >> n;
    cout << findsquareroot(n);
    return 0;
}









// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int x;
//     cin >> x;
//     cout << (int)sqrt(x) << endl;
//     return 0;
// }
