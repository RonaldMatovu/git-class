#include<iostream>
#include<string>
using namespace std;
int main(){
string ussd;
string PIN;
cin>>ussd;
if(ussd=="*165#"){
	cout<<"Hi, welcome to the ZEECOM mobile money menu.\n please choose a service"<<endl;
	cout<<"1. send money"<<endl;
	cout<<"2. check balance"<<endl;
	cout<<"3. Buy airtime "<<endl;
	cout<<"4. Financial services"<<endl;
	cout<<"5. payments"<<endl;
	cout<<"6. Change language"<<endl;
	cout<<"7. Remittances"<<endl;
	cout<<"8. ZEECOM Services"<<endl;
	cout<<"9. Fee and Taxes"<<endl;
	cout<<"10. Donations"<<endl;
	cout<<"11. My Account"<<endl;
	cout<<"12. Help line"<<endl;
	
		}
		else
		cout<<"please enter the right code for the mobile money menu service";
int entry;
cin>>entry;
switch(entry){

case 1:
	cout<<"1. registered user"<<endl;
	cout<<"2. Non registered user"<<endl;
	int user_option;
	cin>>user_option;
	if(user_option==1){
		cout<<"enter no. of registered user \n";
		string reg_user_no;
		cin>>reg_user_no;
		
		if(reg_user_no.substr(0,3)=="077"||reg_user_no.substr(0,3)=="078" ){
			
			if(reg_user_no.size()==10){	
				cout<<"enter amount \n ";
				int amount;
				cin>>amount;
				cout<<"please enter your PIN"<<endl;
				cin>>PIN;
					if(PIN.size()==5){
						if(PIN=="12345"){
							cout<<"transaction successfull!\n";
							cout<<"you have sent sh. "<<amount<<" to "<<reg_user_no<<" \n your account balance is now *****";	
						}
						else 
						cout<<"wrong PIN";
					}
					else 
					cout<<"please enter a FIVE digit number";
			}
			else
			cout<<"please enter a 10 digit registred user no";
				
		}
		else
		cout<<"enter a number starting with 077..... or 078.... ";
	
	}
	else
	if(user_option==2){
		cout<<"enter the non registred user no \n";
		string non_reg_user_no;
		cin>>non_reg_user_no;
		if(non_reg_user_no.substr(0,3)!="077"||non_reg_user_no.substr(0,3)!="078" ){
			if(non_reg_user_no.size()==10){
				cout<<"enter amount \n ";
				int amount;
				cin>>amount;
								//enter a secret code
				cout<<"please enter a 4 digit secret code \n";
				string secret_code;
				cin>>secret_code;
				if(secret_code.size()==4){
					
					cout<<"please enter your PIN"<<endl;
					cin>>PIN;
						if(PIN.size()==5){
							if(PIN=="12345"){
								cout<<"transaction successfull!\n";
								cout<<"you have sent sh. "<<amount<<" to "<<non_reg_user_no<<" \n your account balance is now ***** \n ";	
								cout<<"please remember to send the secret code  "<<secret_code<<" to "<<non_reg_user_no;
							}
							else 
							cout<<"wrong PIN";
						}
						else 
						cout<<"please enter a FIVE digit PIN number";
				}
				else
				cout<<"wrong secret code, enter a 4 digit secret code";
			}
			else
			cout<<"please enter a 10 digit non registred user no";	
		}
		else
		cout<<"pliz enter a number of another network! \n e.g. starting with 070***, 075***, 073***, 079***";
	}
	else
	cout<<"\t awo tolina kyosabye!!!!!! \n \t \t choose an option 1 or 2";	
	break;	

case 2:

	cout<<"please enter your PIN"<<endl;
	cin>>PIN;
	if(PIN.size()==5){
		if(PIN=="12345"){
			cout<<"your balance is sh.******";	
		}
		else 
		cout<<"wrong PIN";
	}
	else 
	cout<<"please enter a FIVE digit number";
	break;
	
case 3:
	cout<<"1.buy for self.\n";
	cout<<"2.buy for other user.\n";
	int buy_at;
	cin>>buy_at;
		if(buy_at==1){
			cout<<"enter amount: \n";
			int amount_of_at;
			cin>>amount_of_at;
			cout<<"please enter your PIN"<<endl;
			cin>>PIN;
				if(PIN.size()==5){
					if(PIN=="12345"){
						cout<<"transaction successfull!\n";
						cout<<"you have bought airtime worth "<<amount_of_at<<" \n your account balance is now *****";	
					}
					else 
					cout<<"wrong PIN";
				}
				else 
				cout<<"please enter a FIVE digit number";
		}
		else
			if(buy_at==2){
				cout<<"please enter other user's number: \n";
				string other_user_no;
				cin>>other_user_no;
				if(other_user_no.size()==10){
					cout<<"enter amount: \n";
					int amount_of_at;
					cin>>amount_of_at;
				
					
						cout<<"please enter your PIN"<<endl;
						cin>>PIN;
							if(PIN.size()==5){
								if(PIN=="12345"){
									cout<<"transaction successfull!\n";
									cout<<"you have bought airtime worth "<<amount_of_at<<" \n for"<<other_user_no;
									cout<<"your account balance is now *****\n";	
									
								}
							else 
								cout<<"wrong PIN";
							}
							else 
							cout<<"please enter a FIVE digit number and try again";
				
			
				}
				else
				cout<<"wrong user number length";
			}
		else
		cout<<"\t awo tolina kyosabye!!!!!!";	
//  goto statement in case of *165#

break;
case 4:
	cout<<"this service is still under construction \n thank you for using this service";
break;

case 5:	
	cout<<"1. Utilities \n";
	cout<<"2. pay TV \n";
	cout<<"3. School fees \n";
	cout<<"4. Media \n";
	cout<<"5. Back \n";
	
		
	int payments;
	cin>>payments;
	if(payments==1){
		cout<<"\t Utilities \n" ;
		cout<<"1. UMEME Touch Pay \n";
		cout<<"2. NWSC \n";
		cout<<"3. Ready Pay \n";
		cout<<"4. MKOPA \n";
	
		int utility;
		cin>>utility;
		
		if(utility==1){
			cout<<"\t UMEME Touch Pay \n";
			cout<<"1. pay bill \n ";
			cout<<"2. Yaka \n";
			int UMEME_entry;
			cin>>UMEME_entry;
			if(UMEME_entry==1){
				cout<<"Enter Account No. \n";
				string account_no;
				cin>>account_no;
				if(account_no.size()==10){
					
				}
				else
				cout<<"Invalid Account no. \n please Enter valid Account No. and try again";
			}
			
		}
		else 
		cout<<"\t awo tolina kyosabye!!!!!!";
	}
	
	if(payments==4){
		cout<<"yello! thank you for trying out our new services.\n we are loading more services in the coming days \n and this service will be available very soon. \n";
		cout<<"Thank you.";
	}
	else 
	cout<<"\t awo tolina kyosabye!!!!!!";	
	break;
	
	case 6:
		cout<<"\t change language \n";
		cout<<"1. Luganda \n"<<endl;
		cout<<"2. English \n"<<endl;
	break;

	case 7:
		cout<<"\t Remittances \n"<<endl;
		cout<<"1. Western Union \n"<<endl;
		cout<<"2. Other Remitances \n"<<endl;
		
		int remitance_option;
		cin>>remitance_option;
		if(remitance_option==1){
			cout<<"\t Western Union \n";
			cout<<"1. send Money \n";
			cout<<"2. Pick up Money \n";
			cout<<"3. Creat Contact \n";
			cout<<"4. Delete Contact \n";
			
			int wu_option;				// western union option
			cin>>wu_option;
			if(wu_option==1){
				cout<<"\t Send Money \n";
				cout<<"1. To Number \n";
				cout<<"2. To Contact \n";
				
				int send_money_to;
				cin>>send_money_to;
				if(send_money_to==1){
					cout<<"Enter country: \n";
					string country;
					cin>>country;
					cout<<"\n First Name: \n";
					string first_name;
					cin>>first_name;
					cout<<"\n Last name: \n";
					string last_name;
					cin>>last_name;
					cout<<"\n Do you have a Promo Code? \n";
					cout<<"1. Yes \n";
					cout<<"2. No \n";
				}
			}
			
		}
		else
			if(remitance_option==2){
				cout<<"\t other remittances \n";
				cout<<"1. send money to Rwanda \n";
				int other_remitances;
				cin>>other_remitances;
				if(other_remitances==1){
					cout<<"yello! thank you for trying out our new services.\n we are loading more services in the coming days \n and this service will be available very soon. \n";
					cout<<"Thank you.";
				}
				else
				cout<<"\t awo tolina kyosabye!!!!!!";
			}
		else 
		cout<<"\t awo tolina kyosabye!!!!!!";	
	break;
	
case 8:
	cout<<"\t ZEECOM Services \n";
	cout<<"1. ZEECOM bills \n";
	cout<<"2. ZEECOM Kampala Marathon";
	
	int ZEECOM_services;
	cin>>ZEECOM_services;
	if(ZEECOM_services==1){
		
	}
	
break;
}
}

