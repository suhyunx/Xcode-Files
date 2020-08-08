//
//  main.cpp
//  20140113
//
//  Created by JM Park on 2014. 1. 13..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    
    char ch;
    int kor[5];
    int i=0;
    int sum=0;
    
    do{
        cout << i+1 << " 번째 국어점수를 입력해주세요 : " << endl;
        cin >> *(kor+i);
        if(i==5)
            break;
        cout << " 프로그램을 종료하시겠습니까 [Y/N] : ";
        cin >> ch;
        i++;
    }while(ch!='y');
    
    for(int i=0; i<=5; i++)
        sum+=*(kor+1);
    
    cout << " 국어점수의 총점은 " << sum << " 입니다 " << endl;
    cout << " 국어점수의 평균은 " << sum/i << " 입니다 " << endl;
    // cout << " 국어점수의 평균은 " << sum/(sizeof(kor)/sizeof(int)) << endl;
}

