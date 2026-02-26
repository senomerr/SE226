#include <iostream>
using namespace std;
int main() {
    int total_seconds, hours, minutes, seconds;
    cout << "Enter a total number of seconds: ";
    cin >> total_seconds;
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;
    cout << total_seconds << " seconds is " << hours << " hours, "
         << minutes << " minutes, and " << seconds << " seconds." << endl;
    return 0;
}
