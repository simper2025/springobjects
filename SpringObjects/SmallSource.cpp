#include <iostream>

using namespace std;

static class Math2 {
private:
    static int counter;

public:
    static void SetCounter(int a) {
        counter = a;
    }

    static int Increment() {
        return ++counter;
    }
};

// Define the static member outside the class
int Math2::counter = 0;

int main() {
    Math2::SetCounter(1);
    Math2::Increment();
    auto b = Math2::Increment();

    std::cout << "b = " << b << std::endl;  

    int nextid = 3;
    int id = (nextid++);
    cout << "Id: " << id;

    return 0;
}
//
//    string filename = "notfile12.txt";
//    ofstream output;
//
//    output.open(filename);
//
//    //if (!output) {
//    //    cout << "File doesn't exist. Creating...";
//    //    output.open(filename, fstream::trunc);
//    //}
//
//    output << filename << endl;
//    output << "Informations\n";
// 
//    output.close();
//    return 0;
//}
