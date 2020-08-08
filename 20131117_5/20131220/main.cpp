//
//  main.cpp
//  20131220
//
//  Created by JM Park on 2013. 12. 20..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void viewf(char **);


int main(int argc, const char * argv[])
{
    char *str[3];
    for(int i=0; i<3; i++)
        str[i]=new char[20];
    for(int i=0; i<3; i++)
        cin.getline(str[i],20);
    viewf(str);
    
    
}

void viewf(char ** view_str)
{

    cout << *view_str[0] << endl;
    cout << *(*view_str+1) << endl;
    cout << *view_str[2] << endl;
    
    cout << view_str[0] << endl;
    cout << (*view_str+1) << endl;
    cout << view_str[2] << endl;
    
}