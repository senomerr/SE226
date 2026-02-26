#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    string student_id;
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "Hello " << name << "." << endl;
    cout << "What is your Student ID?" << endl;
    cin >> student_id;
    cout << "Your ID is " << student_id << "." << endl;
    return 0;
}
