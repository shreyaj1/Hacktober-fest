#include <iostream>
#include <conio.h>

using namespace std; 

int main()
{

double r;
double Keliling;
double Luas;

cout<<"\t\t\tMENGHITUNG KELILING DAN LUAS Lingkaran"<<endl;

cout<<"\t Masukkan jari_jari        : ";
cin>>r;

cout<<"\=========================="<<endl;
Keliling=2*3.14*r;
cout<<"Keliling : "<<Keliling<<endl;
Luas=3.14*r*r ;
cout<<"Luas     : "<<Luas<<endl;

            getche();
}