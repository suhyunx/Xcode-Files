//
//  main.cpp
//  20140127_4
//
//  Created by JM Park on 2014. 1. 27..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void input_time(char (*)[100]);
void output_time(char (*)[100]);

int main(int argc, const char * argv[])
{
    char study[5][100];
    
    input_time(study);
    output_time(study);
    
    
}

void input_time(char (*item)[100]) {
    cout << " 아이디 입력 : ";
    cin >> item[0];
    cout << " 비밀번호 입력 : ";
    cin >> *(item+1);
    cout << " 전화번호 입력 : ";
    cin >> *(item+2);
    cout << " 주소 입력 : ";
    cin >> item[3];
    cout << " 이름 입력 : ";
    cin >> item[4];
    getchar();
    cin.getline(item[4],100);
}

void output_time(char (*item)[100]) {
    cout << " 아이디는 : " << item[0] << endl;
    cout << " 비밀번호는 : " << *(item+1) << endl;
    cout << " 전화번호는 : " << *(item+2) << endl;
    cout << " 주소는 : " << item[3] << endl;
    cout << " 이름은 : " << item[4] << endl;
    
    
}