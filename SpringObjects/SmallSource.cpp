#include <iostream>
#include <vector>
#include <algorithm>  // for std::sort
#include <functional>
#include "Swordsman.h"
#include "Coordinate.h"

using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // Constructor to initialize the rectangle
    Rectangle(int w, int h) : width(w), height(h) {}

    // Getter for width
    int GetWidth() const { return width; }

    // Getter for height
    int GetHeight() const { return height; }

    // Setter for width
    void SetWidth(int w) { width = w; }

    // Setter for height
    void SetHeight(int h) { height = h; }

    // Method to calculate the area of the rectangle
    double CalculateArea() const {
        return static_cast<double>(width) * height;
    }

    // Method to calculate the perimeter of the rectangle
    double CalculatePerimeter() const {
        return 2 * (width + height);
    }

    // Method to draw the rectangle on a coordinate system
    void Draw(int x, int y) const {
        for (int i = 0; i < width; ++i) {
            for (int j = 0; j < height; ++j) {
                std::cout << '#';
            }
            std::cout << std::endl;
        }

        // Draw the top border
        for (int i = 0; i < width + 2; ++i) {
            std::cout << '#';
        }
        std::cout << std::endl;

        // Draw the bottom border
        for (int i = 0; i < width + 2; ++i) {
            std::cout << '#';
        }
        std::cout << std::endl;

        // Print coordinates of top-left and bottom-right corners
        std::cout << "Top-left corner: (" << x << ", " << y + height << ")" << std::endl;
        std::cout << "Bottom-right corner: (" << x + width << ", " << y << ")" << std::endl;

        // Clear the console to draw a new rectangle
        system("cls");
    }
};

void printRectangle(Rectangle& r) {
    cout << "Height: " << r.GetHeight() << ", Width: " << r.GetWidth()
        << ", Area: " << r.CalculateArea() << endl;
}

int main() {
    
    auto i = 12;
    auto b = 3.14;

    //i = "hello";
    
    vector<Rectangle> rectangles;

    Rectangle rect1(10, 15);
    rectangles.push_back(rect1);

    Rectangle rect2(20, 30);
    rectangles.push_back(rect2);

    Rectangle rect3(5, 10);
    rectangles.push_back(rect3);

    Rectangle rect4(15, 25);
    rectangles.push_back(rect4);

    Rectangle rect5(8, 18);
    rectangles.push_back(rect5);

    Rectangle rect6(12, 22);
    rectangles.push_back(rect6);

    Rectangle rect7(25, 35);
    rectangles.push_back(rect7);

    Rectangle rect8(10, 10);
    rectangles.push_back(rect8);

    auto it2 = std::find_if(rectangles.begin(), rectangles.end(), 
        [](const auto& item) {
        return item.GetWidth() == 25;  // Replace with your matching condition
        }
    );

    if (it2 != rectangles.end()) {
        Rectangle item = *it2;
        std::cout << "Found item: " << item.GetWidth() << std::endl;
    }
    else {
        std::cout << "Item not found." << std::endl;
    }


    auto rect = std::remove_if(rectangles.begin(), rectangles.end(),
        [](Rectangle r) { return r.GetHeight() != 10; });
    rectangles.erase(rect, rectangles.end());

    std::for_each(rectangles.begin(), rectangles.end(), printRectangle);


    std::vector<int> numbers = { 5, 2, 9, 1, 5, 6 };

    auto it = std::remove_if(numbers.begin(), numbers.end(),
        [](int num) { return num %3 ==0; });
    numbers.erase(it, numbers.end());

    // Output the sorted vector
    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
