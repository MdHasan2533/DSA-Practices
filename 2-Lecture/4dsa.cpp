// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int col = 1;
//         while (col <= row)
//         {
//             cout << "*";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int star = n - row + 1;
//         while (star)
//         {
//             cout << "*";
//             star--;
//         }
//         int col = 1;
//         while (col <= row)
//         {
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = row - 1;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int star = n - row + 1;
//         while (star)
//         {
//             cout << "*";
//             star = star - 1;
//         }
//          int col = 1;
//         while (col <= row)
//         {
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = row - 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int col = 1;
//         while (col <= n - row + 1)
//         {
//             cout << row;
//             col++;
//         }

//         cout << endl;
//         row++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int col = 1;
//         while (col <= row)
//         {
//             cout << row;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = row- 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int col = 1;
//         int value = row;
//         while (col <= n - row + 1)
//         {
//             cout << value;
//             col++;
//             value++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     int value = 1;
//     while (row <= n)
//     {
//         int space = n - row;
//         while (space)
//         {
//             cout << "  ";
//             space--;
//         }
//         int col = 1;
//         while (col <= row)
//         {
//             cout << value<< " ";
//             value++;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n - row + 1)
//         {
//             cout << col;
//             col++;
//         }
//         int star = 2 * (row - 1);
//         while (star)
//         {
//             cout << "*";
//             star--;
//         }
//         col = 1;
//         while (col <= n - row + 1)
//         {
//             cout << n - row - col + 2;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<6; i++){
        for(int j=i; j<=6; j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
        
    }
}