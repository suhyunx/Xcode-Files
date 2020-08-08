//
//  main.cpp
//  20131223
//
//  Created by JM Park on 2013. 12. 23..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

class charactor{
private:
    int type;
    char *name;
    int hp;
    int mana;
    int power;
    
public:
    charactor(){
        type=0;
        name=new char[31];
        strcpy(name, " 이름이 지정되지 않은 캐릭터 " );
        hp=0;
        mana=0;
        power=0;
    }
    charactor(int ptype, char * pname, int php, int pmana, int ppower){
        type=ptype;
        hp=php;
        mana=pmana;
        power=ppower;
        int size=0;
        size=strlen(pname)+1;
        name=new char[size];
        strcpy(name,pname);
        
    }
    void makech(){
        cout << " 캐릭터를 선택하세요.. 1은 전사, 2는 마법사, 3은 팔리딘 : ";
        cin >> type;
        
        cout << " 캐릭터의 이름을 입력하세요. 캐릭터의 이름은 최대 10글자까지 가능합니다 : ";
        name=new char[21];
        cin >> name;
        
        cout << " 캐릭터가 초기화 됩니다. " << endl;
        hp=1000;
        mana=100;
        power=30;
    }
    
    void viewch() {
        cout << " 생선된 캐릭터는 " << name << " 이며, " << endl;
        cout << " HP : " << hp << endl;
        cout << " mana : " << mana << endl;
        cout << " power : " << power << endl;
        
    }
};

class monster1{
               private:
               int hp;
               int mana;
               char * skill[3];
               char * name;
               int id;
               
               public:
    monster1() { ; }
    monster1(char * pname, char * pskill1, const char * pskill2, const char * pskill3, int php, int pmana) {
        name=new char[strlen(pname)+1];
        strcpy(name, pname);
        hp=php;
        mana=pmana;
        skill[0]=new char[strlen(pskill1)+1];
        skill[1]=new char[strlen(pskill2)+1];
        skill[2]=new char[strlen(pskill3)+1];
        strcpy(skill[0],pskill1);
        strcpy(skill[1],pskill2);
        strcpy(skill[2],pskill3);
        id=3;
    }
    monster1(monster1 & pmon){
        name=new char[strlen(pmon.name)+1];
        strcpy(name,pmon.name);
        hp=pmon.hp;
        mana=pmon.mana;
        skill[0]=new char[strlen(pmon.skill[0])+1];
        skill[1]=new char[strlen(pmon.skill[1])+1];
        skill[2]=new char[strlen(pmon.skill[2])+1];
        strcpy(skill[0],pmon.skill[0]);
        strcpy(skill[1],pmon.skill[1]);
        strcpy(skill[2],pmon.skill[2]);
        id=3;
        
    }
    
    ~monster1() {
        delete [] name;
        delete [] skill[0];
        delete [] skill[1];
        delete [] skill[2];
    }
               void view() {
                   cout << " 생성된 몬스터는 : " << name << endl;
                   cout << " HP : " << hp << endl;
                   cout << " MANA : " << mana << endl;
                   cout << " 스킬 : " << skill[0] << " , " << skill[1] << " , " << skill[2] << endl;
                   
               }
};

int main(int argc, const char * argv[])
{
    cout << " ++++++++++++++++++++++++++++++++++++++++++++++++ " << endl;
    cout << "                   캐릭터 정보                       " << endl;
    cout << " ++++++++++++++++++++++++++++++++++++++++++++++++ " << endl;
    
    charactor ch1(3, "아서스", 1000, 100, 30);
    
    ch1.viewch();
    
    charactor ch2=charactor(2, "제이나", 500, 300, 20);
    
    ch2.viewch();
    
    cout << endl << endl << endl;
    
    cout << " ++++++++++++++++++++++++++++++++++++++++++++++++ " << endl;
    cout << "                   몬스터 정보                       " << endl;
    cout << " ++++++++++++++++++++++++++++++++++++++++++++++++ " << endl;
    
    monster1 mon(" 늑대 ", " 스킬1 없음 ", " 스킬2 없음 ", " 스킬3 없음 ",150,0);
    monster1 mon2=mon;
    monster1 mon3=mon;
    mon.view();
    mon2.view();
    mon3.view();
    
    
}

