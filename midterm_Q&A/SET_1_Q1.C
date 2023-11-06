#include <iostream>
using namespace std;

class WaterBill {
private:
    string consumername;
    int householdid;
    double unitused;
    double billamount;

public:
    WaterBill(int id, string name, double units) {
        householdid=id;
        consumername=name;
        unitused=units;
    }

    void calculateBill() {
        if (unitused<=50) {
            billamount=unitused*2;
        }
        else if (unitused<=100) {
            billamount=50*2+(unitused-50)*2.5;
        }
        else {
            billamount=50*2+50*2.5+(unitused-100)*3;
        }
    }

    void displayBill() {
        cout << "Household ID: " << householdid << endl;
        cout << "Consumer Name: " << consumername << endl;
        cout << "Units Used: " << unitused << endl;
        cout << "Water Bill Amount: Rs. " << billamount << endl;
        if (unitused>1000) {
            cout<<"YOU MAY PLEASE CHANGE TO THREE PHASE CONNECTION"<<endl;
        }
    }
};

int main() {
    int id;
    string name;
    double units;

    cout<<"Enter Household ID: \n";
    cin>>id;
    cout<<"Enter Consumer Name: \n";
    cin>>name;
    cout<<"Enter Units Used: \n";
    cin >> units;

    WaterBill bill(id, name, units);
    bill.calculateBill();
    bill.displayBill();

    return 0;
}