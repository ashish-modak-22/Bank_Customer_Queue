#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
     string customer_name;
     Node *next_customer;
};

class Queue{
    public:
     Node *front_customer = NULL;
     Node *rear_customer = NULL;

      void enqueue_customer(string name){
          Node *newCustomer = new Node;
          newCustomer->customer_name = name;
          newCustomer->next_customer = NULL;

          if(front_customer == NULL){
            front_customer = rear_customer = newCustomer;
          }
          else{
            rear_customer->next_customer = newCustomer;
            rear_customer = newCustomer;
          }
      }

      void dequeue_customer(){
        Node *curr_customer = front_customer;
        front_customer = front_customer->next_customer;
        delete curr_customer;
      }

      void display_queue(){
        if(front_customer == NULL){
            cout << "\nThere is nobody in the queue\n";
        }
        Node *curr_customer = front_customer;
        while(curr_customer!=NULL){
            cout << curr_customer->customer_name << " <---> ";
            curr_customer = curr_customer->next_customer;
        }
        cout << "\n";
      }
};

int main(){
    Queue q;
    int choice;
    string name;

    while(1){
        cout << "\nEnter------\n'1' To add new customer to the queue\n'2' to dequeue customers\n'3' to display the queue of the customer\n'4' to exit the operation\n";
        cin >> choice;

             switch(choice){

                case 1: 
                        cout << "\nEnter the customer name: ";
                        cin.ignore();
                        getline(cin,name);
                        q.enqueue_customer(name);
                        cout << "\nCustomers are added successfully\n";
                        break;

                case 2: 
                        q.dequeue_customer();
                        cout << "\nDequeue Successfully\n";
                        break;

                case 3: 
                        q.display_queue();
                        break;

                case 4: 
                        return 0;
                        break;

                default: 
                         cout << "\nWrong input given! Plase try again!";
             }
    }
}