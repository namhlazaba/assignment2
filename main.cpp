#include <iostream>
using namespace std;

float weight, height, bmi;

void displayFitnessResults(float bmi)
{
    if (bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if ((bmi >= 18.5) && (bmi <= 24.9))
    {
        cout << "Healthy " << endl;
    }
    if ((bmi >= 25.5) && (bmi <= 29.9))
    {
        cout << "Overweight " << endl;
    }
    if (bmi >= 30.0)
    {
        cout << "Obsese " << endl;
    }
}

void calcBMI(float weight,float height)
{
    bmi = weight / ( height * height );
}

void getData()
{
    cout << "Enter weight: " << endl;
    cin >> weight;
    cout << "Enter height: " << endl;
    cin >> height;
}

int main()
{
    getData();
    calcBMI(weight,height);
    displayFitnessResults(bmi);
    return 0;
}
