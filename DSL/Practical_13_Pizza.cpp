#include<iostream>

class PizzaParlor {
private:
    int front, rear, orders[5];

public:
    PizzaParlor() : front(-1), rear(-1) {}

    bool isFull() {
        return (front == 0 && rear == 4) || (front == rear + 1);
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    void addOrder() {
        if (!isFull()) {
            std::cout << "\nEnter the Pizza ID: ";
            if (isEmpty()) {
                front = rear = 0;
                std::cin >> orders[rear];
            } else {
                rear = (rear + 1) % 5;
                std::cin >> orders[rear];
            }

            char choice;
            std::cout << "Do you want to add another order? (y/n): ";
            std::cin >> choice;

            if (choice == 'y' || choice == 'Y') {
                addOrder();
            }
        } else {
            std::cout << "\nOrders are full.";
        }
    }

    void serveOrder() {
        if (!isEmpty()) {
            if (front == rear) {
                std::cout << "\nOrder served is: " << orders[front];
                front = rear = -1;
            } else {
                std::cout << "\nOrder served is: " << orders[front];
                front = (front + 1) % 5;
            }
        } else {
            std::cout << "\nOrders are empty.";
        }
    }

    void displayOrders() {
        if (!isEmpty()) {
            int i = front;
            std::cout << "\nCurrent orders: ";
            do {
                std::cout << orders[i] << " <- ";
                i = (i + 1) % 5;
            } while (i != rear);

            std::cout << orders[rear];
        } else {
            std::cout << "\nOrders are empty.";
        }
    }

    void checkMenu() {
        int choice;
        std::cout << "\n\n * * * * PIZZA PARLOUR * * * * \n\n";
        std::cout << "1. Add a Pizza\n";
        std::cout << "2. Display the Orders\n";
        std::cout << "3. Serve a Pizza\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addOrder();
                break;
            case 2:
                displayOrders();
                break;
            case 3:
                serveOrder();
                break;
            case 4:
                exit(0);
            default:
                std::cout << "Invalid choice.";
        }

        char continueChoice;
        std::cout << "\nDo you want to continue? (y/n): ";
        std::cin >> continueChoice;

        if (continueChoice == 'y' || continueChoice == 'Y') {
            checkMenu();
        }
    }
};

int main() {
    PizzaParlor pizzaParlor;
    pizzaParlor.checkMenu();

    return 0;
}
