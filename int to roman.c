#include <iostream>
#include <string>
using namespace std;
int main()
{
    int input;
    string alpha;
cout << "Enter  number:";
cin >> input;
if ( input < 0 || input >=4000){
     cout << "This number is not possible.";
}
else {
    while (input > 0)
    {
        if(input >= 1000)
        {
            alpha += "M";
            input -= 1000;
        }
          else if(input >= 900)
        {
            alpha += "CM";
            input -= 900;
        }
        else if(input >= 500)
        {
            alpha += "D";
            input -= 500;
        }
        else if(input >= 400)
        {
            alpha += "CD";
            input -= 400;
        }
        else if(input >= 100)
        {
            alpha += "C";
            input -= 100;
        }
        else if(input >= 90)
        {
            alpha += "XC";
            input -= 90;
        }
        else if(input >= 50)
        {
            alpha += "L";
            input -= 50;
        }
        else if(input >= 40)
        {
            alpha += "XL";
            input -= 40;
        }
         else if(input >= 10)
        {
            alpha += "X";
            input -= 10;
        }
        else if(input >= 9)
        {
            alpha += "IX";
            input -= 9;
        }
         else if(input >= 5)
        {
            alpha += "V";
            input -= 5;
        }
        else if(input >= 4)
        {
            alpha += "IV";
            input -= 4;
        }
        else if(input >= 1)
        {
            alpha += "I";
            input -= 1;
        }
    }
        cout << alpha;
}
}