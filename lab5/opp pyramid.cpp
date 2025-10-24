#include <iostream>
using namespace std;
int main() {
    int row;
  cout << "Enter rows  ";
   cin>>row;
    for (int x = row ;x >= 1; --x)
     {
        
        for (int y = 1; y <= row - x; ++y) 
        {
            cout << " ";
        }
        for (int z = 1; z <= (2 * x - 1); ++z) 
        {
         cout << "*";
        }

       cout << "\n";
    }

    
}