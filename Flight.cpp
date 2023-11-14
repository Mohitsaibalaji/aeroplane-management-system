#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
	public:
		
		Management()
		{
			mainMenu();
		}
};


class Details
{
	public:
		
		static string name, gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		
		void information()
		{
			cout<<"\nEnter the customer ID:";
			cin>>cId;
			cout<<"\nEnter the name :";
			cin>>name;
			cout<<"\nEnter the age :";
			cin>>age;
			cout<<"\nAddress :";
			cin>>add;
			cout<<"\nGender :";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
			
		}
};

int Details::cId;
string Details::name;
string Details::gender;

class layout
{
	public:
		static int seatnum;
		void seats(){
	cout<<"\n____________________________________________________________________\n\n\n";
	cout<<"                      01          02          03                      \n";
	cout<<"                      04          05          06                      \n";
	cout<<"                      07          08          09                      \n";
	cout<<"                      10          11          12                      \n";
	cout<<"                      13          14          15                      \n";
	cout<<"                    ________     _____     ________                   \n\n";
	cout<<"                      16  17    18  19     21  22                     \n";
	cout<<"                      23  24    25  26     27  28                     \n";
	cout<<"                      29  30    31  32     33  34                     \n";
	cout<<"                      35  36    37  38     39  40                     \n";
	cout<<"                      41  42    43  44     45  46                     \n";
	cout<<"                      47  48    49  50     51  52                     \n";
	cout<<"                      53  54    55  56     57  58                     \n";
	cout<<"                      59  60    61  62     63  64                     \n";
	cout<<"                      65  66    67  68     69  70                     \n";
	cout<<"                      71  72    72  73     74  75                     \n";
	cout<<"                      76  77    78  79     80  81                   \n\n";
	cout<<"____________________________________________________________________\n\n";
	cout<<"Choose seat\n";
	cin>>seatnum;
	cout<<"you have chosen seat number "<<seatnum<<endl;
	}
};

int layout::seatnum;

class registration : public layout
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
				
			}
			
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"Press ther number of the country of which you want to book the flight:";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					{
						cout<<"_______________________Welcome to Dubai Emirates____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. DUB - 498"<<endl;
						cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
						cout<<"2. DUB - 658"<<endl;
						cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
						cout<<"3. DUB - 508"<<endl;
						cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=14000;
							cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=10000;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=9000;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
			}
			
			case 2:
				{
					cout<<"_______________________Welcome to Canadian Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. CA - 198"<<endl;
						cout<<"\t09-01-2022 2:00PM 20hrs Rs. 34000"<<endl;
						cout<<"2. CA - 158"<<endl;
						cout<<"\t11-01-2022 6:00AM 23hrs Rs. 29000"<<endl;
						cout<<"3. CA - 208"<<endl;
						cout<<"\t14-01-2022 12:00AM 21hrs Rs. 40000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=34000;
							cout<<"\nYou have successfully booked the flight CA - 198"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=29000;
							cout<<"\nYou have successfully booked the flight CA - 158"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=40000;
							cout<<"\nYou have successfully booked the flight CA - 208"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						
				}
				
				case 3:
				{
					
					cout<<"_______________________Welcome to UK Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. UK - 798"<<endl;
						cout<<"\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;
						
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					
				}
				case 4:
					{
						cout<<"_______________________Welcome to US Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. US - 567"<<endl;
						cout<<"\t10-01-2022 9:00AM 22hrs Rs. 37000"<<endl;
						cout<<"2. US - 658"<<endl;
						cout<<"\t09-01-2022 6:00AM 22hrs Rs. 39000"<<endl;
						cout<<"3. US - 508"<<endl;
						cout<<"\t12-01-2022 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight US - 658"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=39000;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=42000;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
				case 5:
					{
						cout<<"_______________________Welcome to Australian Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. As - 698"<<endl;
						cout<<"\t018-01-2022 9:00AM 20hrs Rs. 44000"<<endl;
						cout<<"2. AS - 158"<<endl;
						cout<<"\t019-01-2022 4:00AM 22hrs Rs. 34000"<<endl;
						cout<<"3. AS - 708"<<endl;
						cout<<"\t17-01-2022 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=34000;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=42000;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
					case 6:
						{
							cout<<"_______________________Welcome to European Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. EU - 898"<<endl;
						cout<<"\t02-01-2022 2:00AM 18hrs Rs. 36000"<<endl;
						cout<<"2. EU - 958"<<endl;
						cout<<"\t03-01-2022 6:00AM 19hrs Rs. 37000"<<endl;
						cout<<"3. EU - 608"<<endl;
						cout<<"\t12-01-2022 10:00AM 20hrs Rs. 31000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=36000;
							cout<<"\nYou have successfully booked the flight EU - 898"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight EU - 958"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=31000;
							cout<<"\nYou have successfully booked the flight EU - 608"<<endl;
							seats();
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						}
						default :
							{
								cout<<"Invalid input, Shifting you to the main menu !"<<endl;
								mainMenu();
								break;
							}
		}
	}
};

float registration::charges;
int registration::choice;

class mealpreference {
	public:
		int preference;
		static string mealprice;
		int exit;

		void meal() {
			cout<<"may i know your meal preference?"<<endl;
			cout<<"choose from following"<<endl;
			cout<<"1)veg meal..........200rs"<<endl;
			cout<<"2)non veg meal......500rs"<<endl;
			cout<<"3)no meal...........000rs"<<endl;
			cin>>preference;
			if(preference==1) {
				cout<<"you have chosen veg meal"<<endl;
				mealprice="200";
			} else if(preference==2) {
				cout<<"you have chosen non veg meal"<<endl;
				mealprice="500";
			} else if(preference==3) {
				cout<<"you haven't chosen any meal"<<endl;
				mealprice="000";
			} else {
				cout<<"invalid"<<endl;
				meal();
			}
			cout<<"Press any key to go back to main menu:"<<endl;
			if(exit==1){
				mainMenu();
			}
			else{
				mainMenu();
			}
		}
};
string mealpreference::mealprice;

class ticket : public registration, Details, mealpreference,layout
{
	public:
		
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"_____________FLY PARTNER____________"<<endl;
				outf<<"_______________Ticket_______________"<<endl;
				outf<<"_____________________________________"<<endl;
				
				outf<<"Customer ID:"<<Details::cId<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="Dubai";
				}
				
				else if(registration::choice==2)
				{
					destination="Canada";
				}
				else if(registration::choice==3)
				{
					destination="UK";
				}
				else if(registration::choice==4)
				{
					destination="USA";
				}
				else if(registration::choice==5)
				{
					destination="Australia";
				}
				else if(registration::choice==6)
				{
					destination="Europe";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Seat number: \t\t"<<layout::seatnum<<endl;
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;
				outf<<"Meal cost :\t\t"<<mealpreference::mealprice<<endl;
				
			}
			outf.close();
			
		}
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};





void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t               XYZ Airlines \n"<<endl;
	cout<<"\t______________Main Menu______________"<<endl;
	
	cout<<"\t_______________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|" <<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details    |"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration        |"<<endl;
	cout<<"\t|\t Press 3 for meal preference            |"<<endl;
	cout<<"\t|\t Press 4 for Ticket and Charges         |"<<endl;
	
	cout<<"\t|\t\t\t\t\t\t|" <<endl;
	cout<<"\t_______________________________________________"<<endl;
	
	cout<<"Enter the choice : ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	mealpreference m;
	
	switch(lchoice)
	{
		
		case 1:
			{
			   cout<<"__________Customers__________\n"<<endl;
			   	d.information();
			   	cout<<"Press any key to go back to Main menu ";
			   	cin>>back;
			   	
			   	if(back==1)
			   	{
			   		mainMenu();
			    }
				else
				{
				   	mainMenu();
				}
				break;
			}
			
		case 2:
			{
				cout<<"________Book a flight using this system ____________\n"<<endl;
				r.flights();
				break;
			}
			
		case 3:
			{
					m.meal();
					break;
			}
				
		case 4:
			{
					
				cout<<"_____GET YOUR TICKET____\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				
				cin>>back;
				
					if(back==1)
					{
						t.dispBill();
						cout<<"Press any key to go back to main menu:";
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						
					}
					else
					{
						mainMenu();
					}
					break;
			}
		default :
		    {
					cout<<"Invalid input, Please try again!\n"<<endl;
					mainMenu();
					break;
			}
	}
	
}





int main()
{
	Management Mobj;
	return 0;
}
