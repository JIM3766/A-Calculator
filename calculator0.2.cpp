// calculator0.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    cout << "Please input two integers:" << endl;
    string s1, s2;
    if (cin >> s1 >> s2)
    {
    int len1 = s1.length();
    int len2 = s2.length();
    int i, j;
    int sum[100];
    memset(sum, 0, sizeof(sum));  //initialization
    for (i = 0; i <= len1 - 1; ++i)
    {
        for (j = 0; j <= len2 - 1; ++j)
        {
            sum[i + j] += (s1[len1 - i - 1] - '0') * (s2[len2 - j - 1] - '0');  //To change the order of the string.
        }
    }
    for (int m = 0; m < len1 + len2; ++m)
    {
        sum[m + 1] += sum[m] / 10;
        sum[m] = sum[m] % 10;
    }
    int m = len1 + len2;
    if (sum[m] == 0)   //To delete the first zero.
        --m;
    while ( m > 0 )   //To output the array and change the order.
        cout << sum[--m] ;
    }
    else {
        cout << "Your input is wrong! Please input two integers." << endl;
    }                  //To tell you that your input is incorrect.
    return 0;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
