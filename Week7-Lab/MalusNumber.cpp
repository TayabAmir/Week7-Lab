#include <iostream>
#include<cmath>
using namespace std;
bool isMalus(int num);
main ()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << isMalus(num);
}

bool isMalus(int num)
{	
	int counter = 0;
	int rem = 0;
	int digit = 0;
	int sum = 0;
	int number = num;
	int numb = num;
	while(number > 0){
		number = number / 10;
		counter++;
	}	
	while(numb>0){
		rem = numb % 10;
		digit  = pow(rem,counter);
		sum = sum + digit;
		numb = numb / 10;
		counter--;
	}
	if(sum == num){
		return true;
	}
	else{
		return false;
	}
}
