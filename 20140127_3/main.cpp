//
//  main.cpp
//  20140127_3
//
//  Created by JM Park on 2014. 1. 27..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void input_time(int (*)[5]);
void output_time(int (*)[5], char *pstr[]);

int main(int argc, const char * argv[])
{
    int study[8][5];
    char *str[5];
    for(int i=0; i<5; i++)
        str[i]=new char[7];
    str[0]=" 월요일 ";
    str[1]=" 화요일 ";
    str[2]=" 수요일 ";
    str[3]=" 목요일 ";
    str[4]=" 금요일 ";
    
    input_time(study);
    output_time(study,str);
    
    
    
    
}

void input_time(int (*subject)[5]) {
    for(int i=0; i<8; i++)
        for(int j=0; j<5; j++)
            switch(j) {
                case 0:
                    cout << " 월요일 " << j+1 << " 교시과목입력: " << endl;
                    cout << " 1) 국어, 2) 수학, 3) 과학, 4) 영어, 5) 미술, 6) 음악 " << endl;
                    cin >> subject[i][j];
                    break;
                case 1:
                    cout << " 화요일 " << j+1 << " 교시과목입력: " << endl;
                    cout << " 1) 국어, 2) 수학, 3) 과학, 4) 영어, 5) 미술, 6) 음악 " << endl;
                    cin >> subject[i][j];
                    break;
                case 2:
                    cout << " 수요일 " << j+1 << " 교시과목입력: " << endl;
                    cout << " 1) 국어, 2) 수학, 3) 과학, 4) 영어, 5) 미술, 6) 음악 " << endl;
                    cin >> subject[i][j];
                    break;
                case 3:
                    cout << " 목요일 " << j+1 << " 교시과목입력: " << endl;
                    cout << " 1) 국어, 2) 수학, 3) 과학, 4) 영어, 5) 미술, 6) 음악 " << endl;
                    cin >> subject[i][j];
                    break;
                case 4:
                    cout << " 금요일 " << j+1 << " 교시과목입력: " << endl;
                    cout << " 1) 국어, 2) 수학, 3) 과학, 4) 영어, 5) 미술, 6) 음악 " << endl;
                    cin >> subject[i][j];
                    break;
                    
                    
                    
            }
    
    
}