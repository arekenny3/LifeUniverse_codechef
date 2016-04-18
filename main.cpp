#include <iostream>

using namespace std;
int main()
{
	int n;
	cout << "Put in any number below 100: " << endl;
	cin >> n;


	
	while ((n<100) && (n!=42))
	{
		cin >> n;
		cout << "\n \t" << endl;
	}
			
	return 0;
}
