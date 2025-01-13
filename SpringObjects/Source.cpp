#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/// <summary>
/// 
/// </summary>
/// <returns></returns>
int main() {

	string header = "<html>\n<head>\n</head>\n<body>\n";
	string footer = "</body></html>";

	//Open up the file for writing
	ofstream output;
	output.open("person.html");


	int num;


	cin >> num;
	
	//output << header << "<span>" << num << "</span>" << footer;
	output << header << num << footer;
	
	output.close();

	int b = AddsTwoNumber(12, 45);

	return 0;
}

int AddsTwoNumber(int a, int b) {
	return a + b;
}


/// <summary>
/// Adds one to the parameter
/// </summary>
/// <param name="num1">some number</param>
/// <returns>another number</returns>
int foo(int num1) {
	return num1 + 1;
}