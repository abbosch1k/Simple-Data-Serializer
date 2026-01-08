#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    vector<string> quotes = {
        "Believe in yourself!",
        "You can do it!",
        "Every day is a new chance.",
        "Success starts with small steps.",
        "Never give up."
    };

    srand(time(0));
    cout << "Motivation: " << quotes[rand() % quotes.size()] << endl;
}
