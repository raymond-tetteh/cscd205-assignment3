/* CSCD 205 Assignment 3.
* Simple app to output the grade of a student
* Takes in the score "/100"
* And prints out the grade using the University of Ghana grading system - 2018
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int score;
    string grade;

    cout << "What was your Score - percent(%) " << endl;
    cin >> score;

    if( score >= 80 && score <= 100 ) {
        grade = "A";
    } else if( score >= 75 && score < 80 ) {
        grade = "B+";
    } else if( score >= 70 && score < 75 ) {
        grade = "B";
    } else if( score >= 65 && score < 70 ) {
        grade = "C+";
    } else if( score >= 60 && score < 65 ) {
        grade = "C";
    } else if( score >= 55 && score < 60 ) {
        grade = "D+";
    } else if( score >= 50 && score < 55 ) {
        grade = "D";
    } else if( score >= 45 && score < 50 ) {
        grade = "E";
    } else if( score >= 0 && score <= 44 ) {
        grade = "F";
    } else {
        cout << "Please enter a valid score. Your score has to be between 0 and 100" << endl;
    }

    cout << "Your Score: " << score << endl;
    cout << "Your Grade: " << grade << endl;

    return 0;
}
