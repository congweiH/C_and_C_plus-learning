#include <iostream>
#include <vector>
using namespace std;



int main(){
    int n = 5, m = 5;
    /*
        一维
    */
    // 定义一个，大小为n的vector
    vector<int> a(n);
    // 定义一个，大小为n, 元素均为0的vector
    vector<int> b(n, 0);

    /*
        二维
    */
    // 声明二维数组 a[n][m]
    vector<vector<int>> c(n, vector<int>(m));  
    cout << c[1][1] << endl;
    // 声明二维数组 b[n][m], 并初始化为0
    vector<vector<int>> d(n, vector<int>(m, 0));
    cout << d[1][1] << endl;


    
    return 0;
}