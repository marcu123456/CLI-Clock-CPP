// C++ Libs
#include <iostream>
#include <csignal>
#include <thread>
#include <chrono>

// C Headers
#include <stdio.h> // For outputing the time to screen
#include <time.h> // To get the time

using namespace std;

void sleep(int sleeptime) {
    // In miliseconds
    std::this_thread::sleep_for(std::chrono::milliseconds(sleeptime));
}

int main() {
    while (true) {

    time_t t ;
    struct tm *temp ;
    char currtime[50];
    time( &t );
    temp = localtime( &t );
      
    // using strftime to display time
    strftime(currtime, sizeof(currtime), "%x - %I:%M%p", temp);
    
    printf("%s\n", currtime );
    
    #pragma region clear
        sleep(1000); // Sleeps the loop for 1 second
        system("clear");
    #pragma endregion
    }
}

