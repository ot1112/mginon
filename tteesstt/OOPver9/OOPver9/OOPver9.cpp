#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main (void){
	AccountHandler manager;
	char choice;

	while(1){
		manager.ShowMenu();
		cout<<"선택 : ";
		cin>>choice;
		cout<<endl;

		switch((int)choice){
			case MAKE:
				manager.MakeAccount();	break;
			case DEPOSIT:
				manager.DepositMoney(); break;
			case WITHDRAW:
				manager.WithdrawMoney(); break;
			case INQUIRE:
				manager.ShowAllAccInfo(); break;
			case EXIT:
				cout<< "정상 종료 되었습니다." <<endl;
				exit(1);
			default:
				cout<<"Illegal selecton.." <<endl;
				exit(1);
		}
	}

	return 0;
}




