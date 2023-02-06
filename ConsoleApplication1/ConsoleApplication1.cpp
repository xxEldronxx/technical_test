// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class dane
{
    string brandName;
    string modelName;
    string formFactor;
    string yearOfIssue;
    string screenSize;
    string prize;
};


void adding(vector<string> dane)
{
    string brandName;
    string modelName;
    string formFactor;
    string yearOfIssue;
    string screenSize;
    string prize;
    printf("Please type your brandName\n");
    cin >> brandName;
    dane.push_back(brandName);
    printf("Please type your modelName\n");
    cin >> modelName;
    dane.push_back(modelName);
    printf("Please type your formFactor\n");
    cin >> formFactor;
    dane.push_back(formFactor);
    printf("Please type your year of issue\n");
    cin >> yearOfIssue;
    dane.push_back(yearOfIssue);
    printf("Please type your screen size\n");
    cin >> screenSize;
    dane.push_back(screenSize);
    printf("Please type your prize\n");
    cin >> prize;
    dane.push_back(prize);
}
void destroy(vector<string> dane)
{
    dane.clear();
}

void report(vector<string> dane)
{
    int choice;
    printf("Choice: 1- Show all phones per brand. 2- Show all phones of given form factor and screen size. 3- Show me brand with max quantity of phones. 4- Show TOP-3 screen sizes.\n");
    cin >> choice;
    if (choice == 1)
    {
        string brand;
        printf("What is brand that you looking for?\n");
        cin >> brand;
        for (int indeks = 0; indeks < dane.size(); indeks++)
        {
            if (dane.at(1) == brand)
                printf("%d, ", dane[indeks]);
        }

    }
    else if (choice == 2)
    {
        string formFactor;
        string screenSize;
        printf("What's your form factor?\n");
        cin >> formFactor;
        printf("What is screen size that you looking for?\n");
        for (int indeks = 0; indeks < dane.size(); indeks++)
        {
            if (dane.at(3) == formFactor && dane.at(5) == screenSize)
                printf("%d, ", dane[indeks]);
        }
    }
    else if (choice == 3)
    {

    }
    else
    {

    }
}



int main()
{
    vector<string> dane;
    int choice;
    printf("What you want to do?\nAdd new phone = 1\nDelete phone = 2\nShow reports = 3\nEnd program = 4\n");
    cin >> choice;


    if (choice == 1)
        adding(dane);
    else if (choice == 2)
        destroy(dane);
    else if (choice == 3)
        report(dane);
    else
        return 0;
}

