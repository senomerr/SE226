#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1, y1, x2, y2, distance;
    cout << "Enter x1: "; cin >> x1;
    cout << "Enter y1: "; cin >> y1;
    cout << "Enter x2: "; cin >> x2;
    cout << "Enter y2: "; cin >> y2;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Distance = " << distance << endl;
    return 0;
}
