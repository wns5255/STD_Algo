/*
 * Banking System Ver 0.1
 * 작성자 : 윤성우
 * 내 용 : OOP 단계별 프로젝트의 기본 틀 구성
 */
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);            // 메뉴출력
void MakeAccount(void);         // 계좌개설을 위한 함수
void DepositMoney(void);        // 입     금
void WithdrawMoney(void);       // 출     금
void ShowAllAccInfo(void);      // 잔액조회

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT);

typedef struct
{
    int accID;      // 계좌번호
    int balance;    // 잔     액
    char cusName[NAME_LEN];     // 고객이름
}
Account;
Account accArr[100];
int accNum = 0;

int main(void)
{
    int choice;
    
    while(1)
    {
        ShowMenu();
        cout<<"선택: ";
        cin>>choic;
        cout<<endl;
        
        switch(choice)
        {
        case MAKE:
            MakeAccount();
            break;
        case DEPOSIT:
            DepositMoney();
            break;
        case WITHDRAW:
            WithdrawMoney();
            break;
        case INQUIRE :
            ShowAllAccInfo();
            break;
        case EXIT:
            return 0;
        default:
            cout<<"Illegal selection.."<<endl;
        }
    }
    return 0;
}

