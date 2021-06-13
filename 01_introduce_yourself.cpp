// Lesson 01: Introduce yourself
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string name;
    string language;
    cout << "Hi! What's your name? ";
    getline (cin, name);
    cout << "Nice to meet you, " << name << ".\n";
    cout << "You are coding. What is your favorite language? ";
    getline (cin, language);
    cout << "Great. I love " << language << " ,too!\n";
    return 0;
}