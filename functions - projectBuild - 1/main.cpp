/*
    This is a program to calculate modules grades, and gives the client an outright scope of how
    much they need to make it out of the module or reach their academic goals.
*/

#include <iostream>
#include <cmath>
#include <string>

/*
    Basic Module structure is that a Module has a weighted mark - actual mark - total mark
    And what makes the marks is usually body of work - mainly:
    assignments - tutorials - class tests - practicals - semester tests - exam 
*/

//The following functions calculate each of their mark and task separately
float assignmentsCalculate(std::string);
std::string userInput(std::string name);
float finalMarkCalculate(float, float);
void display(float, std::string);
void bubbleSortDesc(float arr[], int n);

int main() {
    std::string sections[] = {"Practical Assignments", "Practical Project", "Class Tests", "Semester Tests"};
    float moduleAssignments[sizeof(sections)];
    int i = 0;
    for (const std::string& section : sections) {
        float mark = assignmentsCalculate(section);
        moduleAssignments[i] = mark;  // Store the result in the array
        display(mark, section);
        ++i;
    }
    
    float semesterMark = 0.0;
    
    for (i = 0; i < 4; ++i) {
        semesterMark += moduleAssignments[i];
    }
    
    std::string name = "Semester Mark";
    display(semesterMark, name);
    return 0;
}

float assignmentsCalculate(std::string name){
    int numAssignments;
    std::cout << "Enter the number of " + name + ": ";
    std::cin >> numAssignments;

    if(numAssignments == 0) return 0.0;

    // Declare an array of the assignments
    float moduleAssignments[numAssignments];

    // Loop to get input for each element
    for (int i = 0; i < numAssignments; ++i) {
        // Get a float input from the user
        std::cout << "Enter " + name + " " << i + 1 << " Mark: ";
        std::cin >> moduleAssignments[i];
    }

    float weightedMark, assignmentMark;
    std::cout << "Enter the weighted " + name + " Percentage: ";
    std::cin >> weightedMark;

    weightedMark = weightedMark/numAssignments;
    for (int i = 0; i < numAssignments; ++i)    moduleAssignments[i] *= weightedMark;

    int n = sizeof(moduleAssignments) / sizeof(moduleAssignments[0]), numRemoved;
    bubbleSortDesc(moduleAssignments, n);
    std::cout << "How many " + name + " is removed: ";
    std::cin >> numRemoved;
    for (int i = 0; i <= numAssignments - numRemoved; ++i)    assignmentMark += moduleAssignments[i];

    return assignmentMark;
}

float finalMarkCalculate(float semesterMark, float examMark){
    return 0.0;
}

void display(float mark, std::string name){
    std::cout << "The final mark for your " + name + ": " << mark;
    std::cout << std::endl;
}

std::string userInput(std::string name){
    std::string userInput = "";
    std::cout << "Do you have " + name + "?(Yes/No): ";
    std::getline(std::cin, userInput);
    return userInput;
}

void bubbleSortDesc(float arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is less than the next element
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}