//Simliar as character array
//String is part of STL
#include<iostream>
#include<string>

using namespace std;

int main(){

    // DIFFRENT WAY TO TAKE INPUT IN STRING
    // string str1(5, 'n');
    // cout << str1 << endl;

    // string str2 = "AnkitRaj"; <!-- you can see we are not using space between Ankit and Raj -->
    // cout << str2;

    //this is to take input of a whole sentence
    string str3;
    getline(cin, str3);
    cout << str3 << endl;

     return 0;
}
