//
//  main.cpp
//  20131223_2
//
//  Created by JM Park on 2013. 12. 23..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class abc{
private:
    int i;
    int j;
    char * text;
public:
    abc(int x, int y, char * ptext){
        i=x;
        j=y;
        text=new char[strlen(ptext)+1];
        strcpy(text,ptext);
    }
    
    abc(){
        i=0;
        j=0;
    }
    
    abc(abc &ppa){
        i=ppa.i;
        j=ppa.j;
        text=new char[strlen(ppa.text)+1];
        strcpy(text,ppa.text);
    }
    ~abc() {
        cout << " 객체가 삭제되었습니다 " << endl;
        delete [] text;
        
    }
    
    void operator=(abc & pabc){
        i=pabc.i;
        j=pabc.j;
        text=new char[strlen(pabc.text)+1];
        strcpy(text,pabc.text);
    }
    abc &operator+(abc temp){
        abc sum;
        sum.i=i+temp.i;
        sum.j=j+temp.j;
        sum.text=new char[strlen(temp.text)+1+strlen(text)+1];
        strcpy(sum.text, " 문자열 두개 합친것 ");
        
        return sum;
        
    }
    
    abc &operator-(abc temp){
        abc sum;
        sum.i=i-temp.i;
        sum.j=j-temp.j;
        sum.text=new char[strlen(temp.text)+1+strlen(text)+1];
        strcpy(sum.text, " 문자열 두개 합친것 ");
        
        return sum;
        
    }
    
    bool operator>(abc & temp){
        if((this->i > temp.i) && (i > temp.j))
            return true;
        else
            return false;
    }
    
    bool operator<(abc & temp){
        if((i < temp.i) && (i < temp.j))
            return true;
        else
            return false;
    }
    
    abc & operator++(int dummy) {
        this->i++;
        this->j++;
        return *this;
    }
    
    /* void operator << (abc & temp) {
        cout << temp.i << endl;
        cout << temp.j << endl;
        cout << temp.text << endl;
    } */

    void view(){
        cout << this->i << endl;
        cout << this->j << endl;
        cout << text << endl;
    }
};

int main(int argc, const char * argv[])
{
    abc pa(100,200,"test text");
    pa.view();
    
    abc pa2=pa;
    pa2.view();
    abc pa3;
    pa3=pa;
    pa3.view();
    pa3=pa+pa;
    pa3.view();
    if(pa>pa3)
        cout << " pa가 크다 " << endl;
    else
        cout << " pa가 작다 " << endl;
    
    pa2=pa;
    pa2.view();
    pa2=pa-pa2;
    pa2.view();
    if(pa<pa3)
        cout << " pa가 크다 " << endl;
    else
        cout << " pa가 작다 " << endl;
    pa++;
    pa.view();
}

