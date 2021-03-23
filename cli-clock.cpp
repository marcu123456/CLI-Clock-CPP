// C++ Libs
#include <iostream>
#include <csignal>
#include <thread>
#include <chrono>

// C Headers
#include <stdio.h>
#include <time.h>

using namespace std;

void sleep(int sleeptime) {
    // In miliseconds
    std::this_thread::sleep_for(std::chrono::milliseconds(sleeptime));
}

int main() {
    while (true) {
        time_t rawtime;
        time (&rawtime);
        printf ("%s", ctime (&rawtime));
        sleep(1000); // Sleeps the loop for 1 second
        system("clear");

    }
}