#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>
using namespace std;
const int first_money = 1000;
const int first_stock = 200;
const int first_customer = 20;
const int first_debt = 15000;

int main (void){
	srand(time(0));
	system ("COLOR A");
	
	int day = 1;
	int bread_cost = 10;
	int money = first_money;
	int income;
	int stock = first_stock;
	int customer = first_customer;
	int debt = first_debt;
	int decison;
	int cost_decider,ad_decider,loan_decider,debt_decider;
	int stock_for_spending;
	int producted_bread = 0;
	int sold_bread;
	int remained_bread;
	
	while (day <= 30){
		decison = 0;
		while (decison < 1 || decison > 6){
		cout <<"HELLO BOSS!!! OUR BAKERY NEEDS TO MADE IT RESCUE!!! GET READY!!!"<<endl;
		cout << "CURRENT BREAD PRICE: " << bread_cost << " TL" << endl;
		cout <<"1-PRODUCT BREADS"<<endl;
		cout <<"2-DEFINE BREAD COST"<<endl;
		cout <<"3-MAKE AN ADVERTISEMENT"<<endl;
		cout <<"4-TAKE OUT ON A LOAN"<<endl;
		cout <<"5-PAY THE DEBTS"<<endl;
		cout <<"6-END THE DAY"<<endl;
		cout <<"PLEASE ENTER YOUR DECISON BOSS!!!:";
		cin >>decison;
		}
		switch (decison){
			case 1:
				system ("COLOR D");
				cout <<"------BREAD PRODUCTION------"<<endl;
				cout <<"PLEASE ENTER THE STOCK VALUE THAT YOU NEED TO MAKE THEM BREAD:";
				cin >>stock_for_spending;
				while (stock_for_spending > stock || stock_for_spending % 10 != 0 || stock_for_spending <= 0){
					cout <<"BOSS!!! YOU ENTERED AN INVALID STOCK VALUE!!! PLEASE TRY AGAIN!!!:";
					cin >>stock_for_spending;
				}
				producted_bread += 20 * stock_for_spending;
				cout <<"YOUR PRODUCTED BREAD PIECE IS "<<producted_bread<<endl;
				stock -= stock_for_spending;
				money -= 10 * stock_for_spending;
				cout <<"YOUR REMAINED STOCK IS "<<stock<<endl;
				cout << "YOUR REMAINED MINEY IS "<<money<<endl;
				break;
			case 2:
				system ("COLOR F");
				do{
				cout <<"------DEFINING BREAD COST------"<<endl;
				cout <<"1-CHEAP (8 TL)==>MORE CUSTOMER"<<endl;
				cout <<"2-NORMAL (10 TL)==>BALANCED"<<endl;
				cout <<"3-EXPENSIVE (12 TL)==>LESS CUSTOMER"<<endl;
				cout <<"PLEASE ENTER THE COST BOSS!!!:";
				cin >>cost_decider;
				}while (cost_decider < 1 || cost_decider > 3);
				switch (cost_decider){
					case 1:
						cout << "THE BREAD COST WAS ARRANGED 8 TL!!!"<<endl;
						bread_cost = 8;
						break;
					case 2:
						cout << "THE BREAD COST WAS ARRANGED 10 TL!!!"<<endl;
						bread_cost = 10;
						break;
					case 3:
						cout <<"THE BREAD COST WAS ARRANGED 12 TL!!!"<<endl;
						bread_cost = 12;
						break;
				}
				break;
			case 3:
				system ("COLOR 6");
				do{
				cout <<"------ADVERTISEMENT------"<<endl;
				cout <<"LEVEL-1--> 500 TL(+3 CUSTOMER)"<<endl;
				cout <<"LEVEL-2--> 1000 TL(+7 CUSTOMER)"<<endl;
				cout <<"LEVEL-3--> 2000 TL (+15 CUSTOMER"<<endl;
				cout <<"YOUR BUDGET IS "<<money;
				cout <<"PLEASE ENTER YOUR DECISON BOSS!!!:";
				cin >>ad_decider;
				}while (ad_decider < 1 || ad_decider > 3);
				switch (ad_decider){
					case 1:
						if (money < 500){
							cout <<"YOU CAN NOT DO THIS ADVERTISE BOSS!!!"<<endl;
						}
						else {
							customer += 3;
							money -= 500;
							cout <<"YOUR REMAINED MONEY IS "<<money<<endl;
							cout <<"CUSTOMERS INCREASED 3!!!NOW YOUR CUSTOMERS ARE"<<customer<<endl;
						}
						break;
					case 2:
						if (money < 1000){
							cout <<"YOU CAN NOT DO THIS ADVERTISE BOSS!!!"<<endl;
						}
						else {
							customer += 7;
							money -= 1000;
							cout <<"YOUR REMAINED MONEY IS "<<money<<endl;
							cout <<"CUSTOMERS INCREASED 7!!!NOW YOUR CUSTOMERS ARE"<<customer<<endl;
						}
						break;
					case 3:
						if (money < 2000){
							cout << "YOU CAN NOT DO THIS ADVERTISE BOSS!!!"<<endl;
						}
						else {
							customer += 15;
							money -= 2000;
							cout <<"YOUR REMAINED MONEY IS "<<money<<endl;
							cout <<"CUSTOMERS INCREASED 15!!!NOW YOUR CUSTOMERS ARE"<<customer<<endl;
						}
						break;
					}
					break;
			case 4:
				system ("COLOR 3");
				do {
				cout <<"------TAKING OUT ON A LOAN------"<<endl;
				cout <<"BANK INTEREST : %20"<<endl;
				cout <<"YOUR BUDGET :"<<money<<endl;
				cout <<"YOUR DEBTS :"<<debt<<endl;
				cout <<"1-5000 TL (FEEDBACK : 6000 TL)"<<endl;
				cout <<"2-10000 TL (FEEDBACK : 12000 TL)"<<endl;
				cout <<"3-20000 TL (FEEDBACK : 24000 TL)"<<endl;
				cout <<"0-CANCEL"<<endl;
				cout <<"PLEASE ENTER YOUR DECISON BOSS!!!:";
				cin >>loan_decider;
				}while (loan_decider < 0 || loan_decider > 3);
				switch (loan_decider){
					case 0:
						cout <<"YOU DID NOT TAKE OUT ON A LOAN BOSS!!!"<<endl;
						break;
					case 1:
						debt += 6000;
						money += 5000;
						cout <<"YOUR NEW BUDGET IS "<<money<<endl;
						cout << "YOUR NEW DEBT IS "<<debt<<endl;
						cout <<"WARNING! YOUE DEBT IS INCREASED BOSS!!!"<<endl;
						break;
					case 2:
						debt += 12000;
						money += 10000;
						cout <<"YOUR NEW BUDGET IS "<<money<<endl;
						cout <<"YOUR NEW DEBT IS "<<debt<<endl;
						cout <<"WARNING! YOUE DEBT IS INCREASED BOSS!!!"<<endl;
						break;
					case 3:
						debt += 24000;
						money += 20000;
						cout <<"YOUR NEW BUDGET IS "<<money<<endl;
						cout <<"YOUR NEW DEBT IS "<<debt<<endl;
						cout <<"WARNING! YOUE DEBT IS INCREASED BOSS!!!"<<endl;
						break;
				}
				break;
			case 5:
				system ("COLOR 7");
				do{
				cout <<"------PAY THE DEBTS------"<<endl;
				cout <<"1-PAY 2000 TL"<<endl;
				cout <<"2-PAY 5000 TL"<<endl;
				cout <<"3-PAY 10000 TL"<<endl;
				cout <<"4-PAY ALL"<<endl;
				cout <<"0-CANCEL"<<endl;
				cout <<"PLEASE ENTER YOUR DECISION BOSS!!!:";
				cin >>debt_decider;
				}while (debt_decider < 0 || debt_decider > 4);
				switch (debt_decider){
					case 0:
						cout <<"YOU DID NOT PAY ANY DEBT BOSS!!! DO NOT FORGET TO PAY THEM!!!"<<endl;
						break;
					case 1:
						if (money < 2000){
							cout <<"YOU CAN NOT DO THIS PAYING BOSS!!! YOU HAVE NO MONEY!!!"<<endl;
						}
						else {
							money -=2000;
							debt -= 2000;
							if (debt < 0){
								debt = 0;
							}
							cout <<"YOUR NEW BUDGET IS "<<money<<endl;
							cout <<"YOUR NEW DEBT IS "<<debt<<endl;
						}
						break;
					case 2:
						if (money < 5000){
							cout <<"YOU CAN NOT DO THIS PAYING BOSS!!! YOU HAVE NO MONEY!!!"<<endl;
						}
						else {
							money -= 5000;
							debt -= 5000;
							if (debt < 0){
								debt = 0;
							}
							cout <<"YOUR NEW BUDGET IS "<<money<<endl;
							cout <<"YOUR NEW DEBT IS "<<debt<<endl;
						}
						break;
					case 3:
						if (money < 10000){
							cout <<"YOU CAN NOT DO THIS PAYING BOSS!!! YOU HAVE NO MONEY!!!"<<endl;
						}
						else {
							money -= 10000;
							debt -= 10000;
							if (debt < 0){
								debt = 0;
							}
							cout <<"YOUR NEW BUDGET IS "<<money<<endl;
							cout <<"YOUR NEW DEBT IS "<<debt<<endl;
						}
						break;
					case 4:
						if (money < debt){
							cout <<"YOU CAN NOT DO THIS PAYING BOSS!!! YOU HAVE NO MONEY!!!"<<endl;
						}
						else {
							money -= debt;
							debt = 0;
							cout <<"YOUR NEW BUDGET IS "<<money<<endl;
							cout <<"BOSS!!! YOU PAID ALL DEBTS CONGRATS AND KEEP MOVIN'!!!"<<endl;
						}
						break;
				}
				break;
				case 6:
					int event = rand() % 5;
					system ("COLOR B");
					cout <<"------DAY END------"<<endl;
					if (event == 0) {
   						cout << "RAINY DAY! CUSTOMERS DECREASED!!!\n";
    					customer -= 5;
						}
					else if (event == 1) {
  						cout << "BIG ORDER! +1000 TL\n";
 					  	money += 1000;
						}
					else if (event == 2) {
    					cout << "INSPECTION! -500 TL fine.\n";
    					money -= 500;
						}
					else if (event == 3) {
   						cout << "GOOD WEATHER! +5 customers.\n";
    					customer += 5;
						}
					if (customer < 0){
						customer = 0;
					}
					if (customer >= producted_bread){
						sold_bread = producted_bread;
					}
					else {
						sold_bread = customer;
					}
					income = sold_bread * bread_cost;
					money += income;
					remained_bread = producted_bread - sold_bread;
					money -= remained_bread * 2;
					if (money < 0){
						money = 0;
					}
					cout << "SOLD BREAD : " << sold_bread << endl;
   					cout << "REMAINED BREAD : " << remained_bread << endl;
    				cout << "INCOME : +" << income << endl;
    				customer = first_customer;
    				day ++;
    			break;
    		}
    	cout << "DAY: " << day << endl;
		cout << "MONEY: " << money << endl;
		cout << "DEBT: " << debt << endl;
		cout << "STOCK: " << stock << endl;
	}
	cout <<endl;
	cout <<endl;
	system ("COLOR 4");
	cout <<"------GAME OVER BOSS!!!------"<<endl;
	if (money <= 0) {
    	cout << "YOU WENT BANKRUPT!\n";
	}
	else if (money >= 50000 && debt == 0) {
    	cout << "YOU SAVED THE BAKERY!\n";
	}
	else if (money >= 50000 && debt > 0) {
    	cout << "YOU ARE RICH BUT STILL IN DEBT BOSS!!!\n";
    	cout << "PAY YOUR DEBTS NEXT TIME!!!\n";
	}
	else {
   		cout << "TIME IS UP!\n";
    	cout << "FINAL MONEY: " << money << endl;
    	cout << "REMAINING DEBT: " << debt << endl;
    }
	return 0;
}
