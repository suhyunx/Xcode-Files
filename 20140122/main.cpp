//
//  main.cpp
//  20140122
//
//  Created by JM Park on 2014. 1. 22..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    int * s1[4];
    int * s2[4];
    int * s3[4];
    int * s4[4];
    int * s5[4];
    int sum=0;
    
    
    
    
    /*
    
    cout << " 학생1 의 국어, 수학, 영어, 과확 점수를 입력해주세요 " << endl;
    
    for(int i=0; i<4; i++) {
        *(s1+i)=new int;
        cin >> **(s1+i);
    }
    
    
    cout << " 학생2 의 국어, 수학, 영어, 과확 점수를 입력해주세요 " << endl;

    for(int i=0; i<4; i++) {
        *(s2+i)=new int;
        cin >> **(s2+i);
    }
    cout << " 학생3 의 국어, 수학, 영어, 과확 점수를 입력해주세요 " << endl;

    for(int i=0; i<4; i++) {
        *(s3+i)=new int;
        cin >> **(s3+i);
    }
    cout << " 학생4 의 국어, 수학, 영어, 과확 점수를 입력해주세요 " << endl;

    for(int i=0; i<4; i++) {
        *(s4+i)=new int;
        cin >> **(s4+i);
    }
    cout << " 학생5 의 국어, 수학, 영어, 과확 점수를 입력해주세요 " << endl;
    
    for(int i=0; i>4; i++) {
        *(s5+i)=new int;
        cin >> **(s5+i);
    }
    
    for(int i=0; i<4; i++)
        sum+=**(s1+i);
        cout << " 학생1 의 총점: " << sum << " 평균: " << sum/5 << endl;
        sum=0;
    
    for(int i=0; i<4; i++)
        sum+=**(s2+i);
        cout << " 학생2 의 총점: " << sum << " 평균: " << sum/5 << endl;
        sum=0;
    
    for(int i=0; i<4; i++)
        sum+=**(s3+i);
        cout << " 학생3 의 총점: " << sum << " 평균: " << sum/5 << endl;
        sum=0;
    
    for(int i=0; i<4; i++)
        sum+=**(s4+i);
        cout << " 학생4 의 총점: " << sum << " 평균: " << sum/5 << endl;
        sum=0;
    
    for(int i=0; i<4; i++)
        sum+=**(s5+i);
        cout << " 학생5 의 총점: " << sum << " 평균: " << sum/5 << endl;
        sum=0;
    
   */
    

    
}


void input_func(int * st[0]) {
    static int num=1;
    cout << " 학생 " << num << " 의 점수를 국어, 과학, 수학 ,영어의 순으로 입력하세요 " << endl;
    for(int i=0; i<4; i++) {
        *(st+i)=new int;
        cin >> **(st+i);
    }
    num++;
}

