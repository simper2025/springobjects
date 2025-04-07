#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vect = { 5,6,7,83,2,34 };

	int i = 0;
	for (int v : vect) {
		cout << "value: " << v << ", " << i << endl;
		i++;
	}

	vect.erase(vect.begin() + 1);



	return 0;
}