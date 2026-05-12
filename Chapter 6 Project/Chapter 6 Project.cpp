#include <iostream>
#include <string>

using namespace std;

void getRegInfo(string& regionName, int& accidents);
bool isLower(int value1, int value2);
void showLowest(string regionName, int accidents);


// Handles most variables and the running of the program
int main()
{
    int regionCount;
    int currentAccidents;
    string currentRegion;
    int lowestAccidents;
    string lowestRegion;
    

    cout << "How many regions are in the city? ";
    cin >> regionCount;


    for (int i = 0; i < regionCount; i++) {
        getRegInfo(currentRegion, currentAccidents);

        if (i == 0) {
            lowestAccidents = currentAccidents;
            lowestRegion = currentRegion;
        }
        else {
            if (isLower(currentAccidents, lowestAccidents)) {
                lowestAccidents = currentAccidents;
                lowestRegion = currentRegion;
            }
        }
        cout << endl << "Next region" << endl;
    }


    showLowest(lowestRegion, lowestAccidents);

    return 0;
}

// Gets a region's data from user's input
void getRegInfo(string& regionName, int& accidents) {

    for (bool valid = false; !valid;) {
        cout << "What is the name of the region? ";
        cin.ignore();
        getline(cin, regionName);
        cout << "How many accidents have happened there? ";
        cin >> accidents;

        if (accidents > 0) {
            valid = true;
        }
        else {
            cout << "Please enter a number greater than zero" << endl;
        }
    }

    return;
}

// Determines if a region's accident count is lower than the current lowest
bool isLower(int value1, int value2) {
    if (value1 <= value2) {
        return true;
    }
    else {
        return false;
    }
}

// Tells the user the safest region once all regions have been checked
void showLowest(string regionName, int accidents) {
    cout << "The safest region for driving has been found!" << endl;
    cout << "Region Name: " << regionName << endl;
    cout << "Accident Count: " << accidents << endl;
}