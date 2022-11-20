// Q.4. Write a C++ program to find the largest word in a given string.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    string longest = "";
    int simb = 0;
    int temp = 0;
    int where = 0;
    int start = 0;

    cout << "Input sentence" << endl;
    getline(cin, sentence);

    for (int i = 0; i < sentence.size(); i++)
    {

        if (sentence[i] != ' ')
        {
            simb++;
            where++;
        }

        if (sentence[i] == ' ')
        {

            if (simb > temp)
            {
                where++;
                simb++;
                start = where - simb;
                temp = simb;
            }
            simb = 0;
        }
    }

    for (int m = start; m <= temp; m++)
    {
        longest = longest + sentence[m];
    }

    cout << "longest sentence" << longest << endl;

    return 0;
}