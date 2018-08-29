#include<iostream>
using namespace std;

	int main()
	{  
    int num, i, count = 0;
    cout << "Enter the number to be verified if prime or not : ";
    cin >> num;
    if (num == 0)
    {
        cout << num << " is not prime";
    }
    else   {
            for(i=2; i < num; i++)
                if (num % i == 0)
                    count++;
    }
    if (count > 1)
 	    cout <<  num << " is not prime.";
    else
        cout <<  num << " is prime.";
    return 0;
}
