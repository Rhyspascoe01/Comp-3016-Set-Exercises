#pragma once
using namespace std;
class game_function{
public :
	void start();
	void run();
	void inputs();
	void gameover();
	int keycount;
	int numitemsinventory;
	int roomnumber;
	bool firstkeycheck = false;
	bool secondkeycheck = false;
	bool lastkeycheck = false;
	bool TBKObtained = false;
	bool BCObtained = false;
	bool SDObtained = false;
	bool KCObtained = false;
	bool CHObtained = false;
	bool EKObtained = false;
	bool HGObtained = false;
private:
	bool killswitch = false;
	bool Game_Over = false;
	bool CRNValve = false;
	bool ERValve = false;
	bool CRSValve = false;
	bool EngineVents = false;
	bool latchstatus;
	bool doorstatus;
	bool codecheck = false;
	bool gameclear = false;
};
class player :public game_function {
public:
	int roomnumber = 0;
	int keycount = 0;
	int numitemsinventory = 2;
	void keycountup()
	{
		keycount = keycount + 1;
		switch (roomnumber) {
		case 19:
			firstkeycheck = true;
			break;
		case 22:
			secondkeycheck = true;
			break;
		case 23:
			lastkeycheck = true;
			break;
		}
	}
	void inventorycountup() {
		numitemsinventory = numitemsinventory + 1;
		switch (roomnumber) {
		case 2:
			BCObtained = true;
			break;
		case 5:
			TBKObtained = true;
			break;
		case 9:
			SDObtained = true;
			break;
		case 16:
			KCObtained = true;
			break;
		case 22:
			CHObtained = true;
			break;
		case 20:
			if (HGObtained == false)
			{
				HGObtained = true;
				break;
			}
			else {
				EKObtained = true;
				break;
			}
		

		}
	}
	void gamerestart() {
		 firstkeycheck = false;
		 secondkeycheck = false;
		 lastkeycheck = false;
		 TBKObtained = false;
		 BCObtained = false;
		 SDObtained = false;
		 KCObtained = false;
		 CHObtained = false;
		 EKObtained = false;
		 HGObtained = false;
		 roomnumber = 0;
	     numitemsinventory = 2;
		 keycount = 0;
	}
};