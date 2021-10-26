#include <iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "=========================================================================" << endl;
	cout << "================== Name	: Yusril	=================" << endl;
	cout << "================== Github		: https://github.com/yysrll 		=================" << endl;
	cout << "=========================================================================\n" << endl;
	
		
	A:
	cout << "Enter a number: ";
	cin >> a;
	if (a==0)
	cout << "Number " << a << " is the number ZERO";
	else if (a>0)
	{
		if (a%2==0)
		cout << "Number " << a << " is a Positive Even number";
		else if (a%2!=0)
		cout << "Number " << a << " is a Positive Odd number";
	}
	else if (a<0)
	{
		if (a%2==0)
		cout << "Number " << a << " is a negative even number";
		else if (a%2!=0)
		cout << "Number " << a << " is a negative odd number";
	}
	char Lanjut;
	b:
	cout << "\nTry Again (Y/N)?";
	cin >> Lanjut;
	if (Lanjut=='Y')
	goto A;
	else if (Lanjut=='N')
	{
	goto Exit;
	}
	else if (Lanjut!='Y/N')
	{
	cout << "Can only answer with Y or N"; goto b;
	}
	Exit : cout << "Thank You. Have a nice day :)" ;
	return 0;
}
