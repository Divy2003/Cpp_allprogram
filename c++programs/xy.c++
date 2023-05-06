#include <iostream>
using namespace std;

int queue[5], n = 5, front = -1, rear = -1;

void Insert() {
   int val;
   if ((front == 0 && rear == n-1) || (front == rear+1))
      cout << "Queue Overflow" << endl;
   else {
      cout << "Insert the element in queue: " << endl;
      cin >> val;
      if (front == -1) {
         front = 0;
         rear = 0;
      } else {
         if (rear == n-1)
            rear = 0;
         else
            rear++;
      }
      queue[rear] = val;
   }
}

void Delete() {
   if (front == -1) {
      cout << "Queue Underflow" << endl;
      return;
   }
   cout << "Element deleted from queue is: " << queue[front] << endl;
   if (front == rear) {
      front = -1;
      rear = -1;
   } else {
      if (front == n-1)
         front = 0;
      else
         front++;
   }
}

void Display() {
   if (front == -1)
      cout << "Queue is empty" << endl;
   else {
      cout << "Queue elements are: ";
      if (rear >= front) {
         for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
      } else {
         for (int i = front; i < n; i++)
            cout << queue[i] << " ";
         for (int i = 0; i <= rear; i++)
            cout << queue[i] << " ";
      }
      cout << endl;
   }
}

int main() {
   int ch;
   cout << "1) Insert element to queue" << endl;
   cout << "2) Delete element from queue" << endl;
   cout << "3) Display all the elements of queue" << endl;
   cout << "4) Exit" << endl;
   do {
      cout << "Enter your choice: " << endl;
      cin >> ch;
      switch (ch) {
         case 1:
            Insert();
            break;
         case 2:
            Delete();
            break;
         case 3:
            Display();
            break;
         case 4:
            cout << "Exit" << endl;
            break;
         default:
            cout << "Invalid choice" << endl;
      }
   } while (ch != 4);
   return 0;
}