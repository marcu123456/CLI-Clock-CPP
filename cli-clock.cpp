/*
* Made by marcu
* Find me on GitHub
* https://github.com/marcu123456
*/

// C++ Headers
#include <iostream>
#include <csignal>
#include <thread> // Used to sleep the thread
#include <chrono> // Used for getting the time

// C Headers
#include <stdio.h> // For outputing the time to screen
#include <time.h> // To get the time

using namespace std;

void sleep(int seconds) {
    // In seconds
    seconds * 1000; // Converts to miliseconds.
    std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
}

int main() {
    while (true) {
        time_t t ;
        struct tm *temp ;
        char currtime[50];
        time( &t );
        temp = localtime( &t );
        
        // using strftime to change time structure
        strftime(currtime, sizeof(currtime), "%x - %I:%M%p", temp);
        
        printf("%s\n", currtime );
        
        sleep(1); // Sleeps the loop for 1 second
        system("clear");

    }
    return 0;
}

