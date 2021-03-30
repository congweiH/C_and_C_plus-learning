#include <iostream>
using namespace std;


int main(){

    /*
        基本类型 -> string
            to_string()
    */
    int i;
    string s = to_string(i);
    string str = i + "";
    cout << s << endl;

    /*
        string -> 基本类型
            stoi()
            stof()
            stod()
            ...
    */
    string j = "432";
    int u = stoi(j);
    cout << u << endl;

}