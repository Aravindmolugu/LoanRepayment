//============================================================================
// Name        : LoanRepayment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;
class Loan{
public:
	int i,Payment_no=0;
	float Interest,Balance,Principal,totalInterest=0;
	void payment(float loanPrincipal,float InterestRate,float monthlyPayment){
		Payment_no=0;
		Balance = loanPrincipal ;
      cout <<"Payment\t\tAmount\t\t\t\tInterest\t\t\tPrincipal\t\t\tBalance"<<endl;
		while(Balance>monthlyPayment){
			Interest=((InterestRate/12)*Balance);
			totalInterest+=Interest;
			Principal=monthlyPayment-Interest;
			Balance=Balance-Principal;
			Payment_no++;
			cout<<Payment_no<<"\t\t"<<monthlyPayment<<"\t\t\t\t"<<Interest<<"\t\t\t\t"<<Principal<<"\t\t\t\t"<<Balance<<endl;
		}
		if(Balance<monthlyPayment && Balance>0){
			monthlyPayment=Balance;
			Interest=((InterestRate/12)*Balance);
			totalInterest+=Interest;
			Principal=monthlyPayment-Interest;
			Balance=Balance-Principal;
			Payment_no++;
			cout<<Payment_no<<"\t\t"<<monthlyPayment<<"\t\t\t\t"<<Interest<<"\t\t\t\t"<<Principal<<"\t\t\t\t"<<Balance<<endl;
			}
			cout<<"Total No.Of Payments:"<<Payment_no<<endl;
			cout<<"Total Interest paid: $"<<totalInterest<<endl<<endl;
	}
};
int main() {
	int i,n;
	Loan l;
	float loanPrincipal[20],InterestRate[20],monthlyPayment[20];
	cout<<"enter no of schedules"<<endl;
	cin>>n;
	cout<<"enter loan amount,Annual Interest rate,monthly Installment"<<endl;
	for(i=0;i<n;i++){
		cin>>loanPrincipal[i];
		cin>>InterestRate[i];
		cin>>monthlyPayment[i];
	}

	for(i=0;i<n;i++){
		l.payment(loanPrincipal[i],InterestRate[i],monthlyPayment[i]);
	}
}


