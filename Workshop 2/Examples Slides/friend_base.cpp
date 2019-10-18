#include <iostream>
#include <string>
using namespace std;

class LinkedList;
class Node {
   public:
      Node(int val) {
         this->val = val;
         next = NULL;
      };
      Node(int val, Node* next) {
         this->val = val;
         this->next = next;
      };
      friend LinkedList; // Declare class LinkedList as friend of Node
   private:
      int val;
      Node* next;
};

class LinkedList {
   public:
      LinkedList(Node* head) {
         this->head = head;
      };
      int search(int toFind) {  // returns index of found node, -1 if not found
         int index = 0;
         Node* temp = head;
         while (temp != NULL) {
            if (temp->val == toFind)
               return index;
            index++; 
            temp = temp->next;
         }
         return -1;
      };
   private:
      Node* head;
};

int main() {
   Node nodeOne(1);
   Node nodeTwo(2, &nodeOne);
   Node nodeThree(3, &nodeTwo);

   LinkedList list(&nodeThree);

   cout << list.search(1) << endl; // Print index of found integer
   cout << list.search(100) << endl; // Value 100 isn't in linked list 

   return 0;
}
