#include <iostream>
#include <stack>

struct Node {
  int data;
  Node* next;

  Node(int data) : data(data), next(NULL) {}
};

Node* multiplyTwoLists(Node* first, Node* second) {
  std::stack<int> firstStack;
  std::stack<int> secondStack;

  Node* current = first;
  while (current != NULL) {
    firstStack.push(current->data);
    current = current->next;
  }

  current = second;
  while (current != NULL) {
    secondStack.push(current->data);
    current = current->next;
  }

  int firstNum = 0;
  int secondNum = 0;
  int multiplier = 1;
  while (!firstStack.empty()) {
    firstNum += firstStack.top() * multiplier;
    multiplier *= 10;
    firstStack.pop();
  }

  multiplier = 1;
  while (!secondStack.empty()) {
    secondNum += secondStack.top() * multiplier;
    multiplier *= 10;
    secondStack.pop();
  }

  int result = firstNum * secondNum;
  Node* dummy = new Node(-1);
  Node* tail = dummy;

  if (result == 0) {
    tail->next = new Node(0);
    return dummy->next;
  }

  while (result != 0) {
    tail->next = new Node(result % 10);
    result /= 10;
    tail = tail->next;
  }

  return dummy->next;
}

void printList(Node* head) {
  Node* current = head;
  while (current != NULL) {
    std::cout << current->data << " ";
    current = current->next;
  }
  std::cout << std::endl;
}

int main() {
  Node* first = new Node(9);
  first->next = new Node(4);
  first->next->next = new Node(6);

  Node* second = new Node(8);
  second->next = new Node(4);

  Node* result = multiplyTwoLists(first, second);
  printList(result);

  return 0;
}
