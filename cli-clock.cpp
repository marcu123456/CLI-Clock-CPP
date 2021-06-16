/*
* Made by marcu
* Find me on GitHub
* https://github.com/marcu123456
*/

// C++ Headers
#include <iostream> // Used for certain outputs despite stdio.h's printf() funciton is used to output the text to the screen
#include <csignal>
#include <thread> // Used to sleep the thread and make the program temporararily halt
#include <chrono> // Used for getting time values for the sleepSeconds() function

// C Headers
#include <stdio.h> // For outputing the time to screen
#include <time.h> // To get the time

using namespace std;

void sleepSeconds(int seconds) {
    // In seconds
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}
void cls() {
    system("clear"); // Enters the value in the function and clears the terminal
}

int main() {
    while (true) {
        time_t t ; // Time variable
        struct tm *temp ; // Forgot what this is, I doubt I will find out, describes programming pretty well.

        char currtime[50]; // what is printed to the screen.
        time( &t );
        temp = localtime( &t );
        
        // using strftime to change time structure
        strftime(currtime, sizeof(currtime), "%x - %I:%M%p", temp); // Formats the time into a readable format
        
        printf("\n%s", currtime ); // Changes the format and outputs the clock
        
        sleepSeconds(1); // Sleeps the loop for 1 second
        cls(); // Calls the clearing function

    }
    return 0;
}

