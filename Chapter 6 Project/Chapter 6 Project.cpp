#include <iostream>
#include <iomanip>

using namespace std;

double getScore();
bool isLower(double value1, double value2);
bool isHigher(double value1, double value2);
double calcAverage(double total, double minScore, double maxScore);

// Handles the running of the program
int main()
{
    double current;
    double finalScore;
    double highest = 0.0;
    double lowest = 10.0;
    double totalScore = 0.0;

    for (int i = 0; i < 5; i++) {
        current = getScore();
        totalScore = totalScore + current;


        if (isLower(current, lowest)) {
            lowest = current;
        }

        if (isHigher(current, highest)) {
            highest = current;
        }
    }

    finalScore = calcAverage(totalScore, lowest, highest);

    cout << fixed << setprecision(1) << "The star's final score is: " << finalScore;

    return 0;
}

// Gets a judges score from the user and validates it
double getScore() {
    double score;
    for (bool valid = false; !valid;) {
        cout << "What is this judge's score? ";
        cin >> score;

        if (score < 0.0 || score > 10.0) {
            cout << "Invalid, please enter a number between 0-10" << endl;
        }
        else {
            valid = true;
        }
    }

    return score;
}


// Checks if a value is lower than the current lowest
bool isLower(double value1, double value2) {
    if (value1 < value2) {
        return true;
    }
    else {
        return false;
    }
}


// Checks if a value is higher than the current highest
bool isHigher(double value1, double value2) {
    if (value1 > value2) {
        return true;
    }
    else {
        return false;
    }
}


double calcAverage(double total, double minScore, double maxScore) {
    double usedTotal = total - minScore - maxScore;

    return (usedTotal / 3);
}