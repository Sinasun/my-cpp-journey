#include <iostream>
#include <thread>

void print_numbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        std::cout << i << std::endl;
    }
}

int main() {
    std::thread t1(print_numbers, 1, 10);
    std::cout << "Test" << std::endl;
    std::thread t2(print_numbers, 11, 20);
    std::cout << "Hellor " << std::endl;
    t1.join();
    t2.join();
    return 0;
}