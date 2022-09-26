#include <iostream>
using namespace std;
int main(){
	float Btc;
	
	cout<<"masukan bitcoin : ";
	cin >> Btc;
	cout << "tipe rank : ";
	
	//jika input btc kurang dari 1 maka output nya adalah tipe rank shrimp
	if (Btc <= 1){
		cout << "Shrimp \n" ;
	}	
	//jika input btc lebih dari 1 dan kurang dari 10 maka output nya adalah tipe rank crab
	else if  (Btc >= 1 && Btc < 10){
		cout << "Crab \n" ;
	}	
	//jika input btc lebih dari 10 dan kurang dari 50 maka output nya adalah tipe rank octopus
	else if (Btc >= 10 && Btc < 50){
		cout << "Octopus \n" ;
	}
	//jika input btc lebih dari 50 dan kurang dari 100 maka output nya adalah tipe rank fish
	else if (Btc >= 50 && Btc < 100){
		cout << "Fish \n" ;
	}
	//jika input btc lebih dari 100 dan kurang dari 500 maka output nya adalah tipe rank dolphin
	else if (Btc >= 100 && Btc < 500){
		cout << "Dolphin \n";
	}
	//jika input btc lebih dari 500 dan kurang dari 1000 maka output nya adalah tipe rank shark
	else if (Btc >= 500 && Btc < 1000){
		cout << "Shark \n";
	}
	//jika input btc lebih dari 1000 dan kurang dari 5000 maka output nya adalah tipe rank whale
	else if (Btc >= 1000 && Btc < 5000){
		cout << "Whale \n";
	}
	//jika input btc lebih dari 5000 maka output nya adalah tipe rank humpback
	else if (Btc >= 5000){
		cout << "Humpback \n";
	}
	return 0;
}
