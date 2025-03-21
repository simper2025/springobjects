#include<iostream>
#include <vector>
#include <typeinfo>
using namespace std;


class FarmAnimal {
public:
	FarmAnimal() {
		cout << "FarmAnimal()\n";
	}
};

class Bird {
private:
	string color;
	int height;
public:
	Bird() {
		color = "Brown";
		height = 12;
		//cout << "Bird()\n";
	}
	Bird(string c) :Bird() {
		color = c;
		//cout << "Bird(string)\n";
	}

	virtual string Taxonomy() = 0;

	virtual string Speak() {
		return "tweet";
	}
};

class Rooster : public Bird {
	string Taxonomy() { return "Birdicus Roosterian"; }
};

class Duck :public Bird {
private:
	string duckOnly;
public:
	Duck() :Bird() {
		//cout << "Duck()\n";
		duckOnly = "yes";
	}
	//virtual string Speak() override {
	string Speak() {
		return "quack";
	}
	string Taxonomy() { return "Birdicus Breadis"; }
	void Swim() {
		cout << "Duck goes swimming. " << duckOnly << endl;
	}
};

class FarmDuck :public FarmAnimal, public Duck {
public:
	FarmDuck() : FarmAnimal(), Duck() {
		//cout << "FarmDuck()\n";
	}
	string Speak() { return "Hello"; }
};

int main() {

	vector<Bird*> flock;

	//cout << "make b1\n";
	//Bird * b1 = new Bird("orange");
	//cout << "make d1\n";
	Duck* d1 = new Duck();
	Bird* f1 = new FarmDuck();
	Bird* r1 = new Rooster();

	//flock.push_back(b1);
	flock.push_back(d1);
	flock.push_back(f1);
	flock.push_back(r1);


	for (int i = 0; i < flock.size(); i++)
	{
		Bird* tBird = flock[i];

		cout << typeid(*tBird).name() << ": ";
		cout << tBird->Speak() << endl;
		
		
		


		if (typeid(*tBird) == typeid(Duck)) {
			cout << "I am a Duck\n";
			Duck* tDuck = (Duck*) tBird;
			tDuck->Swim();
		}

	}

	Duck* tDuck = (Duck*)r1;
	tDuck->Swim();

	//cout << "make f1\n";
	//FarmDuck f1;

	//cout << "b1 says: " << b1.Speak() << endl;
	cout << "d1 says: " << d1->Speak() << endl;
	//cout << "f1 says: " << f1.Speak() << endl;
	//f1.Swim();

	for (int i = flock.size() - 1; i >= 0; i--)
	{
		if (flock[i]) {
			delete flock[i];
		}
		flock.pop_back();
	}

}

