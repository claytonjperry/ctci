#include <climits>
#include <iostream>
using namespace std;

class Stack {
  struct Node {
    int data;
    Node* next;
  };
  Node* head = nullptr;
  int small = INT_MAX;
public:
  void push(int n){
    if(n < small) small = n;
    Node* newNode = new Node;
    newNode->data = n;
    if(head != nullptr) newNode->next = head;
    head = newNode;
  }
  void pop(){
    Node* top = head;
    head = top->next;
    delete top;
  }
  int top(){
    return head->data;
  }
  int min(){
    return small;
  }
  ~Stack(){
    Node* top = head;
    while(top != nullptr) {
      head = top->next;
      delete top;
      top = head;
    }
  }
};
int main() {
  Stack s;
  s.push(1);
  s.push(3);
  s.push(0);
  s.push(2);
  cout << s.min() << endl;
}
