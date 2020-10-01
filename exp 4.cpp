#include <bits/stdc++.h>
using namespace std;

class Account{
private:
	string name ;
	long acc_num;
	char acc_type;

public:
 int balance;
 void initialise(){
			
			cout<<"\nEnter the full name: ";
			cin>>name;
			cout<<"Enter the account number: ";
			cin>>acc_num;
			cout<<"Enter the type of account (C[current]/S[savings]): ";
			cin>>acc_type;
			cout<<"Enter the balance amount: Rs. ";
			cin>>balance;
			if( acc_type=='S'|| acc_type=='s' ){
				cout<<"You will be provided CI and wihdrawal facilities, without any cheque book facility"<<endl;
			}
			else if( acc_type=='C'||acc_type=='c' ){
				cout<<"You will not get any interest on the stored amount and you will have to maintain a minimum sufficient balance of Rs. 1000"<<endl;

			}
			}
	     
 void deposit(){
 	double dep_amt;
 	cout<<"\nEnter amount you want to deposit: Rs. ";
 	cin>>dep_amt;
 	balance+=dep_amt;
 	cout<<"Amount:rs "<<dep_amt<<"has been credited in your bank account. Your current balance is Rs. "<<fixed<<balance<<endl;
 	
 }

 void withdraw(){
 	double withd_amt;
    cout<<"\nEnter the amount you want to withdraw: Rs. ";
    cin>>withd_amt;
     if(balance-withd_amt>0){
 	 	balance-=withd_amt;
 	 	cout<<"Amount- Rs. "<<withd_amt<<" has been debited from your bank account. Your current balance is Rs. "<<fixed<<balance<<endl;
 	 	 }

 	 else{
 	 	cout<<"You have Insufficient balance"<<endl;
 	 }}
 	 
  void disp(){
 	cout<<"\n"<<name<<", Your current balance is Rs. "<<fixed<<balance<<endl;
  }

  void act_type();
};

class Curr_acct: public Account{
 public:
 	 void service_charges(){
    	float s_chrg= 51.50;
    	balance-=s_chrg;
    	cout<<"ALERT!!  Balance is less than minimum sufficient balance. Service charges debited from account. Total balance is Rs. "<<balance<<endl;
    }
};

class Sav_acct: public Account{

  void interest(){
          float i_amt;
          i_amt= (balance*5.7)/100;
          balance+=i_amt;
          cout<<"Interest credited. Total balance is Rs. "<<balance<<endl;
 	 }
};

void ::act_type(){
    
      if(acc_type=='c'|| acc_type=='C'){
      	 if(balance<=1000){
      	    service_charges();
       }
         else{
       	    disp();
       }
      }
      else if(acc_type=='S'||acc_type=='s'){
        	interest();
      }
}


int main(){
 int i;
 Account A[2];

	for(int i=0;i<2;i++)
	{
		A[i].initialise();
		A[i].deposit();
      cout<<"X===========--"<<i+1<<"--============X"<<endl;
	}

 
  for(i=0;i<2;i++){
  	  A[i].act_type();
         	
  	}

	return 0;
}
