/*13. Write a Program to accept the truth values of variables x and y, and print the truth table of
the following logical operations:
a) Conjunction		 f) Exclusive NOR
b) Disjunction 		 g) Negation
c) Exclusive OR 	 h) NAND
d) Conditional 		 i) NOR
e) Bi-conditional  */

#include<iostream>
using namespace std;
int main()
{
    int x[4],y[4],dis[4],con[4],NOR[4],NAND[4],Cond[4],Bicond[4],Negx[4],Negy[4], XOR[4], XNOR[4];
    char ch;
    do
    {
        for(int i=0;i<4;i++)
        {
            cout<<"Enter the"<<" "<<(i+1)<<" "<<"value of x and y"<<endl;
            cin>>x[i]>>y[i];
            dis[i]=x[i]|y[i];
            con[i]=x[i]&y[i];
            NOR[i]=!dis[i];
            NAND[i]=!con[i];
            XOR[i]= x[i]*!y[i]|!x[i]*y[i];
            XNOR[i]= x[i]*y[i]|!x[i]*!y[i];
            Cond[i]=!x[i]|y[i];
            Bicond[i]=((!x[i]|y[i])&(!y[i]|x[i]));
            Negx[i]=!x[i];
            Negy[i]=!y[i];
        }

        cout<<"x |y  |or |and|NOR|NAND|Cond|Bicond|Negx|Negy| XOR| XNOR"<<endl;
        for(int i=0;i<4;i++)
        {
            cout<<x[i]<<" | "<<y[i]<<" | "<<dis[i]<<" | "<<con[i]<<" | "<<NOR[i]<<" | "<<NAND[i]<<"  | ";
            cout<<Cond[i]<<"  |"<<Bicond[i]<<"     |"<<Negx[i]<<"   | "<<Negy[i]<<"  | "<< XOR[i]<<"  | "<<XNOR[i]<<endl;
        }

        cout<<"do you want to continue(yes/no)\n";
        cin>>ch;
    }while(ch=='yes');

    return 0;
}

/*OUTPUT

Enter the 1 value of x and y
1 0
Enter the 2 value of x and y
0 1
Enter the 3 value of x and y
0 0
Enter the 4 value of x and y
1 1
x |y  |or |and|NOR|NAND|Cond|Bicond|Negx|Negy| XOR| XNOR
1 | 0 | 1 | 0 | 0 | 1  | 0  |0     |0   | 1  | 1  | 0
0 | 1 | 1 | 0 | 0 | 1  | 1  |0     |1   | 0  | 1  | 0
0 | 0 | 0 | 0 | 1 | 1  | 1  |1     |1   | 1  | 0  | 1
1 | 1 | 1 | 1 | 0 | 0  | 1  |1     |0   | 0  | 0  | 1
do you want to continue(yes/no)
no

*/
