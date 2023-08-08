#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate BMI
double calculateBMI(double weight, double height) {
    // BMI formula: weight (kg) / (height (m) * height (m))
    return weight / (height * height);
}

int main() {
    cout << "BMI Calculator" << endl;

    double weight, height;

    // Get user input for weight and height
    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter your height (m): ";
    cin >> height;

    // Calculate BMI
    double bmi = calculateBMI(weight, height);

    // Determine BMI category
    string category;
    if (bmi < 18.5) {
        category = "Underweight";
    } else if (bmi < 24.9) {
        category = "Normal Weight";
    } else if (bmi < 29.9) {
        category = "Overweight";
    } else {
        category = "Obese";
    }

    // Display results
    cout << "Your BMI: " << bmi << endl;
    cout << "BMI Category: " << category << endl;

    return 0;
}
