//Creating a dynamic size array for the Challenge #2
#include <iostream>

using namespace std;

int main()
{
	//Creating a dynamic size array
	int x;
	int* p;
	cout << "Give entries" << endl;

	cin >> x;
	p = new(nothrow)int[x];

	if (p == nullptr) {
		cout << "Error: memory is 404" << endl;
		delete[] p;
		return 1;
	}
	else {
		for (int i = 0; i < x; i++) {
			p[i] = 0;
			cout << p[i] << endl;
		}
	}

	cin >> x;

	return 0;
}

