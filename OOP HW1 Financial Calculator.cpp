#include <iostream>
#include<string>
#include<cmath>
using namespace std;
//Task function #1
void functionOne(int fVs[], int &count)
{
	cout << "Enter Present Value:" << endl;
	double pV;
	cin >> pV;

	cout << "Enter Interest rate:" << endl;
	double iR;
	cin >> iR;
	iR = 1 + iR;

	cout << "Enter number of Periods:" << endl;
	double nOp;
	cin >> nOp;

	double exp = pow(iR, nOp);
	double fV = exp * pV;

	cout << "The future value of your investment is: " << fV << endl;
	fVs[count] = fV;
}
//Task function #2
void functionTwo(int rOis[], int&count)
{
	cout << "Enter Total Revenue: " << endl;
	double tR;
	cin >> tR;

	cout << "Enter Total Expense:" << endl;
	double tE;
	cin >> tE;
	double nP = tR - tE;

	cout << "Enter Cost of Investment:" << endl;
	double cOI;
	cin >> cOI;

	double rOI = (nP - cOI) / cOI;
	cout << "Your Return on Investment is: " << rOI << endl;
	rOis[count] = rOI;
}
//Task function #3
void functionThree(int aTrs[], int&count)
{
	cout << "Enter Current Assets: " << endl;
	double cA;
	cin >> cA;

	cout << "Enter Current Liabilities: " << endl;
	double cL;
	cin >> cL;

	cout << "Enter Inventory: " << endl;
	double inv;
	cin >> inv;

	double aTR = (cA - inv) / cL;
	cout << "Your Acid Test Ratio is: " << aTR << endl;
	aTrs[count] = aTR;
	count++;
}
//Task function #4
void functionFour(int fVs[], int rOis[], int aTrs[], int &count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "Your future value was: " << fVs[i] << endl;
		cout << "Your Return On Investment was: " << rOis[i] << endl;
		cout << "Your Acid Test Ratio was: " << aTrs[i] << endl;
		cout << endl;
	}
}
// Main function
int main()
{
	int fVs[100];
	int rOis[100];
	int aTrs[100];
	int count = 0;

	while (true)
	{
		//Menu
		cout << "Welcome to financial calculator v3k!" << endl;
		cout << "What formula would you like to calculate?" << endl;
		cout << "1- Future Value" << endl;
		cout << "2- Return On Investment" << endl;
		cout << "3- Acid Test Ratio" << endl;
		cout << "4- Print Output" << endl;
		cout << "0- exit" << endl;		

		int choice;
		cin >> choice;

		//Future Value
		if (choice == 1)
		{
			functionOne(fVs, count);
		}

		//Return On Investment
		else if (choice == 2)
		{
			functionTwo(rOis, count);
		}

		//Acid Test Ratio
		else if (choice == 3)
		{
			functionThree(aTrs, count);
		}

		//Print Output
		else if (choice == 4)
		{
			functionFour(fVs, rOis, aTrs, count);
		}

		//Exit
		else if (choice == 0)
		{
			cout << "Thank you for using financial calculator v3k! " << endl;
			break;
		}

	}

	system("pause");
	return 0;
}