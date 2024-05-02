#include <iostream>
#include <cmath>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
    int x1, x2, y1, y2;

    std::cout << "Enter the value of x1: ";
    std::cin >> x1;

    std::cout << "Enter the value of x2: ";
    std::cin >> x2;

    std::cout << "Enter the value of y1: ";
    std::cin >> y1;

    std::cout << "Enter the value of y2: ";
    std::cin >> y2;

    double dist = distance(x1, y1, x2, y2);

    std::cout << "The distance between point 1 and point 2 is " << dist << std::endl;

    return 0;
}