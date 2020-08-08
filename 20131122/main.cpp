//
//  main.cpp
//  20131122
//
//  Created by JM Park on 13. 11. 22..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    const int number=4;
    int en[number];
    int sum=0;
    int avg=0;
    int *pen;
    pen=en;
    
    cout << " 영어 점수를 입력해 주세요 " << endl;
    
    for(int i=0; i<number; i++) {
        cin >> pen[i];
    }
    for(int i=0; i<number; i++) {
        sum+=*(pen+i);
    }
    
    avg=(int)(sum/number);
    
    cout << " 영어점수의 합점은 " << sum << endl;
    cout << " 영어점수의 평균은 " << avg << endl;
    
    return 0;
}

