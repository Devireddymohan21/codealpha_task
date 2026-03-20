
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float totalCredits = 0, totalPoints = 0;

    for(int i = 0; i < n; i++) {
        float grade, credits;
        cout << "Enter grade for course " << i+1 << ": ";
        cin >> grade;
        cout << "Enter credit hours for course " << i+1 << ": ";
        cin >> credits;

        totalCredits += credits;
        totalPoints += grade * credits;
    }

    float cgpa = totalPoints / totalCredits;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
