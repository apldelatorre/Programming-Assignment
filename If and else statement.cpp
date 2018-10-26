#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x = 0, y = 0, z = 0, a = 10, b = 12, c = 15;
	cout << " Japanese Cake Shop \n\n" << " Flavors: \n";
	cout << " 1. Cheese = " << a << " pesos each \n" <<  " 2. Oreo = " << b << " pesos each \n" << " 3. Nutella = " << c << " pesos each \n\n";
	cout << "What flavor would you like to buy ? ";
	cin >> x;
	cout << "How many piece/s would you like to buy? ";
	cin >> y;
	
	{	
		if (x == 1)
 		{
			cout << " Total Amount: " << a * y << " pesos ";
		}

 		else if (x == 2)
 		{
	  		cout << " Total Amount: " << b * y << " pesos ";
		}

		else if (x == 3)
		{
	  		cout << " Total Amount: " << c * y << " pesos ";
		}
		
	cout << "\nHow much is your money? ";
	cin >> z;
			
		if (x == 1)
 		{
			cout << " Your Change: " << z - (a * y) << " pesos ";
		}

 		else if (x == 2)
 		{
			cout << " Your Change: " << z - (b * y) << " pesos ";
		}

		else if (x == 3)
		{
			cout << " Your Change: " << z - (c * y) << " pesos ";
		}
		else
		{
			cout << " \n\n\t\t INVALID TRANSACTION \n";
		}
	}
	
	cout << "\n Thank you for buying. Hope to see you again! ♡";    
	
 return 0;
}
