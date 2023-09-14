// Lecture 1 ******************LOVE BABBAR***************************
// #include <iostream>
// using namespace std;

// int main(){
//     cout<< "Namaste Dunia" <<endl;
//     cout<<"I am Hasan"<<endl;

//     int a = 55;
//     char b = 'V';
//     bool bl=1;
//     float c = 3.3;
//     double d=2.5215;
//     int sizea= sizeof(a);
//     int sizeb= sizeof(b);
//     int sizec= sizeof(c);
//     int sized= sizeof(d);
//     int sizebl= sizeof(bl);
//     cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<bl<<endl<<sizea<<endl<<sizeb<<endl<<sizec<<endl<<sized<<endl<<sizebl<<endl;
// }

// Lecture 3 *******************LOVE BABBAR***********************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout << "Enter the value of A: " << endl;
//     cin >> a;

//     if (a > 0)
//     {
//         cout << "A is a Positive number." << endl;
//     }
//     else if (a < 0)
//     {
//         cout << "A is Negative number." << endl;
//     }
//     else
//     {
//         cout << "A is '0'." << endl;
//     }
// }

// Home work 24:22
// #1
// #include<iostream>
// using namespace std;

// int main(){
//     int a=9;
//     if(a==9){
//         cout<<"NINE";
//     }
//     if(a>0){
//         cout<<"Positive";
//     }
//     else{
//         cout<<"Negative";
//     }
// }

// #2
// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout << "Enter any character : ";
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z')
//     {
//         cout << "Character is LOWERCASE. " << endl;
//     }
//     else if (ch >= 'A' && ch <= 'Z')
//     {
//         cout << "Character is UPPERCASE. " << endl;
//     }
//     else
//     {
//         cout << "Entered Input is NOT a character , It's NUMERIC value." << endl;
//     }
// }

// #3

//#include<iostream>
// using namespace std;

// int main(){

//     int i=2;
//     int sum=0;
//     int n;
//     cout<<"Enter the value of N : "<<endl;
//     cin>>n;

//     while (i<=n)
//     {
//        if(i%2 == 0){
//         sum = sum +i;
//        }
//        i = i+2;
//     }
//     cout<<"The SUM of N numbers is : "<<sum<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int num=1;
//     while(num<=n){
//         cout<<num<<" ";
//         num = num+1;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int num=2;
//     int n;
//     cin>>n;
//     while(num<=n){
//         sum=sum +num;
//         num = num+2;
//     }
//         cout<<sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     float faren;
//     float cel;
//     cin>>faren;
//     cel=(faren-32)*5/9;
//     cout<<faren<<" = "<<cel<<" degree celcius";
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num=2;
//     int n;
//     cin>>n;
//     while(num <n){
//         if(n%num==0){
//             cout<<"Not Prime for "<<num<<endl;
//         }
//         else{
//             cout<<"Prime for "<<num<<endl;
//         }
//         num = num+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//     int col=1;
//         while(col<=n){
//             cout<<" * ";
//             col = col+1;
//         }
//         cout<<endl;
//         row = row+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int row=1;
//     int n;
//     cin>>n;
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             cout<<" "<<row<<" ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row = 1;
//     int n;
//     cin >> n;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//             cout << " " << col;
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
//         int col = 1;
//         while (col <= n)
//         {
//             cout << n - col + 1;
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
//     int count = 10;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//             cout << count << "   ";
//         {
//             while(count<=100){
//             count = count + 5;
//             }
//             cout<<endl;
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
//         int col = 1;
//         while (col <= row)
//         {
//             cout << " * ";
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
//         int col = 1;
//         while (col <= row)
//         {
//             cout << row << " ";
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
//     int count = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << count << " ";
//             count = count + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row+col-1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             cout<<row-col+1<<" ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     char A;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//             char ch = 'A' + row - 1;
//             cout << ch<<" ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=n){
//             char ch = 'A' + col - 1 ;
//             cout<<ch<<' ';
//             col=col+1;
//         }
//         cout<<endl;
// //         row=row+1;

// //     }
// // }
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int row = 1;
// //     char value = 'A';
// //     while (row <= n)
// //     {
// //         int col = 1;
// //         while (col <= n)
// //         {
// //             cout << value << " ";
// //             col = col + 1;
// //             value = value + 1;
// //         }
// //         cout << endl;
// //         row = row + 1;
// //     }
// // }
// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int row = 1;
// //     while (row <= n)
// //     {
// //         int col = 1;
// //         while (col <= n)
// //         {
// //             char ch = 'A' + row + col - 2;
// //             cout << ch << " ";
// //             col = col + 1;
// //         }
// //         cout << endl;
// //         row = row + 1;
// //     }
// // }
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
//         while (col <= row)
//         {
//             char ch = 'A' + row - 1;
//             cout << ch << " ";
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
//     char ch = 'A';
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << ch << " ";
//             ch = ch + 1;
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
//     char ch = 'A';
//     while (row <= n)
//     {
//         int col = 1;
//         while ( col <= row )

//         {
//             char value= 'A' + row + col - 2;
//             cout << value <<" ";
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
//         char start = 'A' + n - row;
//         while (col <= n)
//         {
//             cout << start << " ";
//             start++;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + row -1;
        while (col <= n)
        {
            cout << start << " ";
            start++;
            col++;
        }
        cout << endl;
        row++;
    }
}