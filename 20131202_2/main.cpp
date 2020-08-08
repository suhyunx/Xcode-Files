//
//  main.cpp
//  20131202_2
//
//  Created by JM Park on 13. 12. 2..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>
#include "calc.h"

using namespace std;


void input(int a) {
    
    int i=0;
    
    
    for(i=1; i<10; i++)
    cout << a*i << endl;
}



int main(int argc, const char * argv[])
{
    int x;
    
    cin >> x;
    
    input(x);
    
}




    /* int size;
    
    
    // char arr[100];
    cout << " 이름의 크기를 입력하세요 " << endl;
    cin >> size;
    char * name=new char[size];
    cout << " 이름을 입력하세요 " << endl;
    cin >> name;
    
    cout << " 암호의 크기를 입력하세요 " << endl;
    cin >> size;
    cout << " 암호를 입력하세요 " << endl;
    char * pass=new char[size];
    cin >> pass;
    
    cout << " 주소의 크기를 입력하세요 " << endl;
    cin >> size;
    
    cout << " 주소를 입력하세요 " << endl;
    char * add=new char[size];
    getchar();
    cin.get(add,size);
    
    cout << " 아이디의 크기를 입력하세요 " << endl;
    cin >> size;
    cout << " 아이디를 입력하세요 " << endl;
    char * id=new char[size];
    cin >> id;
    // cin >> arr;
    
    
    cout << " 이름 : " << name << endl;
    cout << " 암호 : " << pass << endl;
    cout << " 주소 : " << add << endl;
    cout << " 아이디 : " << id << endl;
    */
    
    /* int x;
    int y;
    int z;
    cin >> x;
    cin >> y;
    
    z=addf(x, y);
    cout << z << endl;
    
    z=subf(x, y);
    cout << z << endl;
    
    z=mulf(x, y);
    cout << z << endl;
    
    */
    
