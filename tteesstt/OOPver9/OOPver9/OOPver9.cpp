#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main (void){
	AccountHandler manager;
	char choice;

	while(1){
		manager.ShowMenu();
		cout<<"���� : ";
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
				cout<< "���� ���� �Ǿ����ϴ�." <<endl;
				exit(1);
			default:
				cout<<"Illegal selecton.." <<endl;
				exit(1);
		}
	}

	return 0;
}




