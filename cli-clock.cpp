#include <iostream>
#include <ctime>
#include <csignal>
#include <thread>
#include <chrono>

using namespace std;

void sleep(int sleeptime) {
    // In miliseconds
    std::this_thread::sleep_for(std::chrono::milliseconds(sleeptime));
}

int main() {
    // Prepares the signal handler


    while (true) {
            time_t now = time(0); // time variable
            char* tmnow = ctime(&now); // converts the time variable to a string to be printed
            system("clear");
            std::cout << tmnow << endl;
            sleep(1000); // Sleeps the loop for 1 second
        }
}