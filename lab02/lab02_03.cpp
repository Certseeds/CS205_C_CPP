/*
 * @Github: https://github.com/Certseeds
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-02-28 09:09:46
 * @LastEditors: nanoseeds
 * @LastEditTime: 2020-02-28 16:19:07
 */

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
int main() {
    cout << std::setiosflags(std::ios::fixed);  
    cout << std::setprecision(8);
    char ch = '0';
    int in = -1;
    float fl = 0;
    cout << " Please Enter a Character : ";
    cin >> ch;
    cout << " Please Enter an Integer Value : ";
    cin >> in;
    cout << " Please Enter Float Value : ";
    cin >> fl;
    cout << endl;
    cout << " The variables you entered were : \n";
    cout << " The Character you entered is : " << ch << endl;
    cout << " The Integer Value that you Entered is : " << in << endl;
    cout << " The Float Value that you Entered is : " << fl << endl;

    return 0;
}