#include <iostream>
using namespace std;

struct Student
{
    string name, classroom;
    char grade, gender;
    float math, eng, cpp;
    // we can create your function here !

    void input()
    {
        cout << "---------x INPUT x ----------" << endl;
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter classroom: ";
        getline(cin, classroom);
        cout << "Enter gender: ";
        cin >> gender;
        cout << "Enter Scores(math,eng,cpp): " << endl;
        cin >> math;
        cin >> eng;
        cin >> cpp;
    }

    char findGrade(float average)
    {
        char grade;
        if (average >= 90)
            grade = 'A';
        else if (average >= 80)
            grade = 'B';
        else if (average >= 75)
            grade = 'C';
        else if (average >= 60)
            grade = 'D';
        else if (average >= 50)
            grade = 'E';
        else
            grade = 'F';

        return grade;
    }
    float findAverage()
    {
        return (math + eng + cpp) / 3;
    }

    void output()
    {
        float average = findAverage();
        cout << "Grade: " << findGrade(average) << endl;
        cout << "Student name: " << name << endl;
        cout << "Studen gender: " << gender << endl;
        cout << "Scores (math,eng,cpp): "
             << math << "-" << eng << "-" << cpp << endl;
        cout << "Student Average: " << average << endl;
    }
};
int main()
{
    system("clear");
    Student student1;
    student1.input();
    student1.output();

    return 0;
}