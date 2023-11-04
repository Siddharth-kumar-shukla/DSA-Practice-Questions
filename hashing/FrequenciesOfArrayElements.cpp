/* #include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)
// Method:- 1
void frequenciesOfArrayElements(int array[], int n){
    unordered_map<int, int>mpp;
    for(int i = 0; i < n; i++){
        mpp[array[i]]++;
    }
    for(auto it: mpp){
        cout << it.first << " " << it.second << endl;
    }
}

// Method:- 2 
void frequenciesOfArrayElements2(int array[], int n){
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        m[array[i]]++;
    }
    for(int i = 0; i < n; i++){
        if (m[array[i]] != -1){
            cout << array[i] << " " << m[array[i]] << endl;
            m[array[i]] = -1;
        }
    }
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
    frequenciesOfArrayElements(array, n);
    cout << "\n\n";
    frequenciesOfArrayElements2(array, n);
    cout << "\n\n";
}

int32_t main()
{
    decode();
    return 0;
} */



#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *pre;
    Node *next;

    Node(int n)
    {
        data = n;
        pre = NULL;
        next = NULL;
    }
};

void insert_at_end(Node *&head, int key){
    Node *num = new Node(key);

    if (head == NULL){
        head = num;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL){
        temp = temp->next;
    }

    temp->next = num;
    num->pre = temp;
}

void insert_at_front(Node *&head, int key){
    Node *num = new Node(key);

    if (head == NULL){
        head = num;
        return;
    }

    num->next = head;
    head->pre = num;
    head = num;
}

void to_delete_end(Node *&head){
    if (head->next == NULL){
        Node *to_dlt = head;
        head = NULL;
        delete to_dlt;
        return;
    }

    Node *prev = NULL;
    Node *curr = head;

    Node *nxt = head->next;

    while (curr != NULL){
        if (curr->next == NULL){
            Node *to_dlt = curr;
            prev->next = NULL;
            delete to_dlt;
            return;
        }

        prev = curr;
        curr = nxt;
        nxt = nxt->next;
    }
}

void to_delete_front(Node *&head){
    Node *to_dlt = head;
    head = head->next;
    head->pre = NULL;
    delete to_dlt;
}

void display(Node *head){
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


int main()
{
    Node *head = NULL;

    insert_at_end(head, 1);
    insert_at_end(head, 2);
    insert_at_end(head, 3);
    insert_at_front(head, 4);
    insert_at_front(head, 5);
    insert_at_front(head, 6);

    to_delete_front(head);
    to_delete_end(head);

    display(head);

    return 0;
}
