#include <iostream>

int main() {
    const int SENTINEL = -99;

    int inputval = 0;
    int minval = 0;
    int maxval = 0;
    bool data = false;

    std::cout << "Enter integers (enter -99 to stop): ";
    std::cin >> inputval;

    while (inputval != SENTINEL) {
        if (!data) {
            minval = inputval;
            maxval = inputval;
            data = true;
        } else {
            if (inputval < minval) {
                minval = inputval;
            }
            if (inputval > maxval) {
                maxval = inputval;
            }
        }
        std::cin >> inputval;
    }

    if (!data) {
        std::cout << "No data values were entered." << std::endl;
    } else {
        std::cout << "Smallest: " << minval << std::endl;
        std::cout << "Largest: " << maxval << std::endl;
    }

    return 0;
}