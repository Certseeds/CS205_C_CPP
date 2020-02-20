/*
 * @Github: https://github.com/Certseeds
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-02-20 19:33:40
 * @LastEditors: nanoseeds
 * @LastEditTime: 2020-02-20 19:35:48
 */
#include <iostream>
using std::cout;
using std::endl;
void smile();
int main(){
    for(int i = 0;i<3;i++){
        for(int j = 3;j>i;j--){
            smile();
        }cout<<endl;
    }   
}
void smile(){
    cout << "Smile!";
}