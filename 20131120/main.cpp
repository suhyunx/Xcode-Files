//
//  main.cpp
//  20131120
//
//  Created by JM Park on 13. 11. 20..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    const int number=5;
    int x[number];
    int sum=0;
    int avg=0;
    
    cout << " 국어 성적을 입력하십시오. " << endl;
    
    for(int i=0; i<number; i++) {
        cin >> x[i];
    }
    
    for(int i=0; i<number; i++)
    {
        sum+=*(x+i);
    }
    
    avg=(int)(sum/number);
    
    cout << " 국어점수의 합계는 " << sum << " 입니다 " << endl;
    cout << " 국어점수의 평균은 " << avg << " 입니다 " << endl;
    
    return 0;
    
}

