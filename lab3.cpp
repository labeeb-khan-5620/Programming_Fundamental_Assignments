#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter your marks :";
    cin>>x;
    if(x>=90)
    cout<<"your grade is A";
else if(x>=80)
cout<< "your grade is B";
else if(x>=70)
cout<<"your grade is C";
else if (x>=60)
cout<<"your grade is D";
else
cout<< "your grade is F";
}
