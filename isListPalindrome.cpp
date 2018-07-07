
// Given a singly linked list of integers, determine whether or not it's a palindrome.

#include<string>
#include<iostream>
#include<stack>
using namespace std;

template<typename T>
struct ListNode {
  ListNode(const T &v) : value(v), next(nullptr) {}
  T value;
  ListNode *next;
};

bool isListPalindrome(ListNode<int> * l) {
    stack<int> s;
    ListNode<int>* curr = l;
    while(curr != nullptr){
        s.push(curr->value);
        curr = curr->next;
    }


    ListNode<int>* curr2 = l;
    while(!s.empty()){
        while(curr2 != nullptr)
        {
            int compare = s.top();
            if(compare != curr2->value)
                return false;
            s.pop();
            curr2 = curr2->next;
        }
    }
    cerr << "list is palindrome" << endl;
    return true;
    
}

int main(){

    //Test case I was getting incorrect used below
    ListNode<int> *l1 = new ListNode<int>(1);
    ListNode<int> *l2 = new ListNode<int>(1000000000);
    ListNode<int> *l3 = new ListNode<int>(-1000000000);
    ListNode<int> *l4 = new ListNode<int>(-1000000000);
    ListNode<int> *l5 = new ListNode<int>(1000000000);
    ListNode<int> *l6 = new ListNode<int>(1);

    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = l6;
    l6->next = nullptr;

    isListPalindrome(l1);
    cout<< "END" << endl;


}