#include <iostream>
#include <string.h>
using namespace std;
int getLength(char name[])
{
    int length = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
void reverseCharArray(char name[])
{
    int i = 0;
    int n = getLength(name);
    int j = n - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[100];
    cout << "Enter your Name :- ";
    cin >> name;
    cout << "length is :- " << getLength(name) << endl;
    cout << "Initially :- " << name << endl;
    reverseCharArray(name);
    cout << "After reversal process :- " << name << endl;

    return 0;
}