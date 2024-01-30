#include <iostream>
using namespace std;
void printTable(int num);
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	printTable(num);
}
void printTable(int num){
	for(int i = 1; i<=10 ; i++){
		cout << num << " X " << i << " = " << num * i << endl;
	}
}
