
#include <iostream>
#include<cmath>
using namespace std;
bool isMalus(int i);
int averageMalus(int firstnum, int lastnum);
main ()
{
	int firstnum, lastnum;
	cout << "Enter the first number of range: ";
	cin >> firstnum;
	cout << "Enter the last number of range: ";
	cin >> lastnum;
	cout << averageMalus(firstnum,lastnum);
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

int averageMalus(int firstnum, int lastnum){
	int sum = 0;
	int counter = 0;
	for(int i = firstnum; i<=lastnum; i++){
		if(isMalus(i)){
			sum = sum + i;
			counter++;
		}
	}
	return sum / counter;
}
