#include <fstream>
#include <iostream>
#include <queue>
using namespace std;
int main() {
  ifstream file1("file1.txt");
  ifstream file2("file2.txt");

  if (!file1 || !file2) {
    cout << "Error opening one or both files." << endl;
  } else {
    queue<char> q1;
    queue<char> q2;
    char ch;

    // Read file1 into q1
    while (file1.get(ch)) {
      q1.push(ch);
    }

    // Read file2 into q2
    while (file2.get(ch)) {
      q2.push(ch);
    }

    // Compare the queues
    bool identical = true;

    while (!q1.empty() && !q2.empty() && identical) {
      if (q1.front() == q2.front()) {
        q1.pop();
        q2.pop();
      } else {
        identical = false;
      }
    }

    // If one queue still has characters left
    if (!q1.empty() || !q2.empty()) {
      identical = false;
    }

    if (identical) {
      cout << "The files are identical." << endl;
    }
    else {
      cout << "The files are not identical." << endl;
    }
    
    file1.close();
    file2.close();
  }
  return 0;
}
