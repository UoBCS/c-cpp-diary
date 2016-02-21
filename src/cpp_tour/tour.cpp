#include <iostream>
#include <cpp_tour/Vector.h>

using namespace std;

double square(double x) {
    return x * x;
}

void print_square(double x) {
    cout << "The square of " << x << " is " << square(x) << "\n";
}

double read_n_sum(int s) {
    Vector v(s);

    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    double sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }

    return sum;
}

int main() {
    // square stuff
    double d1 {3.2};
    double d2 = d1 + 3;
    const auto d3 = d2 + 0.1;

    print_square(d3);

    // Vector stuff
    auto res = read_n_sum(5);
    cout << "The sum is: " << res << "\n";

    return 0;
}