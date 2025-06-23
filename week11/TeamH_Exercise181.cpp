#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

struct IntNode {
  int data;
  IntNode *next;

  IntNode(int value) : data(value), next(nullptr) {}

  ~IntNode() {}
};

struct IntLinkedList {
  IntNode *head;
  int size;

  IntLinkedList() : head(nullptr), size(0) {}

  ~IntLinkedList() {
    IntNode *current = head;
    while (current != nullptr) {
      IntNode *nextNode = current->next;
      delete current;
      current = nextNode;
    }
    head = nullptr;
  }

  void insertInOrder(int value) {
    IntNode *newNode = new IntNode(value);

    if (head == nullptr || value < head->data) {
      newNode->next = head;
      head = newNode;
    }

    else {
      IntNode *current = head;
      while (current->next != nullptr && current->next->data < value) {
        current = current->next;
      }
      newNode->next = current->next;
      current->next = newNode;
    }
    size++;
  }
  int getSize() const {
    return size;
  }
};

int main() {
  srand(static_cast<unsigned int>(time(0)));

  IntLinkedList numbers;

  for (int i = 0; i < 25; ++i) {
    int num = rand() % 101;
    numbers.insertInOrder(num);
  }

  IntNode *current = numbers.head;

  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }

  cout << endl;

  int sum = 0;
  current = numbers.head;
  while (current != nullptr) {
    sum += current->data;
    current = current->next;
  }

  double average = 0.0;
  if (numbers.getSize() > 0.0) {
    average = static_cast<double>(sum) / numbers.getSize();
  }

  cout << "The sum of the elements is: " << sum << endl;
  cout << fixed << setprecision(2) << "The average of the elements is: " << average << endl;

  return 0;
}
