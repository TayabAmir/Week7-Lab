#include <iostream>
using namespace std;
int totalDigits(int number);
int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	cout << "Total number of digits: " << totalDigits(number);
}
int totalDigits(int number){
	int sum = 1;
	while(number/10 > 0){
		number = number/10;
		sum++;
	}
	return sum;
}

	


