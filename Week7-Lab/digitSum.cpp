#include <iostream>
using namespace std;
int digitSum(int number);
int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Sum of digits: " << digitSum(number);
}
int digitSum(int number){
	int sum = 0;
	while(number/10 > 0){
		int num = number % 10;
		sum = sum + num;
		number = number / 10;
	}
	sum = sum + (number%10);
	return sum;
}
