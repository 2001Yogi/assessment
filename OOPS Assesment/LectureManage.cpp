#include <iostream>
#include <string>
using namespace std;

class Lecture {
private:
    // Data members
    string lecturerName;
    string subjectName;
    string courseName;
    static int numberOfLecturers;
    
    public:
    // Constructor to assign initial values
    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
    }

    // Function to add lecture details
    void addLectureDetails() {
        cout << "Enter Lecturer's Name: ";
        getline(cin, lecturerName);

        cout << "Enter Subject Name: ";
        getline(cin, subjectName);

        cout << "Enter Course Name: ";
        getline(cin, courseName);

        numberOfLecturers++;
    }

    // Function to display lecture details
    void displayLectureDetails() {
        cout << "\nLecture Details:" << endl;
        cout << "Lecturer's Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
    }

    // Static function to display the total number of lecturers
    static void displayNumberOfLecturers() {
        cout << "\nTotal Number of Lecturers: " << numberOfLecturers << endl;
    }
};

// Initialize static variable
int Lecture::numberOfLecturers = 0;

// Main function to execute the program
int main() {
    Lecture lecture1;
    lecture1.addLectureDetails();
    lecture1.displayLectureDetails();
    Lecture::displayNumberOfLecturers();

    return 0;
}

