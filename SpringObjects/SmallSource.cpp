#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream input;

	input.open("speech.txt");

	if (!input) {
		cout << "could not open that file\n";
	}
	cout << "I found the file!\n";

	vector<string> information;
	string line;

	while (getline(input, line)) {
	//while (input >> line) {
		cout << line << "|";
		information.push_back(line);
	}
	cout << endl;

	input.close();

	ofstream output;
	output.open("WriteHere.txt", std::ios_base::app);

	for (auto item : information) {
		output << item << endl;
	}

	output.close();

	return 0;
}