#include <iostream>

using namespace std;

int main()
	
  
{
    int n, t1 = 0, t2 = 1, nth = 0;

    cout << ".....Fibonacci Sequence..... "<<endl;

    cout << "Enter the number of terms: ";
    cin >> n;
    
    for (int i = 1; i <= n; ++i)
    {
    
        if(i == 1)
        {
            cout << " " << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nth = t1 + t2;
        t1 = t2;
        t2 = nth;
        
        cout << nth << " ";
    }
    
    for(int i = -1; i >=n; --i)
    {
        if (i >= -1)
        {
            cout<< "Please insert a positive integer" <<endl;
        }
        
    }
    
    return 0;
}
