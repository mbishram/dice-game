#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void number(int number);

int main(){
	bool finished = false;
	
	do{
		start:
		cout << "XXXXXX   XX  XXXXXXX  XXXXXXX" << endl;
		cout << "XX   XX  XX  XX       XX     " << endl;
		cout << "XX   XX  XX  XX       XXXXXXX" << endl;
		cout << "XX   XX  XX  XX       XX     " << endl;
		cout << "XXXXXX   XX  XXXXXXX  XXXXXXX" << endl << endl;
		cout << "RULES. Yang pertama mendapatkan total dadu lebih dari 20, MENANG!" << endl << endl;
		system ("pause");
		system ("clear");
		
		int jumlah_pemain;
		cout << "Berapa orang yang mau main? (Min. 2)" << endl;
		cin >> jumlah_pemain;
		if (jumlah_pemain < 2){
			cout << "Pemain minimal 2 orang" << endl;
			system ("pause");
			system ("clear");
			goto start;
		}
		system ("clear");
		
		int score [jumlah_pemain] = {};
		
		bool done = false;
		do{
			for(int i = 0; i < jumlah_pemain; i++){
				cout << "XXXXXX   XX  XXXXXXX  XXXXXXX" << endl;
				cout << "XX   XX  XX  XX       XX     " << endl;
				cout << "XX   XX  XX  XX       XXXXXXX" << endl;
				cout << "XX   XX  XX  XX       XX     " << endl;
				cout << "XXXXXX   XX  XXXXXXX  XXXXXXX" << endl << endl;
				cout << "Player's " << i+1 << " Turn" << endl;
				cout << "Player's " << i+1 << " Score : " << score[i] << endl << endl;
				cout << "Press ANY KEY too roll ..." << endl;
				getch();
				
				// Rolling the dice
				srand(time(0));
				int dice = rand() % 6 + 1;
				score[i] = score[i] + dice;
				cout << "You roll..." << endl << endl;
				number(dice);
				
				if (score[i] > 20){
					cout << endl << "Player " << i+1 << " WON!!" << endl;
					cout << "CONGRATULATION!" << endl;
					cout << "Score : " << score[i] << endl;
					system ("pause");
					done = true;
					break;
				}
				
				cout << endl << "Player's " << i+1 << " Score : " << score[i] << endl;
				cout << "Press ANY KEY too continue ..." << endl;
				getch();
				system("clear");
			}
			
		} while(!done);
		
		system("clear");
		cout << "XXXXXX   XX  XXXXXXX  XXXXXXX" << endl;
		cout << "XX   XX  XX  XX       XX     " << endl;
		cout << "XX   XX  XX  XX       XXXXXXX" << endl;
		cout << "XX   XX  XX  XX       XX     " << endl;
		cout << "XXXXXX   XX  XXXXXXX  XXXXXXX" << endl << endl;
		cout << "Want to play again? (Y/N)" << endl;
		char answer;
		cin >> answer;
		if (answer == 'n' || answer == 'N'){
			goto end;
		}
		
		system ("clear");
	} while (!finished);
	
	end:
	system("clear");
	cout << "Thank you for playing :)" << endl;
	cout << "Bye" << endl;
	
	return 0;
}

void number(int number){
	switch(number) {
  		case 1:
    		cout << "XXX  " << endl;
    		cout << " XX  " << endl;
    		cout << " XX  " << endl;
    		cout << " XX  " << endl;
    		cout << "XXXX " << endl;
    		break;
  		case 2:
  			cout << " XXXXX " << endl;
  			cout << "XX   XX" << endl;
  			cout << "     XX" << endl;
  			cout << "   XXX " << endl;
  			cout << "XXXXXXX" << endl;
    		break;
  		case 3:
  			cout << " XXXXX " << endl;
  			cout << "XX   XX" << endl;
  			cout << "    XXX" << endl;
  			cout << "XX   XX" << endl;
  			cout << " XXXXX " << endl;
    		break;
  		case 4:
  			cout << "XX   XX" << endl;
  			cout << "XX   XX" << endl;
  			cout << "XXXXXXX" << endl;
  			cout << "     XX" << endl;
  			cout << "     XX" << endl;
    		break;
  		case 5:
  			cout << "XXXXXXX" << endl;
  			cout << "XX     " << endl;
  			cout << "XXXXXX " << endl;
  			cout << "     XX" << endl;
  			cout << "XXXXXXX" << endl;
    		break;
  		case 6:
  			cout << " XXXXXX" << endl;
  			cout << "XX     " << endl;
  			cout << "XXXXXX " << endl;
  			cout << "XX   XX" << endl;
  			cout << " XXXXX " << endl;
    		break;
	}		
}
