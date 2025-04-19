#include <iostream>

int main() {
// initialises miles and kilometres
double distUSA;
double distEur;

std::cout << "Enter the distance in miles. Distance: \n";
std::cin >> distUSA;

distEur = distUSA * 1.60934;
std::cout << "The distance in commie units (kilometres) is: " << distEur << "\n";
}
