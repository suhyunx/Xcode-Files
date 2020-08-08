//
//  main.cpp
//  20140212
//
//  Created by JM Park on 2014. 2. 12..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class test {
private:
    int i;
    int j;
    char * str;
public:
    test () {
        i=0;
        j=0;
        str=new char[10];
        strcpy(str,"test pgm");
    }
    test(int pi, int pj, char * pstr) {
        i=pi;
        j=pj;
        str=new char[strlen(pstr)+1];
        strcpy(str, pstr);
    }
    test(test & temp) {
        i=temp.i;
        j=temp.j;
        str=new char[strlen(temp.str)+1];
        strcpy(str,temp.str);
    }
    ~test() {
        delete [] str;
    }
    test operator=(test temp) {
        i=temp.i;
        j=temp.j;
        str=new char[strlen(temp.str)+1];
        strcpy(str,temp.str);
        return *this;
    }
    test& operator+(test temp) {
        test result;
        result.i=this->i+temp.i;
        result.j=this->j+temp.j;
        result.str=new char[strlen(this->str)+strlen(temp.str)+2];
        strcpy(result.str, "합쳐진 문자열");
        cout << result.i;
        cout << result.j;
        cout << result.str;
        return result;
    }
    test& operator-(test temp) {
        test result;
        result.i=this->i-temp.i;
        result.j=this->j-temp.j;
        result.str=new char[strlen(this->str)+strlen(temp.str)+2];
        strcpy(result.str, "Mcginnis");
        cout << result.i;
        cout << result.j;
        cout << result.str;
        return result;
    }
    bool operator>(test temp) {
        if(this->i>temp.i)
            return true;
        else
            return false;
    }
    bool operator<(test temp) {
        if(this->i<temp.i)
            return true;
        else
            return false;
    }
    test output_obj() {
        cout << this->i << " , " << this->j << " , " << this->str << endl;
        return *this;
    }
};

int main(int argc, const char * argv[])
{
    test a;
    test b(100,200,"인수있음");
    test c=b;
    
    a=b;
    
    b.output_obj();
    a.output_obj();
    
    c=a+b;
    c.output_obj();
    
    c=a-b;
    c.output_obj();
    
    if(a>b)
        cout << " A객체가 B객체보다 크다 " << endl;
    else
        cout << " B객체가 A객체보다 크거나 같다 " << endl;
    
    if(a<b)
        cout << " A객체가 B객체보다 작다 " << endl;
    else
        cout << " A객체가 B객체보다 크거나 같다 " << endl;
    
}