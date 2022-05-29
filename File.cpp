#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ofstream file("INT_MAX.txt");

    for (int i = 0; i <= INT_MAX;i++) file<<i<<" ";

    file.close();
}