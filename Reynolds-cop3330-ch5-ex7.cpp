/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Donovan Reynolds
 */

#include "std_lib_facilities.h"

vector <double> quadraticFormula(double a, double b, double c);

int main()
{
    try
    {
            double a, b, c;
    cin >> a >> b >> c;
    vector <double> solutions = quadraticFormula(a,b,c);

    cout <<"These are your solutions\n";
    cout << solutions[0] << " , " << solutions[1];
    }
    catch(domain_error& e)
    {
        cerr << "Your answer is nonreal. Try again." << '\n';
    }
    


}

vector <double> quadraticFormula(double a, double b, double c)
{
        if (b*b < 4 * a * c)
        {
            throw domain_error("");
        }
        double xPlus = (-b + sqrt(b*b - 4 * a * c))/(2*a);
        double xMinus = (-b - sqrt(b*b - 4 * a * c))/(2*a);
        vector <double> answers;
        if (xPlus == xMinus)
        {
            answers.push_back(xPlus);
            return answers;
        }
        else
        {
            answers.push_back(xPlus);
            answers.push_back(xMinus);
            return answers;
        }

}