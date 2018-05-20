/*
Description:
This program takes a series of numbers from user input, produce statistical report based on the given data.
The report has the AVERAGE, MODE and MEDIAN. Also draw the histogram for the given data.

Instruction:
Enter anything you want*/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int avgMethod(char[], string);
int modeMehod(char[], string);

int main()
{
    char array[255] = {0};
    string str = "";
    cout << "Write the data!" << endl;

    getline(cin, str);

    for(int a = 0; a < str.size(); a++){
       array[a] = str[a];
    }
    cout << "Your chars:";
        for (int i = 0; i < str.size(); i++){
            cout << array[i] << "," ;
        }
    cout << avgMethod(array, str) << endl;
    cout << modeMehod(array, str) << endl;

    return 0;
}

int avgMethod(char array[], string str){
    int sum;

    for(int x = 0; x != str.size(); x++){
        sum += array[x];
    }
    return sum / str.size();
}

int modeMehod(char array[], string str){
    int highest;
    int smallest;

    highest = array[0];

    for (int i = 0; i < str.size(); i++) {
        if (highest < array[i]) {
            highest = array[i];
        }
    }
    smallest = array[0];

    for (int a = 0; a < str.size(); a++) {
        if (smallest > array[a]) {
            smallest = array[a];
        }
    }
    return smallest, highest;
}

