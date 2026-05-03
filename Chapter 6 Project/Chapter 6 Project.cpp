#include <iostream>

using namespace std;


void rectangle(int length,int width, int &perimeter, int &area);
bool validateInput(int length, int width);

int main()
{
    bool check = false;
    int userLength;
    int userWidth;
    int foundPerimeter;
    int foundArea;
    bool again;

    //gets the user input and validates it
    while (!check) {
        cout << "What is the length of the rectangle? ";
        cin >> userLength;
        cout << "What is the width of the rectangle? ";
        cin >> userWidth;

        check = validateInput(userWidth, userLength);
    }
    
    rectangle(userLength, userWidth, foundPerimeter, foundArea);


    // gives the user the perimeter and area of the rectangle
    cout << "The perimeter is " << foundPerimeter << endl;
    cout << "The area is " << foundArea << endl;
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

//calculates the area and perimeter of the user's rectangle
void rectangle(int length, int width, int &perimeter, int &area) {
    perimeter = 2 * (length + width);
    area = length * width;
}