#include <iostream>
using namespace std;
void generateFibonacci(int length);
int main(){
	int length;
	cout << "Enter the length of the Fibonacci series: ";
	cin >> length;
	generateFibonacci(length);
}
void generateFibonacci(int length){
	int num1 = 0, num2 = 1, sum = 0;
	cout << num1 << ", " << num2;
	for(int i = 1; i <= length - 2 ; i++){
		sum = num1 + num2;
		cout << ", " << sum;
		num1 = num2;
		num2 = sum;
	}
} 
