#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <string>


using namespace std;


class Flight{
	private:
		int PNR=0;
		string company;
		string timeDeparture;
		string timeArrival;
		int cost;
		
	public:
		Flight(int PNR,string company,string timeDeparture,string timeArrival,int cost){
			this->PNR=PNR;
			this->company=company;
			this->timeDeparture=timeDeparture;
			this->timeArrival=timeArrival;
			this->cost=cost;
			
		}
		Flight(){
			
		}
		Flight(int PNR){
			this->PNR=PNR;
		}

	changeProperties(int PNR,string company,string timeDeparture,string timeArrival,int cost){
	this->PNR=PNR;
	this->company=company;
	this->timeDeparture=timeDeparture;
	this->timeArrival=timeArrival;
	this->cost=cost;	

	}
	
	void showProperties(){
		
	cout<<PNR<<" "<<company<<" "<<timeDeparture<<" "<<timeArrival<<" "<<cost;
	}
	int getPNR(){
		return PNR;
	}
	string getCompany(){
		return company;
	}
	string getTimeDeparture(){
		return timeDeparture;
	}
	string getTimeArrival(){
		return timeArrival;
	}
	int getCost(){
		return cost;
	}
	void setPNR(int p){
		PNR=p;
	}
	void setCompany(string c){
		company=c;
	}
	void setTimeDeparture(string td){
		timeDeparture=td;
	}
	void setTimeArrival(string ta){
		timeArrival=ta;
	}
	void setCost(int c){
		cost=c;
	}
	

};

class Ticket{
	private:
		string sex,name,surname,timeDeparture,timeArrival,fromWhere,toWhere;
		int seat,age,cost;
		int ticketNumber=0;
	public:
		Ticket(int ticketNumber,string name,string surname,string sex,int age,string timeDeparture,string timeArrival,int cost,string fromWhere,string toWhere,int seat){
			this->ticketNumber=ticketNumber;
			this->name=name;
			this->surname=surname;
			this->sex=sex;
			this->age=age;
			this->timeDeparture=timeDeparture;
			this->timeArrival=timeArrival;
			this->cost=cost;
			this->fromWhere=fromWhere;
			this->toWhere=toWhere;
			this->seat=seat;
			
		}
		Ticket(){
			
		}
		Ticket(int ticketNumber){
			this->ticketNumber=ticketNumber;
		}
	changeProperties(int ticketNumber,string name,string surname,string sex,int age,string timeDeparture,string timeArrival,int cost,string fromWhere,string toWhere,int seat){
		this->ticketNumber=ticketNumber;
		this->name=name;
		this->surname=surname;
		this->sex=sex;
		this->age=age;
		this->timeDeparture=timeDeparture;
		this->timeArrival=timeArrival;
		this->cost=cost;	
		this->fromWhere=fromWhere;
		this->toWhere=toWhere;
		this->seat=seat;
	}
		int getTicketNumber(){
			return ticketNumber;
		}
		string getName(){
			return name;
		}
		string getSurname(){
			return surname;
		}
		string getSex(){
			return sex;
		}
		int getAge(){
			return age;
		}
		string getTimeDeparture(){
			return timeDeparture;
		}
		string getTimeArrival(){
			return timeArrival;
		}
		string gettimeDeparture(){
			return timeDeparture;
		}
		int getCost(){
			return cost;
		}
		string getFromWhere(){
			return fromWhere;
		}
		string getToWhere(){
			return toWhere;
		}
		int getSeat(){
			return seat;
		}
		void setTicketNumber(int tn){
			ticketNumber=tn;
		}
		void setName(string n){
			name=n;
		}
		void setSurname(string sn){
			surname=sn;
		}
		void setSex(string s){
			sex=s;
		}
		void setAge(int a){
			age=a;
		}
		void setTimeDeparture(string time){
			timeDeparture=time;
		}
		void setCost(int co){
			cost=co;
		}
		void setFromWhere(string fw){
			fromWhere=fw;			
		}
		void setToWhere(string tw){
			toWhere=tw;
		}
		void setSeat(int se){
			seat=se;
		}
		void showProperties(){
			cout<<"Your ticket number: "<<ticketNumber<<" "<<name<<" "<<surname<<" "<<sex<<" "<<age<<" "<<timeDeparture<<" "<<timeArrival<<" Seat: "<<seat<<" "<<fromWhere<<"---->"<<toWhere<<endl;
		}
};

int main()
{	
	
	string company,timeDeparture,timeArrival,sex,name,surname,fromWhere,toWhere,date, line, change;;
	int ticketNumber,cost,PNR,age,choose,a,b,c,d,e,g,seat,number;
	Flight f[7];
	Flight f1(1,"THY","11:30","13:30",150);
	Flight f2(2,"Pegasus","15:30","18:00",135);
	Flight f3(3,"THY","22:00","23:15",200);	
	Flight f4(0);	
	Flight f5(0);
	Flight f6(0);
	f[1]=f1; f[2]=f2; f[3]=f3; f[4]=f4; f[5]=f5; f[6]=f6;
	Ticket t[7];
	Ticket t1(1,"Mehmet","Uzunyayla","Man",20,"11:30","13:30",150,"Erzurum","Istanbul",5);
	Ticket t2(2,"Murat","Bag","Man",15,"11:30","13:30",150,"Antalya","Istanbul",15);
	Ticket t3;
	Ticket t4;
	Ticket t5;
	Ticket t6;
	t[1]=t1; t[2]=t2; t[3]=t3; t[4]=t4; t[5]=t5; t[6]=t6;
	

	a:	
	system("cls");
	cout<<"\t\t\tWelcome the Mehmet Airlines \n";
	cout<<"\t\t\tPLease choose what you need\n";
	cout<<"\t\t\t1.Admin Mode\n";
	cout<<"\t\t\t2.User Mode\n";
	cout<<"\t\t\t3.Exit\n";
	cin>>choose;
	
	if(choose==1){
		system("cls");
		cout<<"\t\t\tPlease chosee\n";
		cout<<"\t\t\t1.Add Flight\n";
		cout<<"\t\t\t2.Set Flight\n";
		cout<<"\t\t\t3.Cancel Flight\n";
		cout<<"\t\t\t4.Show All Passengers\n";
		cout<<"\t\t\t5.Turn back to main menu\n";
		cin>>a;
		if(a==1){	
			system("cls");
			//ofstream file("Flights.txt");	
			ofstream file("Flights.txt",ios_base::app);
			for(int i=1;i<=6;i++){	
				if(f[i].getPNR()!=0){
					f[i].showProperties();cout<<endl;
				}

			}
				
			cout<<"\t\t\tWrite number of plane"<<endl;
			cin>>b;
			cout<<"\t\t\tPNR:"<<endl;cin>>PNR;
			cout<<"\t\t\tCompany:"<<endl;cin>>company;
			cout<<"\t\t\tDeparture time:"<<endl;cin>>timeDeparture;
			cout<<"\t\t\tArrival time:"<<endl;cin>>timeArrival;
			cout<<"\t\t\tCost:"<<endl;cin>>cost;
			f[b].changeProperties(PNR,company,timeDeparture,timeArrival,cost);
			f[b].showProperties();
			cout<<endl<<"\t\t\tYou created a Flight successfully";
				file<<" "<<f[1].getPNR()<<" "<<f[1].getCompany()<<" "<<f[1].getTimeDeparture()<<" "<<f[1].getTimeArrival()<<" "<<f[1].getCost()<<endl;
				file<<" "<<f[2].getPNR()<<" "<<f[2].getCompany()<<" "<<f[2].getTimeDeparture()<<" "<<f[2].getTimeArrival()<<" "<<f[2].getCost()<<endl;
				file<<" "<<f[3].getPNR()<<" "<<f[3].getCompany()<<" "<<f[3].getTimeDeparture()<<" "<<f[3].getTimeArrival()<<" "<<f[3].getCost()<<endl;
				file<<" "<<f[b].getPNR()<<" "<<f[b].getCompany()<<" "<<f[b].getTimeDeparture()<<" "<<f[b].getTimeArrival()<<" "<<f[b].getCost()<<endl;
			getch();
			goto a;
		}
		if(a==2){
			system("cls");
			for(int i=1;i<=6;i++){	
				if(f[i].getPNR()!=0){
					f[i].showProperties();
					cout<<endl;
				}	
			}
			
			cout<<"\n\t\t\tWhich Flight you want set ?"<<endl;
			cin>>b;
			cout<<"\t\t\tPNR:"<<endl;cin>>PNR;
			cout<<"\t\t\tCompany:"<<endl;cin>>company;
			cout<<"\t\t\tDeparture time:"<<endl;cin>>timeDeparture;
			cout<<"\t\t\tArrival time:"<<endl;cin>>timeArrival;
			cout<<"\t\t\tCost:"<<endl;cin>>cost;
			f[b].changeProperties(PNR,company,timeDeparture,timeArrival,cost);
			f[b].showProperties();
			cout<<endl<<"\t\t\tYou edited the Flight successfully\n";
			getch();
			goto a;
		}
		if(a==3){
			system("cls");

			for(int i=1;i<=6;i++){	
				if(f[i].getPNR()!=0){
					f[i].showProperties();cout<<endl;
				}
			}
			cout<<"Which one do you want delete?"<<endl;
			cin>>number;
			for(int i=1;i<7;i++)
			{
				if(f[i].getPNR()==number){
					f[i].setPNR(0);	
					cout<<"You have deleted successfully";
				}	
			}
			getch();
			goto a;
		}
		//there is a little problem here
		if(a==4){
			system("cls");
			for(int i=1;i<6;i++){	
				if(t[i].getTicketNumber()!=0){
					cout<<"\t\t\t";t[i].showProperties();			
				}
				getch();
				goto a;	
			}	
			
		}
		if(a==5){
			goto a;
		}
		
	}
	if(choose==2){
	system("cls");
	cout<<"\t\t\tPlease choose\n";
	cout<<"\t\t\t1.Take Ticket\n";
	cout<<"\t\t\t2.Show Ticket\n";
	cout<<"\t\t\t3.Show Flight Schedule\n";
	cout<<"\t\t\t4.Delete Ticket\n";
	cout<<"\t\t\t5.Turn back to main menu\n";
	cin>>c;
	
	if(c==1){
		system("cls");	
	
		cout<<"\t\t\tWhere do you want go ?"<<endl; cin>>toWhere;
		cout<<"\t\t\tWhere are you now ?"<<endl; cin>>fromWhere;
		cout<<"\t\t\tDate"<<endl; cin>>date;
		for(int i=1;i<=6;i++){	
			if(f[i].getPNR()!=0){
				f[i].showProperties();
				cout<<endl;
			}	
		}
		cout<<"\t\t\tWhic flight you will choose"<<endl;cin>>g;
		cout<<"\t\t\tTicket number"<<endl; cin>>ticketNumber;
		cout<<"\t\t\tWrite your name"<<endl; cin>>name;
		cout<<"\t\t\tWrite your surname"<<endl; cin>>surname;
		cout<<"\t\t\tWrite your sex"<<endl; cin>>sex;
		cout<<"\t\t\tWrite your age"<<endl; cin>>age;
		cout<<"\t\t\tWrite your seat"<<endl; cin>>seat;
		t[ticketNumber].changeProperties(ticketNumber,name,surname,sex,age,timeDeparture,timeArrival,cost,fromWhere,toWhere,seat);
		
		cout<<"\t\t\t"; t[ticketNumber].showProperties();
		system("pause");
		cout<<"\t\t\tYou have took your ticket succsessfully";
		cout<<"\n"<<endl;
		getch();
		goto a;
		

	
	}
	if(c==2){
		system("cls");
		cout<<"\t\t\tWhat is your ticket number ? "<<endl;
		cin>>e;
		if(t[e].getTicketNumber()!=0){
			t[e].showProperties();
			getch();
			goto a;
		}
		
		
	}
	if(c==3){
		system("cls");
		for(int i=1;i<=6;i++){	
			if(f[i].getPNR()!=0){
				f[i].showProperties();cout<<endl;
			}

		}
		getch();
		goto a;	
	}
	if(c==4){
		system("cls");
		cout<<"\t\t\tWhat is your ticket number ?"<<endl;
			cin>>number;
			for(int i=1;i<7;i++)
			{
				if(t[i].getTicketNumber()==number){
					t[i].setTicketNumber(0);
					cout<<"You have deleted successfully";		
				}	
			}
		getch();
		goto a;
		
	}
	if(c==5)
	goto a;
	}
	
	if(choose==3){	
		cout<<"\t\t\tThanks for choosing us"<<endl;
		cout<<"\t\t\tSee you again"<<endl;
	}

	return 0;

}


