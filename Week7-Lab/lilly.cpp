#include <iostream>
using namespace std;
int calculateMoney(int age, int washingMachinePrice, int toyPrice);
int main() {
    int age, washingMachinePrice, toyPrice;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> washingMachinePrice;
    cout << "Enter the price of each toy: ";
    cin >> toyPrice;
    int savings = calculateMoney(age, washingMachinePrice, toyPrice);
    if (savings >= 0) {
        cout << "YES!"<< endl << savings <<endl;
    }
	else {
        cout << "NO!" << endl;
    }
    return 0;
}
int calculateMoney(int age, int washingMachinePrice, int toyPrice){
    int moneySaved = 0;
    for (int birthday = 2; birthday <= age; birthday += 2) {
        moneySaved = moneySaved + (10 * birthday);
        moneySaved--;
    }
    for (int birthday = 1; birthday <= age; birthday += 2) {
        moneySaved = moneySaved + toyPrice;
    }
    if (moneySaved >= washingMachinePrice) {
        return moneySaved - washingMachinePrice;
    } else {
        return -1;
    }
}

