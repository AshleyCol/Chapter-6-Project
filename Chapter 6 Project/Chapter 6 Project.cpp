#include <iostream>

using namespace std;



int perimeter(int length,int width);
int area(int length, int width);
bool validateInput(int length, int width);

int main()
{
    bool check = false;
    int userLength;
    int userWidth;
    bool again;

    //gets the user input and validates it
    while (!check) {
        cout << "What is the length of the rectangle? ";
        cin >> userLength;
        cout << "What is the width of the rectangle? ";
        cin >> userWidth;

        check = validateInput(userWidth, userLength);
    }
    

    // gives the user the perimeter and area of the rectangle
    cout << "The perimeter is " << perimeter(userLength, userWidth) << endl;
    cout << "The area is " << area(userLength, userWidth) << endl;
    cout << "Would you like to find another rectangle?" << endl << "0. End program" << endl << "1. Do another rectangle" << endl;
    cin >> again;


    // runs main again if the user chooses to
    if (again) {
        main();
    }

    return 0;
}

// makes sure the user did not input an invalid length or width
bool validateInput(int length, int width) { 
    if (length < 0 || width < 0) {
        cout << "Invalid input, please try again." << endl;
        return false;
    }
    else
        return true;
}

//calculates the perimeter of the user's rectangle
int perimeter(int length, int width) {
    return 2 * (length + width);
}

//calculates the area of the user's rectangle
int area(int length, int width) {
    return length * width;
}
