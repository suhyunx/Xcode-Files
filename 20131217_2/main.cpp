//
//  main.cpp
//  20131217_2
//
//  Created by JM Park on 13. 12. 17..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void viewf(char **);

int main(int argc, const char * argv[])
{
    char *str[3];
    for(int i=0; i < 3; i++)
        str[i]=new char[20];
    for(int i=0; i < 3; i++)
        cin.getline(str[i],20);
    viewf(str);
  //  for(int i=0; i < 3; i++)
    //     cout << str[i];
}

void viewf(char ** view_str)
{
    
    cout << *view_str[0] << endl;
    cout << *(*view_str+1) << endl;
    cout << *view_str[2] << endl;
    
    cout << view_str[0] << endl;
    cout << (*view_str+1) << endl;
    cout << view_str[2] << endl;
    
   /* int count=0;
    cout << view_str;
    
    while(1) {
        if(*(view_str+count) == NULL)
            break;
        count++;
    }
    cout << " 입력된 문자의 수는 " << count << "개 입니다 " << endl;
    */
}