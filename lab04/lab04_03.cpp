#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int sub_main_04_03();
#ifndef UNIT_TESTING_LAB_04
#define UNIT_TESTING_LAB_04
int main() {
    int will_return = sub_main_04_03();
    cin.get();
    cin.get();
    return will_return;
}
#endif // !UNIT_TESTING_LAB_04
const int lab04_03_range = 5;
int sub_main_04_03() {
    int* five_array = new int[lab04_03_range];
    int* temp = five_array;
    memset(five_array, 0, lab04_03_range * sizeof(int));
    for (int i = 0; i < lab04_03_range; i++) {
        cout << "Input number " << i << " : ";
        cin >> (*temp);
        temp++;
        cin.get();
    }
    for (int i = 0; i < lab04_03_range; i++) {
        temp--;
        cout << "number " << i << " is : ";
        cout << (*temp)<< endl;
    }
    delete[] five_array;
    return 0;
}