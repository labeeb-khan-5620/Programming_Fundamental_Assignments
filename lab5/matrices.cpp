#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout <<"enter the four elements of matrix 1";
    cin>>a>>b>>c>>d;
    int A,B,C,D;
    cout<<"enter the four elements of matrix 2";
    cin>>A>>B>>C>>D;
    int a1,b1,c1,d1;
    a1=(a*A)+(b*C);
    b1=(a*B)+(b*D);
    c1=(c*A)+(d*C);
    d1=(c*B)+(d*D);
    cout<<left<<setw(5)<<a1<<left<<setw(5)<<b1<<endl;
     cout<<left<<setw(5)<<c1<<left<<setw(5)<<d1<<endl;
}