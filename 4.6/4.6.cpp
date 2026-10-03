#include <iostream>
#include <iomanip>
#include <cmath> 

int main() {
    using namespace std;
    //while
    double pi_res = 1;
    int i = 2;

    while (i <= 10) {
        double sum = 0.0;
        int k = 1;

        while (k <= 20 - i) {
            sum += (double)i / k;
            k++;
        }
        pi_res *= (1 + sum) / (1 + sum * sum);
        i++;
    }
    cout << pi_res << endl;


    //do while
    pi_res = 1;
    i = 2;

    do {
        double sum = 0.0;
        int k = 1;

        do {
            sum += (double)i / k;
            k++;
        } while (k <= 20 - i);
        pi_res *= (1 + sum) / (1 + sum * sum);
        i++;
    } while (i <= 10);
    cout << pi_res << endl;

    //for ++
    pi_res = 1;
    i = 2;


    for (int i = 2; i <= 10; i++) {
        double sum = 0.0;

        for (int k = 1; k <= 20 - i; k++) {
            sum += (double)i / k;
        }

        pi_res *= (1 + sum) / (1 + sum * sum);
    }

    cout << pi_res << endl;

    //for --
    pi_res = 1;
    i = 2;

    for (int i = 10; i >= 2; i--) {
        double sum = 0.0;

        for (int k = 20 - i; k >= 1; k--) {
            sum += (double)i / k;
        }

        pi_res *= (1 + sum) / (1 + sum * sum);
    }

    cout << pi_res << endl;
    return 0;
}