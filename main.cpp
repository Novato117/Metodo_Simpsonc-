#include <iostream>
#include <cmath>

using namespace std;

double func(double x) {
    // Replace this function with the function you want to integrate
    return pow(sin(x),2)-2*x;
}

double simpson(double a, double b, int n) {
    double h = (b-a)/n;
    double sum = func(a) + func(b);

    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            sum += 2 * func(a + i*h);
        } else {
            sum += 4 * func(a + i*h);
        }
    }

    return (h/3) * sum;
}

int main() {
    double a, b;
    int n;

    cout<<"Enter the lower limit of integration: ";
    cin >>a;
    cout<< "Enter the upper limit of integration: ";
    cin >> b;
    cout<< "Enter the number of intervals (n): ";
    cin >> n;


    double result = simpson(a, b, n);


    cout<<"el resultado de pow(sin(x),2)-2*x "<<pow(sin(-1),2)-2*-1;
    cout << "The result of the integration is: " << result << endl;
    return 0;
}
