#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CustomerDetails {
private:
    string name;
    string address;
    string email;
    int age;
    char gender;
    long long int AadharCard;

public:
    void addCustomerDetails() {
        cout << "Enter customer name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter customer address: ";
        getline(cin, address);

        cout << "Enter customer email: ";
        cin >> email;

        cout << "Enter the age: ";
        cin >> age;

        cout << "Enter the gender(M/F): ";
        cin >> gender;

        cout << "Enter the AadharCard number: ";
        cin >> AadharCard;
    }

    void displayCustomerDetails() {
        cout << "Customer Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Email: " << email << endl;
    }
};

class TicketBooking {
public:
    void bookTicket() {
        cout << "Ticket booked successfully!" << endl;
    }
};

class TicketAndCharges {
public:
    void calculateCharges() {
        cout << "Charges calculated successfully!" << endl;
    }
};

class DisplayDatabase {
public:
    void showData() {
        cout << "Displaying database..." << endl;
    }
};

class CancelTicket {
public:
    void cancel() {
        cout << "Ticket canceled successfully!" << endl;
    }
};

class ECateringDatabase {
public:
    void viewMenu() {
        cout << "Viewing E-catering menu..." << endl;
    }
};

int main() {
    int choice;
    CustomerDetails customer;
    TicketBooking ticketBooking;
    TicketAndCharges ticketCharges;
    DisplayDatabase displayDB;
    CancelTicket cancelTicket;
    ECateringDatabase eCateringDB;

    cout << "To enter the customer Details:" << endl;
    cout << "To book ticket" << endl;
    cout << "To show ticket charges" << endl;
    cout << "To display Database" <<endl;
    cout << "To cancel ticket" << endl;
    cout << "To show eCatering database" << endl;

    while (true) {
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                customer.addCustomerDetails();
                break;
            case 2:
                ticketBooking.bookTicket();
                break;
            case 3:
                ticketCharges.calculateCharges();
                break;
            case 4:
                displayDB.showData();
                break;
            case 5:
                cancelTicket.cancel();
                break;
            case 6:
                eCateringDB.viewMenu();
                break;
            case 7:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}
