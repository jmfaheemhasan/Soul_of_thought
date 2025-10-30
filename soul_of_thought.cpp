#include <iostream>
using namespace std;

int main() {
    char mood;

    cout << "Enter your mood (r = rain, s = sea, c = coffee): ";
    cin >> mood;

    cout << endl; // just to make output cleaner

    if (mood == 'r') {
        cout << "It's raining outside... ☔" << endl;
        cout << "Perfect time for a cup of coffee and your favorite song!" << endl;
    } 
    else if (mood == 's') {
        cout << "The sound of the sea waves 🌊 makes everything peaceful." << endl;
        cout << "Maybe enjoy the view with a cup of coffee!" << endl;
    } 
    else if (mood == 'c') {
        cout << "A warm cup of coffee ☕ can make any day better!" << endl;
        cout << "Sit back, relax, and listen to some good music." << endl;
    } 
    else {
        cout << "Hmm... I don’t recognize that mood!" << endl;
        cout << "But a little coffee and music can fix anything. ☕🎶" << endl;
    }

    return 0;
}
