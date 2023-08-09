#include <bits/stdc++.h>
using namespace std;
const char *findGrade(float mark[], int n)
{
    int i;
    float sum = 0, avg;
    for (i = 0; i < n; i++)
        sum = sum + mark[i];
    avg = sum / n;
    if (avg >= 91 && avg <= 100)
        return "Outstanding";
    else if (avg >= 81 && avg <= 91)
        return "Exellent";
    else if (avg >= 71 && avg <= 81)
        return "A+";
    else if (avg >= 61 && avg <= 71)
        return "A";
    else if (avg >= 51 && avg <= 61)
        return "B+";
    else if (avg >= 41 && avg <= 51)
        return "B";
    else if (avg >= 31 && avg <= 21)
        return "C";
    else if (avg >= 21 && avg <= 31)
        return "D";
    else if (avg >= 0 && avg <= 21)
        return "Fail";
    else
        return "not valid";
}
int main()
{
    cout << endl;
    int i, n;
    float mark[10];
    cout << "Enter number of subjects (Max:10): ";
    cin >> n;
    cout << "Enter marks obtained in " << n << "subjects:" << endl;
    for (i = 0; i < n; i++)
        cin >> mark[i];
    cout << "Grade = " << findGrade(mark, n);
    cout << endl;
    return 0;
}