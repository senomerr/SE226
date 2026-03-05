#include <iostream>
#include <cmath>

using namespace std;

int main() {


    long long n1;
    cout << "Please enter a positive integer greater than 1:  ";
    cin >> n1;
    cout << endl;

    long long steps = 0;
    cout << n1;

    while (n1 > 1) {
        if (n1 % 2 == 0) {
            n1 = n1 / 2;
        } else {
            n1 = n1 * 3 + 1;
        }
        steps++;
        cout << " -> " << n1;
    }
    cout << "\nTotal steps: " << steps << "\n\n";


    int n2;
    cout << "Please enter a number between 10 and 100: ";
    cin >> n2;
    cout << endl;

    while (n2 < 10 || n2 > 100) {
        cout << "Invalid input. Please enter a number between 10 and 100:  ";
        cin >> n2;
        cout << endl;
    }

    int fizz_count = 0;
    int buzz_count = 0;
    int fizzbuzz_count = 0;

    for (int i = 1; i <= n2; i++) {
        if (i % 7 == 0) {
            cout << "(" << i << " is skipped)\n";
            continue;
        }

        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz\n";
            fizzbuzz_count++;
        } else if (i % 3 == 0) {
            cout << "Fizz\n";
            fizz_count++;
        } else if (i % 5 == 0) {
            cout << "Buzz\n";
            buzz_count++;
        } else {
            cout << i << "\n";
        }
    }

    cout << "--- Summary ---\n";
    cout << "Fizz count : " << fizz_count << "\n";
    cout << "Buzz count : " << buzz_count << "\n";
    cout << "FizzBuzz count: " << fizzbuzz_count << "\n\n";


    int pattern_size;
    cout << "Please enter a number between 3 and 9:  ";
    cin >> pattern_size;
    cout << endl;
    for (int i = 1; i <= 2 * pattern_size - 1; i++) {
        int k = pattern_size - abs(pattern_size - i);

        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


