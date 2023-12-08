#include<iostream>
using namespace std;

class Node {
public:
    int seat_no;
    char status;
    Node* prev;
    Node* next;
};

class Ticket {
public:
    Node* head[10];
    Node* last[10];

    Ticket() {
        for (int i = 0; i < 10; i++) {
            head[i] = nullptr;
            last[i] = nullptr;
        }
    }

    void createBookingSystem();
    void display();
    void bookSeats();
    void cancelBooking();
};

void Ticket::createBookingSystem() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            Node* ptr = new Node();
            ptr->prev = ptr->next = nullptr;
            ptr->seat_no = j + 1;
            ptr->status = 'F';

            if (head[i] == nullptr) {
                head[i] = ptr;
                last[i] = ptr;
            } else {
                last[i]->next = ptr;
                ptr->prev = last[i];
                ptr->next = head[i];
                last[i] = ptr;
            }
        }
        head[i]->prev = last[i];
    }
}

void Ticket::display() {
    Node* temp;
    for (int i = 0; i < 10; i++) {
        temp = head[i];
        cout << "ROW NO" << " " << i + 1 << "->" << "\t";
        do {
            cout << temp->seat_no << "," << temp->status << "\t";
            temp = temp->next;
        } while (temp != head[i]);
        cout << "\n";
    }
}

void Ticket::bookSeats() {
    int row, seatno, count = 0;
    Node* temp;

    cout << "ENTER THE ROW NO: ";
    cin >> row;

    cout << "Enter the number of seats: ";
    cin >> seatno;

    temp = head[row - 1];

    do {
        if (temp->status == 'F') {
            count++;
        } else if (temp->status == 'B') {
            count = 0;
        }

        if (count == seatno) {
            temp = head[row - 1];

            if (temp->status != 'F') {
                while (temp->status != 'F') {
                    temp = temp->next;
                }
                for (int i = 0; i < seatno; i++) {
                    temp->status = 'B';
                    temp = temp->next;
                }
            } else {
                for (int i = 0; i < seatno; i++) {
                    temp->status = 'B';
                    temp = temp->next;
                }
            }
        }

        temp = temp->next;

    } while (temp != head[row - 1]);
}

void Ticket::cancelBooking() {
    int row, seatno, loc;
    Node* temp;

    cout << "Enter the row from where you want to cancel booking: ";
    cin >> row;

    cout << "Enter the location for canceling booking: ";
    cin >> loc;

    cout << "Enter the number of seats to be canceled: ";
    cin >> seatno;

    temp = head[row - 1];

    for (int i = 0; i < loc - 1; i++) {
        temp = temp->next;
    }

    for (int i = 0; i < seatno; i++) {
        temp->status = 'F';
        temp = temp->next;
    }
}

int main() {
    int choice;
    Ticket ticket;

    do {
        cout << "ENTER YOUR CHOICE:\n1. Create Booking System\n2. Display\n3. Book Seats\n4. Cancel Booking\n5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                ticket.createBookingSystem();
                ticket.display();
                break;
            case 2:
                ticket.display();
                break;
            case 3:
                ticket.bookSeats();
                ticket.display();
                break;
            case 4:
                ticket.cancelBooking();
                ticket.display();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
