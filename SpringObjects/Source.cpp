#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	string header = "<html><head></head><body>";
	string footer = "</body></html>";

	ofstream output;
	output.open("person.html");


	int num;

	cin >> num;
	
	//output << header << "<span>" << num << "</span>" << footer;
	output << header << num << footer;
	
	output.close();

	return 0;
}