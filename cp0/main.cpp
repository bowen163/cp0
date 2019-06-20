//
//  main.cpp
//  cp0
//
//  Created by s20181102936 on 2019/6/20.
//  Copyright © 2019 s20181102936. All rights reserved.
//

#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b;
    ifstream putin1("/Users/s20181102936/Desktop/student.txt");
    ifstream putin2("/Users/s20181102936/Desktop/caipan.txt");
    ofstream putout ("/Users/s20181102936/Desktop/score1.txt ");
    if(putin1.is_open())
    {
        cout<<"file ok"<<endl;
        putin1>>a;
        cout<<a<<"  "<<endl;
        putin1.close();
    }
    if(putin2.is_open())
    {
        cout<<"file ok"<<endl;
        putin2>>b;
        cout<<b<<endl;
        putin2.close();
    }
    if(putout.is_open())
    {
        putout<<"c="<<a+b<<endl;
        cout<<"c="<<a+b<<endl;
        putout.close();
    }
    return 0;
}
