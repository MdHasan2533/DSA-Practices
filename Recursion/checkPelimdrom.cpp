/*
#include <iostream>
using namespace std;

bool checkPelindrome(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPelindrome(str, i + 1, j - 1);
    }
}

int main()
{

    string name;
    cin>>name;
    cout << endl;
    bool ispalindrome = checkPelindrome(name, 0, name.length() - 1);
    if (ispalindrome)
    {
        cout << " Is Palindrome " << endl;
    }
    else
    {
        cout << " Not Palindrome " << endl;
    }

    return 0;
}
*/

#include <iostream>
using namespace std;

bool checkPelindrome(string str, int i = 0)
{

    if (i >= str.size() / 2)
    {
        return true;
    }

    if (str[i] != str[str.size() - i - 1])
    {
        return false;
    }
    else
    {
        return checkPelindrome(str, ++i);
    }
}

int main()
{

    string name;
    cout << endl;
    cin >> name;
    cout << endl;
    bool ispalindrome = checkPelindrome(name, name.length());
    if (ispalindrome)
    {
        cout << " Is Palindrome " << endl;
    }
    else
    {
        cout << " Not Palindrome " << endl;
    }

    return 0;
}