#include<bits/stdc++.h>
using namespace std;

// using left-shift operator
bool method1(int n, int k){
    if((n&(1<<(k-1)))!=0){
        return true;
    }
    return false;
}

// using right-shift operator
bool method2(int n, int k){
    if(((n>>(k-1))&1)==1){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    return 0;
}
