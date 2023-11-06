#include <iostream>
using namespace std;

class PhoneBill {
private:
    string customername;
    int customerid;
    int calls;
    double billval;

public:
    PhoneBill(int id, string name, int callcount){
        customerid=id;
        customername=name;
        calls=callcount;
    }
    void calculateBill() {
        if (calls<=100) {
            billval=200;
        } else if (calls<=150) {
            billval=200+(calls-100)*0.60;
        } else {
            billval=200.0+50*0.60+(calls-150)*0.40;
        }
    }

    void displayBill() {
        cout << "CUSTOMER ID: " << customerid << " \nCUSTOMER NAME: " << customername << "\nNUMBER OF CALLS: " << calls << endl;
        cout << "Bill Amount: Rs. " << billval << endl;
        if (calls > 500) {
            cout << "YOU MAY PLEASE CHANGE TO MOBILE CONNECTION" << endl;
        }
    }
};

int main() {
    int id, callcount;
    string name;

    cout << "Enter Customer ID: \n";
    cin >> id;
    cout << "Enter Customer Name: \n";
    cin >> name;
    cout << "Enter Number of Calls: \n";
    cin >> callcount;

    PhoneBill bill(id, name, callcount);
    bill.calculateBill();
    bill.displayBill();

    return 0;
}