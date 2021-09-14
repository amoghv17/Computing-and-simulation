//
// Created by 18649 on 9/13/2021.


#include <stdlib.h>
#include <iostream>
using namespace std;

// returns true if input character q is puctuation, else false
bool ispunctuation(char q) {
    char punc[35]= ".!@#$%^&*()-_=+[]{};:',<>/?";
    int p;
    for (p=0;p<34;p++)
    {
        if(q==punc[p]
            return true;
                else
            return false;
    }

    char* modifyAndCopy(char *raw_input) {

        char* newarray = new char[80];
        int q, position = 0;
        for (q=0;q<80;q++)
        {
            if (ispunctuation(raw_input[q]))
                true;
            else
            {
                newarray[position] = raw_input[q];
                position++;
            }
        }
        return newarray
    }

    char* modifyInPlace(char *raw_input) {

        char* newarray = new char[80];
        int q, position = 0;
        for (q=0;q<80;q++) {
            if (ispunctuation(raw_input[q]))
                true;
            else {
                newarray[position] = raw_input[q];
                position++;
            }
        }
        return newarray;
    }

    int main() {
        // user input
        char raw_input[80] = {0};
        cout << "Please input something with punctuation in it: ";
        cin.getline(raw_input,80);

        cout << "Modify and Copy: " << endl;
        cout << "Original: " << raw_input << endl;
        cout << "Modified: " << modifyAndCopy(raw_input) << endl << endl;

        cout << "Modify in Place: " << endl;
        cout << "Original: " << raw_input << endl;
        cout << "Modified: " << modifyInPlace(raw_input) << endl;
    }
