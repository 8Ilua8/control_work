#include <iostream>
using namespace std;
void userOperation();
void isMounthPay(int* isLoanAmount, int* firstPay, int* isLoanTime);
int main() {
	userOperation();
	return 0;
}
void userOperation() {
	int isLoanAmount, firstPay, isLoanTime;
	cout << "Enter the loan amount, the amount of the down payment and the loan term" << endl;
	cin >> isLoanAmount >> firstPay >> isLoanTime;
	if (firstPay < isLoanAmount * 0.20);
	isMounthPay(&isLoanAmount, &firstPay, &isLoanTime);
}
void isMounthPay(int* isLoanAmount, int* firstPay, int* isLoanTime) {
	int isMounthPay;
	*isLoanTime *= 12;
	isMounthPay = (*isLoanAmount - *firstPay) / *isLoanTime;
	cout << isMounthPay;
}