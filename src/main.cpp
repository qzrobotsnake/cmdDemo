/*
 * @Author: snake qzrobotsnake@gmail.com
 * @Date: 2023-07-05 11:08:00
 * @LastEditors: snake qzrobotsnake@gmail.com
 * @LastEditTime: 2023-07-26 13:41:55
 * @FilePath: \cppDemo\src\main.cpp
 */
#include <iostream>
using namespace std;
int main()
{
    string cmd;
    cin >> cmd;
    if (cmd == "vex")
    {
        system("make clean");
        system("make all -j");
        system("pros mut");
    }
    else if (cmd == "git")
    {
        string website;
        cin >> website;
        string git_cmd = "git clone " + website;
        system(git_cmd.c_str());
    }
    return 0;
}