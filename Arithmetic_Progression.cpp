#include <iostream>
using namespace std;

int main() {
    int firstTerm, secondTerm, thirdTerm, fourthTerm;

    cout << "Enter the first term: ";
    cin >> firstTerm;

    cout << "Enter the second term: ";
    cin >> secondTerm;

    cout << "Enter the third term: ";
    cin >> thirdTerm;

    cout << "Enter the fourth term: ";
    cin >> fourthTerm;

    int commonDifference1 = secondTerm - firstTerm;  // Calculate the common difference between the first and second term
    int commonDifference2 = thirdTerm - secondTerm;  // Calculate the common difference between the second and third term

    // Check if the common differences are equal
    if (commonDifference1 == commonDifference2) {
        int commonDifference = commonDifference1;

        cout << "The common difference is: " << commonDifference << endl;

        int fifthTerm = fourthTerm + commonDifference;  // Calculate the fifth term
        int sixthTerm = fifthTerm + commonDifference;
        int seventhTerm = sixthTerm + commonDifference;
        int eighthTerm = seventhTerm + commonDifference;

        cout << "The next terms are: " << fifthTerm << ", " << sixthTerm << ", " << seventhTerm << ", " << eighthTerm << endl;

        // Find any term using the nth term formula
        int n;
        cout << "Enter the term number (n): ";
        cin >> n;

        int nthTerm = firstTerm + (n - 1) * commonDifference;
        cout << "The " << n << "th term is: " << nthTerm << endl;
    }
    else {
        cout << "The terms do not form an arithmetic progression." << endl;
    }

    return 0;
}
