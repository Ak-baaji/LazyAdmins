#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include<time.h>

int IPAdress();
int up_up();
int ApachServer();
int ProxyChain();
int rkhunter();
int Nmap();
int Shoden();
int Netdiscovery();
int NewTermianl ();
int meterpreter();
int Back();
int Exit();

using namespace std;

int main(){
	system("cowsay LazyAdmin");
	int choose;
	char exit;

	cout << "\t\t1. Public IP Adress\n"
		<< "\t\t2  Update && Upgrade\n"
		<< "\t\t3. ProxyChain\n"
		<< "\t\t4. ApachServer\n"
		<< "\t\t5. rkhunter\n"
		<< "\t\t6. Nmap \n"
		<< "\t\t7. Shoden\n"
		<< "\t\t8. Meterpreter\n"
		<< "\t\t9. Netdiscovery\n"
		<< "\t\t0. Exit"<<endl;
	cout << "Choose  >>";
	cin >>choose;
do {
	system("cowsay LazyAdmin");
	switch(choose){
			case 1:
				IPAdress();
				break;
			case 2:system("clear");
				system("cowsay LazyAdmin");
				up_up();
				break;
			case 3:system("clear");
				system("cowsay LazyAdmin");
				ProxyChain();
				break;
			case 4:system("clear");
				ApachServer();
				break;
			case 5:system("clear");
				rkhunter();
				break;
			case 6:system("clear");
				Nmap();
				break;
			case 7:system("clear");
				Shoden();
				break;
			case 8:system("clear");
				meterpreter();
				break;
			case 9:system("clear");
				Netdiscovery();
				break;
			case 0:system("clear");
				Exit();
				break;
			default:
				cout << "\n\nTry something else !!! \n"<<endl;
				Back();
			}

	}while(exit != 0);
		Exit();

}

	// int NewTermianl (){
	//    system(" x-terminal-emulator");
	//    return 0;
	// }

int  IPAdress(){
	system("clear");
	system("cowsay LazyAdmin");
	int choose;
	cout <<"\n";
	cout << "|----------------------------|";
	cout <<"\n| 1.Local  IpAdress         "
		<<"\n| 2.Public IpAdress    	   "
		<<"\n| 3.Check  Connection  	   "
		<<"\n| 4.Back.				   "
		<< "\n|----------------------------|"<<endl;
	cout <<"\n\n";
	cout << "|----------|"<<endl;
	cout << " Choose >>";
	cin >> choose;
	cout << "|----------|"<<endl;
	cout <<"\n"<<endl;
		switch(choose){
			case 1:
				system("echo Local IP Adress");
				system("ifconfig");
				break;
			case 2:
				system("echo Public IpAdress: ");
				system("curl ifconfig.me");
				break;
			case 3:
				system("ping www.google.com -c 1");
				system("echo $(tput setaf 1)Sucessfully");
				break;
			case 4:
				system("clear");
				main();
				break;
			default:
				//system("clear");
				system("echo $(tput setaf 1)Try something else!");

			}
				return 0;
	}
int up_up(){
	int choose;
	cout << "\n\n";
	cout <<"|-----------";
	cout <<"\n1.Update"
		<<"\n2.Upgrade"
		<<"\n3.Back"<<endl;
	cout <<"|-----------";
	cout << "\n"<<endl;
	cout << "Choose >>";
	cin >>choose;
	cout <<"|-----------"<<endl;
	switch(choose){
		case 1:
			system("echo Updating....");
			system("sudo apt-get update");
			system("clear");
			break;
		case 2:
			system("echo Upgrading....");
			system("sudo apt-get upgrade");
		case 3:
			system("clear");
			main();
			break;
		default:
			system("clear");
			system("echo $(tput setaf 1)Try something else :(");

		}
			return 0;
	}

int ProxyChain(){
	int choose;
	cout << "\n\n";
	cout <<"|-----------";
	cout <<"\n1.Install"
		<<"\n2.Open Firefox"
		<<"\n3.Back"<<endl;
	cout <<"|-----------";
	cout << "\n"<<endl;
	cout << "Choose >>";
	cin >>choose;
		switch(choose){
			case 1:
				char install;
				cout << "DO YOU WANT TO INSTALL (y/N)>>";
				cin >> install;
				if(install == 'y' || install == 'Y'){
					system("sudo apt-get install proxychains");
					system("clear");
					system("Sucessfully Installed !");

					}
				else if (install == 'n' || install == 'N'){
					ProxyChain();
					}
				break;
			case 2:
				system("echo Starting the Proxy....");
				system("proxychains firefox");
				break;
			case 3:
				system("clear");
				Back();
				break;
			default:
				system("echo $(tput setaf 1)Try something else :(");
			}

			return 0;
	}

int ApachServer(){
	int choose;
	cout << "\n\n";
	cout <<"|----------------------------";
	cout <<"\n1.Install/Uninstall"
		<<"\n2.Open localhost via Chrome"
		<<"\n3.ON/OFF"
		<<"\n4.Back"<<endl;
	cout <<"|----------------------------";
	cout << "\n"<<endl;
	cout << "Choose >>";
	cin >>choose;

	switch(choose){
		case 1:
		char  input;
		cout << "DO YOU WANT TO (Y/n)>> ";
		cin >> input;
			if(input == 'y' || input == 'Y'){
				system("sudo apt-get update");
				system("clear");
				system("sudo apt-get install apache2");
			}else if (input == 'N' || input == 'n'){
				system("sudo apt remove apache2");
				system("clear");
				ApachServer();
			}
			break;
		case 2:
			system("gopen http://localhost ");
			cout << "\nApachServer is Running"<<endl;
			break;
		case 3:
			int choose;
			cout << "\n\n";
			cout <<"|-----------";
			cout <<"\n1.Start"
				<<"\n2.Stop"
				<<"\n3.status"
				<<"\n4.Back"<<endl;
			cout<<"|-----------";
			cout<< "\n"<<endl;
			cout<< "Choose >>";
			cin >>choose;
			cout <<"|-----------"<<endl;
					switch(choose){
						case 1:
							system("sudo service apache2 start");
							break;
						case 2:
							system("sudo service apache2 stop");
							break;
						case 3:
							system("sudo service apache2 status");
							break;
						case 4:
							system("clear");
							ApachServer();
						default: cout << "Try something else!"<<endl;

						}
					break;
		case 4:
			system("clear");
			Back();
			break;
		default:
				cout << "Try something else !"<<endl;
		}
			return 0;
	}

int rkhunter(){
	char rkhunt;
	cout << "DO YOU WANT TO INSTALL(Y/n) >>";
	cin >> rkhunt;
	if(rkhunt == 'y' || rkhunt == 'Y'){
		system("cd /tmp && wget http://downloads.sourceforge.net/project/rkhunter/rkhunter/1.4.2/rkhunter-1.4.2.tar.gz");
		system("tar -xvf rkhunter-1.4.2.tar.gz");
		system ("cd rkhunter-1.4.2");
		system("./installer.sh --layout default --install");
		system("echo Successfully Installed!");
	}else if (rkhunt == 'n' || rkhunt == 'N'){
			system("echo checking for update.... ");
			system("sudo rkhunter --update");
			system("sudo rkhunter --propupd");
			char chk;
			cout << "DO YOU WANT TO SCAN (y/N)>>";
			cin >> chk;
		if (chk == 'y' || chk == 'Y'){
			system("sudo rkhunter --check");
		}else if (chk == 'n' || chk == 'N'){
			char help;
			cout<<("You some (y/N)>> ");
			cin >> help;
				if (help == 'y' || help == 'Y'){
						system("sudo rkhunter --help");
				}else{
						Back();
				}

			}
		}
		return 0;
	}
int Nmap(){return 0;}
int Shoden(){return 0;}
int Netdiscovery(){return 0;}
int meterpreter(){return 0;}
int Back(){
	system("clear");
	main();
	return 0;
}
int Exit(){
	system("clear");
	cout << "See you soon !"<<endl;
	exit(0);
	return 0;
	}


