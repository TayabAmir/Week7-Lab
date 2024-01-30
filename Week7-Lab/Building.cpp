#include<iostream>
using namespace std;
bool isPrime(int number);
int main(){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	int counter = 0;
	for(int i=1; i<=number;i++){
		if(isPrime(i)){
			cout << i << ", ";
			counter++;
		}
	}
	cout << endl;
	cout << counter;
}
bool isPrime(int number){
	if(number==0||number==1){
		return false;
	}
	for(int i = 2; i < number; i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}


