#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
int main(){
	int number, digit;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter the digit to check: ";
	cin >> digit;
	cout << "Frequency: " << frequencyChecker(number,digit);
}
int frequencyChecker(int number, int digit){
	int f = 0;
	while(number/10 > 0){
		int num = number % 10;
		if (digit == num){
			f++;
		}
		number = number / 10;
		if(number == digit){
			f++;
		}
	}
return f;
}
