#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    vector<string> weather = {"Sunny", "Cloudy", "Rainy", "Stormy", "Snowy"};
    srand(time(0));
    cout << "Weather Today: " << weather[rand() % weather.size()] << endl;
    return 0;
}
