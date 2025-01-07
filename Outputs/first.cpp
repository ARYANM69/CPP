// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"helo world"<<endl;
//     cout<<"Hello World\n";
//      cout<<"Hello World";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int x ;
//     x = 7;
//     cout<<x<<endl;
//     x = 9;
//     cout<<x<<endl;;
//    x = x+10;
//      cout<<x; //19

// }

// OUTPUT - 7  AS THE X VALUE IS CONTINOUS GETS UPDATES
// 9
// 19

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 4;
//     x = x + 5;
//     x = x + 10;
//     cout<<x; // Output = 19
// }

// ARITHMATIC OPERATORS

// #include<iostream>
// using namespace std;
// int main (){
//     int x = 5;
//     int y = 2;
//     cout<<"The sum of x and y is : "<<x+y<<endl;// ==> The sum od x and y is : 7
//      cout<<"The Subtraction of x and y is : "<<x-y<<endl;// 3
//       cout<<"The Multiplicationof x and y is : "<<x*y<<endl;// 10
//        cout<<"The Division of x and y is : "<<x/y<<endl;// 2 why ? due to it data type
// }

// INCRMENT-DECREMENT operators
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 5;

//     cout << x++ << endl; // we will get 5 value will be updated to 6 for next operations

//     cout << x-- << endl; // we will get 6 as output but value of x will be update to 5 for the next operations

//     cout << ++x << endl; // in ++x the value is updated at that instance so we will get 6

//     cout << --x << endl; // we will get 5 as an output
// }

// BUT if we do cout<<x afte pre and post increment and decrement it will show just x + 1 ; x - 1 output
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 5;

//     x++; // Post-increment: x becomes 6 after the statement
//     cout << x << endl; // Output: 6

//     x--; // Post-decrement: x becomes 5 after the statement
//     cout << x << endl; // Output: 5

//     ++x; // Pre-increment: x becomes 6 before the statement
//     cout << x << endl; // Output: 6

//     --x; // Pre-decrement: x becomes 5 before the statement
//     cout << x; // Output: 5

//     return 0;
// }

// FLOT ==> STORES REAL NUM

// #include <iostream>
// using namespace std;

// int main() {
// float x = 5;
// float y = 2;
// cout<<x/y<<endl;//2.5

// cout<<5/2<<endl;//2
// cout<<5.0/2;//2.5
// }

// Calculate the percentacet on 5 Subjects
// #include <iostream>
// using namespace std;
// int main()
// {
//     float x, y, z, a, b;
//     cout << "Enter the marks of science : " << endl;
//     cin >> x;
//     cout << "Enter the marks of Maths : " << endl;
//     cin >> y;
//     cout << "Enter the marks of English : " << endl;
//     cin >> z;
//     cout << "Enter the marks of Hindi : " << endl;
//     cin >> a;
//     cout << "Enter the marks of SST: " << endl;
//     cin >> b;

//     float u = ((x + y + z + a + b) / 500) * 100;

//     cout << "Percentage of the Subjects: " << u;
// }


// Naming rules
// #include<iostream>
// using namespace std;
// int main(){
//         cout<<"Alphbet and _ $ can start the words :"<<endl;
//         cout<<"Special char except _ $ are not alllowed :"<<endl;
//         cout<<"Key words are not allowed :"<<endl;
//         cout<<" comma or blanks or space not allowed"<<endl;
//         cout<<" Number is alowed only in between"<<endl;

//         int A1_89$8 = 69;
//         cout<<A1_89$8;
// }

// BOOLEAN DATA TYPE
// #include<iostream>
// using namespace std;
// int main(){
//     bool flag = -79;// ==> 1
//     cout<<flag;
//     bool x = true;
//      cout<<x;//==>1
//      bool y = false;
//      cout<<y;//==>0
//      bool z = 0;
//      cout<<z;//==>0
// }