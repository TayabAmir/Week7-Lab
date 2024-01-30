#include <iostream>
using namespace std;
int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2, int gcd);
int main(){
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	int gcd = calculateGCD(num1, num2);
	cout << "GCD: " << gcd << endl;
	cout << "LCM: " << calculateLCM(num1, num2, gcd);
	
}
int calculateGCD(int num1, int num2){
	int remainder=1;
	if (num1 > num2){
		while(remainder>0){
		remainder = num1%num2;
		num1 = num2;
		num2 = remainder;
		}
		return num1;
	}
	if (num1 < num2){
		while(remainder>0){
		remainder = num2%num1;
		num2 = num1;
		num1 = remainder;
		}
		return num2;
	}
}
int calculateLCM(int num1, int num2, int gcd){
	return (num1 * num2)/gcd;
}

