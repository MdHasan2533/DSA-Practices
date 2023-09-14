#include <iostream>
using namespace std;

void reverse(int i, int j, string &str)
{
    cout << "Call recieved for " << str << endl;
    cout << " " << i << " " << j << " " << endl;
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;
    
    reverse(i, j, str);
    cout << "Call recieved for " << str << endl;
    cout << " " << i << " " << j << " " << endl;
}

int main()
{

    string a = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
    reverse(0, a.length() - 1, a);
    cout << a << endl;

    return 0;
}

/*

Conclusion

1- In String , space " ", is counted
2- If we do not pass the reference value the output is same as input , as new created string is copy.
3- To call the reference value we use '&' operator.  

*/