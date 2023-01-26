// Multithreadtest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void function1() {
    
    for (int i = 0; i < 50; i++) {
        cout << "Thread 1 ";
    }   

}

void function2() {
   
    for (int i = 0; i < 50; i++) {
        cout << "Thread 2 ";
    }

}


void function3() {
    
    for (int i = 0; i < 50; i++) {
        cout << "Thread 3 ";
   }
}

int main()
{
    cout << "Lets get started!" << endl << "Program will begin in 5 seconds" << endl;
    this_thread::sleep_for(5000ms);
    thread threadname1(function1);
    thread threadname2(function2);
    thread threadname3(function3);

    system("pause>nul");
}


