//Vender_Machine


#include <iostream>
using namespace std;

int main ()
{
	//Defind the each variables
	int A=10, B=20, C=30, D=40, E=50, num;
	int R1=100, R2=100, R5=100, R10=100;
	int coins1, coins2, coins5, coins10;
	int user_entry_value, balance, Pbalance,price, Lbalance, Nbalance, PW, NextPW;
	int y=0, a, b, x=0, z=0;
	
cout << "..........................................VENDER MACHINE.........................................." <<endl;

//Start the loop
while (R1!=0 && R2!=0 && R5!=0 && R10!=0) {
while(x<1)
{

		
	
			//Lets the customer input the required product

			cout << "Welcome, How may I help you?" <<endl;
			cout << "Product A : enter 1" << endl;
			cout << "Product B : enter 2" << endl;
			cout << "Product C : enter 3" << endl;
			cout << "Product D : enter 4" << endl;
			cout << "Product E : enter 5 \n\n";
			
			cout << "Enter the desired product number : ";
			cin >> num;
			
		
				
					switch (num)
					{
						case 1 : cout << "The Price of products A is Rs.10 \n"; 
						price = A;
						break;
						
						case 2 : cout << "The Price of products B is Rs.20 \n"; 
						price = B;
						break;
					
						case 3 : cout << "The Price of products C is Rs.30 \n";
						price = C;
						break;
				
						case 4 : cout << "The Price of products D is Rs.40 \n"; 
						price = D;
						break;
						
						case 5 : cout << "The Price of products E is Rs.50 \n";
						price = E;
						break;
						
					}
			//Cheking the validation of yje iteam number entered by the customer		
			if (num>0 && num <6)
			{
		
					//Coins Printing process
					cout << "\nPlease enter the payment through the slot (Rs: 1, 2, 5 and 10 coins are only accepted)\n" <<endl;
					cout << "Number of Rs. 1 coins : " ;
					cin >> coins1;
					cout << "Number of Rs. 2 coins : " ;
					cin >> coins2;
					cout << "Number of Rs. 5 coins : " ;
					cin >> coins5;
					cout << "Number of Rs. 10 coins : ";
					cin >> coins10;
					
					user_entry_value = (coins1*1) + (coins2*2) + (coins5*5) + (coins10*10);
					cout << "\nThe total amount you entered :" << user_entry_value <<endl;
					
					balance = user_entry_value - price;
					
						while (balance > 0)
						{
							
							cout << "\nYour balance is Rs. " << balance << ". Get your balance through the coin slot... " <<endl ; 	
							
							a = balance;
							
							
							b = a / 10;
							b = a / 10;
							
							if(b>0){
								cout << "Rs.10 x " << b << endl;
								R10 = R10 - b;
							}
							
							a = a % 10;
							b = a / 5;
							
							if(b>0){
								cout << "Rs.5 x " << b << endl;
								R5 = R5 - b;
							}
							
							a = a % 5;
							b = a / 2;
							
							if(b>0){
								cout << "Rs.2 x " << b << endl;
								R2 = R2 - b;
							}
						
							a = a % 2;
							b = a / 1;
							
							if(b>0){
								cout << "Rs.1 x " << b << endl;	
								R1 = R1 - b;
							}
							cout << "\nThnak you! Have a nice day!!!!! \n" <<endl;
						balance=0;
						}
								
					//The process of checking arrears
						while(balance<0){
						
							balance = -balance;
							cout << "Rs. "	<< balance << " insufficient, please insert remaining amount..." <<endl;
							Pbalance = balance;
							cout << "\nPlease enter the payment through the slot (Rs: 1, 2, 5 and 10 coins are only accepted)" <<endl;
							cout << "Number of Rs. 1 coins : " ;
							cin >> coins1;
							cout << "Number of Rs. 2 coins : " ;
							cin >> coins2;
							cout << "Number of Rs. 5 coins : " ;
							cin >> coins5;
							cout << "Number of Rs. 10 coins : ";
							cin >> coins10;
							
							//The process of recoving arrears and issuing more money
							Nbalance = (coins1*1) + (coins2*2) + (coins5*5) + (coins10*10);
							Lbalance = Nbalance - Pbalance;
						
							cout << "\nThe new amount you entered : " << Nbalance <<endl;
							cout << "Your balance amount : " << Lbalance <<endl;
							
							if(Lbalance<0){
								
								balance=Lbalance;
							}
							
							
							while (balance > 0)
							{
							
								cout << "\nYour balance is Rs. " << Lbalance << ". Get your balance through the coin slot... " <<endl ; 	
								
								a = Lbalance;
								
								
								b = a / 10;
								b = a / 10;
								
								if(b>0){
									cout << "Rs.10 x " << b << endl;
									R10 = R10 - b;
								}
								
								a = a % 10;
								b = a / 5;
								
								if(b>0){
									cout << "Rs.5 x " << b << endl;
									R5 = R5 - b;
								}
								
								a = a % 5;
								b = a / 2;
								
								if(b>0){
									cout << "Rs.2 x " << b << endl;
									R1 = R1 - b;
								}
							
								a = a % 2;
								b = a / 1;
								
								if(b>0){
									cout << "Rs.1 x " << b << endl;	
								}
								cout << "\nThnak you! Have a nice day!!!!!\n" <<endl;
							balance=0;
						}
							
						
							
						}	
						
						
					
		
			
			}
				
			else{
				cout << "Enter the valid product number !!!" <<endl;
			}

//ender machine process is Termeinated and the process of customer advancement
	cout << "If your are a customer enter 0 for password to continue " <<endl;
	cout << "Enter password to Termeinate (Authorized people only)" <<endl;
	cin >> PW;
	if (PW!=0){
	
		while (z<1){
		
			if(PW!=1234){
				cout << "Enter the correct password " <<endl;
				cin >> NextPW;
				PW=NextPW;	
			}
			else {
				cout << "Vender machine process is Termeinated";
				exit(0);	
				
			}
		}
	}
	
}
}
}
