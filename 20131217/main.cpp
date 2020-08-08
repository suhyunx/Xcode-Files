//
//  main.cpp
//  20131217
//
//  Created by JM Park on 13. 12. 17..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void viewf(char *);

int main(int argc, const char * argv[])
{
    char * str=new char [20];
    
    cin >> str;
    viewf(str);
    
}

void viewf(char * view_str)
{
    int count=0;
    cout << view_str;
    
    while(1) {
        if(*(view_str+count) == NULL)
            break;
        count++;
    }
    cout << " 입력된 문자의 수는 " << count << "개 입니다 " << endl;
}