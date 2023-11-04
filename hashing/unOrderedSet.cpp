#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(50);
    s.insert(30);
    s.insert(100);
    s.insert(55);
    // printing the values of set.
    for(auto it = s.begin(); it != s.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
    // printing the values of set.
    for(auto it : s){
        cout << it << " ";
    }
    cout << endl;

    // checking the size of set.
    cout << s.size() << endl;

    // clearing all the elements of set.
    // s.clear();

    // erasing elements of set Method-1
    s.erase(30);

    // erasing elements of set Method-2
    auto it = s.find(10);
    s.erase(it);

    cout << endl;

    // erasing elements of set Method-2
    // s.erase(s.begin(), s.end());


    if(s.find(100) != s.end()){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }


    return 0;
}
