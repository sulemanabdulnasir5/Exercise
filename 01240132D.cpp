#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double celsius;
	cout <<"Enter temperature in celsius: ";
	cin>> celsius;
	double fahrenheit = (celsius*1.8)+32;
	cout <<"Temperature in Fahrenheit:" <<fahrenheit <<endl;
	if (celsius < 0){
		cout <<"Freezing!" <<endl;
	}
	else if (celsius >30){
		cout << "Hot!" <<endl;
	}
	return 0;
}
