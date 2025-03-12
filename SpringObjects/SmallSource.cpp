#include<iostream>
#include <vector>
using namespace std;


class FarmAnimal {
public:
	FarmAnimal() {
		cout << "FarmAnimal()\n";
	}
};

class Bird  {
private:
	string color;
	int height;
public: 
	Bird() {
		color = "Brown";
		height = 12;
		cout << "Bird()\n";
	}
	Bird(string c) :Bird() {
		color = c;
		cout << "Bird(string)\n";
	}
	string Speak() {
		return "tweat";
	}
};

class Duck :public Bird {

public:
	Duck() :Bird() {
		cout << "Duck()\n";
	}
	string Speak() {
		return "quack";
	}
	void Swim() {
		cout << "Duck goes swimming. \n";
	}
};

class FarmDuck :public FarmAnimal, public Duck {
public:
	FarmDuck() : FarmAnimal(), Duck() {
		cout << "FarmDuck()\n";
	}
};

int main() {
	
	vector<Bird*> flock;

	//cout << "make b1\n";
	Bird * b1 = new Bird("orange");
	cout << "make d1\n";
	Duck* d1 = new Duck();

	flock.push_back(b1);
	flock.push_back(d1);

	for (int i = 0; i < flock.size(); i++)
	{
		cout << flock[i]->Speak() << endl;
	}

	//cout << "make f1\n";
	//FarmDuck f1;

	//cout << "b1 says: " << b1.Speak() << endl;
	cout << "d1 says: " << d1->Speak() << endl;
	//cout << "f1 says: " << f1.Speak() << endl;
	//f1.Swim();
}

