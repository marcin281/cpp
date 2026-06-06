#include <iostream>

using namespace std;

struct Node {
    string task;
    Node* next;

    Node(string t) {
        task = t;
        next = nullptr;
    }
};

Node* head = nullptr;

void show_tasks() {
    Node* temp = head;
    if (head == nullptr) {
        cout<<"Task list is empty"<<endl;
    }
    else {
        while(temp != nullptr) {
            cout<<temp->task<<endl;
            temp = temp->next;
        }
    }
}
void add_task(string task) {
    Node* new_node = new Node(task);
    if(head == nullptr) {
        head = new_node;
    }
    else {
        Node* temp = head;

        while(temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = new_node;
    }
}
//void delete_task(){}
int main() {

    int choice=0;
    string task;

    while(choice != 3){
        cout<<"Enter your choice(1=add task, 2=show tasks, 3=delete task): ";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Enter task: ";
                cin>>task;
                add_task(task);
                break;
            case 2:
                show_tasks();
                break;
            case 3:
                //delete_task ();
                break;

        }
    }

}
