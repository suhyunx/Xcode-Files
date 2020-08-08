//
//  main.c
//  20140420
//
//  Created by JM Park on 2014. 4. 20..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b;
    printf(" 하루에 핀 담배 갯수 : ");
    scanf("%d",&a);
    b=(100*365*24*60-(a*2*365*100))/24/365/60;
    printf(" 남은 목숨 : %d ",b);
    return 0;
}

