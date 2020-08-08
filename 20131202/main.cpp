//
//  main.cpp
//  20131202
//
//  Created by JM Park on 13. 12. 2..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    char user[17];
    int u_hp=500;
    int u_mp=100;
    int u_attack=0;
    int u_move=0;
    
    
    char monster[16];
    int m_hp=300;
    int m_mp=80;
    int m_attack=0;
    int m_meet=0;
    
    int temp=0;
    int fight=0;
    int ft_choice=0;
    
    int i=0;
    srand((unsigned)time(NULL));
    
    while(u_move!=5) {
        cout << " 캐릭터의 행동을 입력해주세요." << endl;
        cout << " 0. 대기모드   1. 앞으로   2. 왼쪽으로   3. 오른쪽으로  4. 뒤쪽으로  5. 종료 " << endl;
        cin >> u_move;
        temp=rand();
        m_meet=temp%10;
        
        switch (u_move) {
            case 0:
                cout << " 캐릭터는 제자리에서 대기합니다. " << endl;
                break;
            case 1:
                cout << " 앞으로 이동중입니다. " << endl;
                break;
            case 2:
                cout << " 왼쪽으로 이동중입니다. " << endl;
                break;
            case 3:
                cout << " 오른쪽으로 이동중입니다. " << endl;
                break;
            case 4:
                cout << " 뒤로 이동중입니다. " << endl;
                break;
            case 5:
                cout << " 게임을 종료했습니다. " << endl;
                break;
            default:
                cout << " 값이 잘못 입력되었습니다. " << endl;
            
        }
        cout << " 몬스터 여부를 입력해주세요. 1~9까지 아무숫자나 입력하시면 몬스터를 만납니다. " << endl;
        cin >> m_meet;
        if(m_meet>=5) {
            cout << " 몬스터를 만났습니다. 싸울려면 ' 1 ', 도망갈려면 ' 0' 을 입력해주세요. " << endl;
            cin >> ft_choice;
            if(ft_choice==0) {
                fight=(rand( )%10);
                if(fight>=3) {
                    cout << " 도망가지 못했습니다. 싸울준비를 해주세요. " << endl;
                while((m_hp > 0) && (u_hp > 0)) {
                    cout << " 공격 매뉴를 선택해주세요. " << endl;
                    cout << " 1. 단검  2. 장검  3. M16A4 " << endl;
                    cin >> u_attack;
                    switch (u_attack) {
                        case 1:
                            m_hp=m_hp-10;
                            break;
                        case 2:
                            if(u_mp >= 20) {
                                m_hp=m_hp-40;
                                u_mp=u_mp-20;
                            }
                            else
                                cout << " MP값이 부족합니다. " << endl;
                            break;
                        case 3:
                            if(u_mp == 100) {
                                m_hp=m_hp-100;
                                u_mp=u_mp-100;
                            }
                            else
                                cout << " MP값이 부족합니다. " << endl;
                            break;
                        default:
                            cout << " 값을 잘못 입력하셨습니다. " << endl;
                    }
                    cout << " 현재 몬스터의 에너지는 " << m_hp << " 입니다 " << endl;
                    
                }
                }
            }
            
        }
        
    }
    
    
    
    return 0;
}

