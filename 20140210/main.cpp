//
//  main.cpp
//  20140210
//
//  Created by JM Park on 2014. 2. 10..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class test {
private:
    char * name;
    char * number;
    char * class1;
    char * class2;
    char * class3;
public:
    test() { ; }
    test(const char * pname, const char * pnumber) {
        name=new char[strlen(pname)+1];
        number=new char[strlen(pnumber)+1];
        strcpy(name,pname);
        strcpy(number,pnumber);
    }
    void yam() {
        name=new char[14];
        number=new char[14];
        cout << " 학생 이름을 입력해주세요 " << endl;
        cin >> name;
        cout << " 학번을 입력해주세요 " << endl;
        cin >> number;
    }
    void nyam() {
        class1=new char[20];
        class2=new char[20];
        class3=new char[20];
        cout << " 첫번째 과목을 입력해주세요 " << endl;
        cin >> class1;
        cout << " 두번째 과목을 입력해주세요 " << endl;
        cin >> class2;
        cout << " 세번째 과목을 입력해주세요 " << endl;
        cin >> class3;
    }
    void out() {
        cout << " 이름: " << name << endl;
        cout << " 학번: " << number << endl;
        cout << " 첫번째 과목: " << class1;
        cout << " 두번째 과목: " << class2;
        cout << " 세번째 과목: " << class3 << endl;
    }
    
};

int main(int argc, const char * argv[])
{
    test sty1;
    test sty2=test("JohnMcginnis", "2015");
    test sty3;
    
    sty1.yam();
    sty1.nyam();
    
    sty2.nyam();
    
    sty3.yam();
    sty3.nyam();
    
    cout << " 수강 신청 화면입니다 " << endl;
    sty1.out();
    sty2.out();
    sty3.out();
    
    
}

