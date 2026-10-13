#include <iostream>
# include <string>
using namespace std;
int main() {
    cout << "Menu: " << endl;
    cout << "1. Appetizers\n2. Mains\n3. Desserts\n4. Beverages" << endl;
    int choices[2];
    int Quantity;
    string food_choice;
    cout << "Enter the number corresponding to your choice: ";
    cin >> choices[0];
    cout << endl;
    if (choices[0] == 1) {
        food_choice = " Appetizer";
        cout << "Items in Category 1:" << endl;
        cout << "1. Appetizer 1\n2. Appetizer 2\n3. Appetizer 3" << endl;
        cout << "Enter your choice ";
        cin >> choices[1];
    }
    else if (choices[0] == 2) {
        food_choice = "Main";
        cout << "Items in Category 2:" << endl;
        cout << "1. Main 1\n2. Main 2\n3. Main 3" << endl;
        cout << "Enter your choice ";
        cin >> choices[1];
    }
    else if (choices[0] == 3) {
        food_choice = "Dessert";
        cout << "Items in Category 3:" << endl;
        cout << "1. Dessert 1\n2. Dessert 2\n3. Dessert 3" << endl;
        cout << "Enter your choice ";
        cin >> choices[1];
    }
    else if (choices[0] == 4) {
        food_choice = " Beverage";
        cout << "Items in Category 4:" << endl;
        cout << "1. Beverage 1\n2. Beverage 2\n3. Beverage 3" << endl;
        cout << "Enter your choice ";
        cin >> choices[1];
    }
    cout << "Enter quantity (1-10): ";
    cin >> Quantity;
    cout << endl;
    string delivery_option, address, payment_method;
    char choose_delivery_option;
    cout << "Choose delivery (D) or pickup (P): ";
    cin >> choose_delivery_option;
    if (choose_delivery_option == 'D' || choose_delivery_option == 'd') {
        cout << "Enter delivery address: ";
        cin.ignore();
        getline(cin, address);
        delivery_option = " Delivery";
    }
    else if (choose_delivery_option == 'P' || choose_delivery_option == 'p')
        delivery_option = "Pick-up";
    cout << endl;
    cout << "Choose payment method (Cash, Credit Card, Online Payment): ";
    cin.ignore();
    getline(cin, payment_method);

    cout << endl;
    cout << "Order Summary:" << endl;
    cout << food_choice << " " << choices[1] << " x " << Quantity << endl;
    cout << "Delivery Option: " << delivery_option << endl;
    if (choose_delivery_option == 'D' || choose_delivery_option == 'd') {
        cout << "Delivery Address: " << address << endl;
    }
    cout << "Payment Method: " << payment_method << endl;
    string confirmation;
    char yes_or_no;
    cout << "Confirm order (Y/N): ";
    cin >> yes_or_no;
    cout << endl;
    if (yes_or_no == 'Y' || yes_or_no == 'y')
        cout << "Order confirmed. Thank you!" << endl;
    else if (yes_or_no == 'N' || yes_or_no == 'n')
        cout << "Thanks for wasting both of out time" << endl;
    return 0;
}