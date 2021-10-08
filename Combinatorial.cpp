#include <iostream>
using namespace std;
int combin(int, int);

int main(){
	int n,m, menu;
	
	
	while (1){
		int menu;
		cout << "Menu: \n";
		cout << "1. Combinatorial Count\n";
		cout << "2. Exit\n";
		
		cout << "\n\n Selct Menu (1/2) : ";
		cin >> menu;
			
		if (menu == 1) {
			cout << endl << "Please enter value n and m (n>=m): \n";
			cout << "enter value n: ";
			cin >> n;
			cout << "enter value m: ";
			cin >> m; 
			{
				if(m>n|n<0|m<0)
				{
					cout<<"Invalid input; try again\n";
				}
				else
				{
					int p = combin(n,m);
					cout<<"Combinatorial: " << p << endl;
					cout<< endl << "Please enter a new value : " << endl;
				}
			}	
		} else if (menu == 2) {
			return 0;
		}
		
	}
	return 0;
}
	int combin(int n, int m){
		int l,p;
		l = m;
		if(n-m<l)
		{
			l=n-m;
		}
		p=1;
		for(int k=1; k<=l;k++)
		{
			p=p*(n-k+1)/k; 
		}
	return p;
}
