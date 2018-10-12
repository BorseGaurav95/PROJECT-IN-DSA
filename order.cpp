#include<iostream>
using namespace std;
#define MAX 10 

class queue {
    int order[MAX];
    static int rear;
    static int front;
public:

    int set_order(int item) {
        
        if (!or_full()) {
            if (front == -1) {
                rear = front = 0;
                order[rear] = item;
            } else {
                rear = (rear + 1) % MAX;

                order[rear] = item;
                return rear;
            }
        }
        else {
            cout << "order list is full :";
        }
    }

    

    int or_full() {
        if (front == (rear + 1) % MAX)
            return 1;
        else
            return 0;

    }

    int or_emp() {
        if (front == -1)
            return 1;
        else
            return 0;

    }

    int ready_or() {

        if (!or_emp()) {
            cout << "Order No. ready:" << order[front] << endl;
            front = (front + 1) % MAX;
        }
        cout << "****Thank you Visit Again***\n";
        cout << "------------------------------------------------------------------\n";
    }

    void display() {
        int j;
        j = front;
        cout<<"\nOrder in Queue are:";
        while (j != rear) {
            cout << " " << order[j] ;

            j = (j + 1) % MAX;
        }

        cout << " " << order[j] << endl;
        cout << "------------------------------------------------------------------\n";
    }









};

int queue::front = -1;
int queue::rear = -1;

int main() {
    int a, t, b;
    cout << "**********WELCOME TO $ PIZZAHUT $***************";
    char y;

    queue q;
    do {
        cout << "\n1.ADD ORDER :\n2.READY ORDER:\n3.DISPLAY ORDER IN QUEUE:\n4.Please Enter Your choise:";
        cin>>a;

        switch (a) {
            case 1:cout << "ENTER ORDER NO.";
                cin>>t;

                b = q.set_order(t);
                break;
            case 2:q.ready_or();
                break;
            case 3:q.display();
                break;


        }
        cout << "Enter 'Y' to continue";
        cin>>y;

    } while (y == 'Y' || y == 'y');





}