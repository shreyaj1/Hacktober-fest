#include <iostream>
#include <chrono>
#include <iterator>
#include <thread>
#include <functional>

void timer_start(std::function<void(void)> func, unsigned int interval)
{
 std::thread([func, interval]() {
    while(true)
    {
        func();
        std::this_thread::sleep_for(std::chrono::milliseconds(interval));
    }
 }).detach();
}
int n1 = 1;

void timer_result()
{
    std::cout << "timer: " << n1++ << '\n' << std::endl;
}

int main() {
    timer_start(timer_result, 120);
    while(true);
}
