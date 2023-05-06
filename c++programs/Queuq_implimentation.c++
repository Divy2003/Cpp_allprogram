#include <iostream>
using namespace std;

int ar[10]; 
int n = 10;
int front = - 1;
int rear = - 1;

void enqueue(int item) {

    if (rear == n - 1){
        cout<<"Overflow!"<<endl;
        return;
    }
    else {
       
        if (front == - 1 && rear==-1){ 
            front = 0;
            rear=0;
        }
        else{
            rear++;
        }
   
        ar[rear] = item;
        cout<<"Element inserted"<<endl;
    }
}

void dequeue() {

    if (front == - 1 && rear==-1)  {//if (front == - 1 || front > rear) 
        cout<<"Underflow!";
        return;
    }
    else {
        int item=ar[front];

        cout<<"Element deleted from queue is : "<< item <<endl;
       
        if(front == rear)  {  
            front = -1;  
            rear = -1;  
            return;
        }
        else{
           
            front++;
        }
   }
}

void display() {

    if (front == - 1){
       
        cout<<"Queue is empty"<<endl;
        return;
    }
    else {

        cout<<"Elements are : ";
        for (int i = front; i <= rear; i++)
            cout<<ar[i]<<" ";
        cout<<endl;
   }
}

int main() {
    int choice;

    cout<<"1: Inserting element to queue(enqueue)"<<endl;
    cout<<"2: Deleting element from queue(dequeue)"<<endl;
    cout<<"3: Display front element of queue"<<endl;
    cout<<"4: Exit"<<endl;
    do {
       
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        switch (choice) {
            case 1: {
                cout<<"enter element to be inserted:"<<endl;
                int item;
                cin>>item;
                enqueue(item);
                break;
            }
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: cout<<"Exit"<<endl;
                break;
            default: cout<<"Invalid choice"<<endl;
        }
    } while(choice!=4);
    return 0;
}