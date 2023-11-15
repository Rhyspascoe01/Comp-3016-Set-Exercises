// Comp 3016 set exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "St_Anne.h"
using namespace std;

int main()
{
    game_function* New_game = new game_function;
    New_game->start();
    New_game->run();
    New_game->inputs();
    New_game->gameover();
}
void game_function::start() {
    string start;
    string titleoutput;
    ifstream fileToRead("Title.txt");
    if (fileToRead.is_open()) {
        while (getline(fileToRead, titleoutput))
        {
            cout << titleoutput << "\n";
        }

    }
    fileToRead.close();

    cout << " " << "\n";
    cout << "                                                     Type start to begin" << "\n";
    while (1) {
        cin >> start;
        try {
            if(start == "start")
            {
                break;
            }
            else {
                throw 1;
            }

        }
        catch(int mynum){
            cout << "Input incorrect, please try again.\n";
       }
    }
}
void game_function::run() {
    cout << "Deep within the pacific ocean the research submarine named St.Anne is screaming." << "\n";
    cout << "Roughly five hours ago something had breeched the vessel, entering through the top of the ship just before the ship went under the water." << "\n";
    cout << "Now you could hear the sound of the sirens sounding around you, the ship entirely dark baring the flashing red warning lights." << "\n";
    cout << "As far as you were aware you were the only one left on the ship, baring the thing that had entered." << "\n";
    cout << "Your goal now was a simple one, to escape with your life entact and to trap whatever was inside the ship within  the vessel." << "\n";
    cout << "All you needed to do was to get to the conrols at the top of the ship." << "\n";
    cout << " " << "\n";
}
void game_function::inputs() {
    string inputstring;
    string textoutput;
    string inventoryoutput;
    ifstream fileToRead("GameText.txt");
    getline(fileToRead, textoutput);
    cout << textoutput << "\n";
    player New_Player;
    while (gameclear == false)
    {
        while (1) {
            try {
                if (Game_Over == true)
                {
                    cout << "With your death the St.Anne never managed to get to the surface" << "\n";
                    cout << "Eventually St.Anne stops screaming, her cries for help drowned by the ocean" << "\n";
                    cout << "The Intruder escapes, ready to torment the seas again." << "\n";
                    cout << "                                            GAME OVER                    " << "\n";
                    cout << "Type 'Restart' to Restart or type 'Quit' to Quit." << "\n";
                    cin >> inputstring;
                    if (inputstring == "Restart") {
                        Game_Over = false;
                        fileToRead.seekg(0);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.gamerestart();
                    }
                    else if (inputstring == "Quit") {
                        exit(EXIT_SUCCESS);
                    }
                }
                cin >> inputstring;
                //General movement section usually used for movements that are going to be repeated throughout the game
                if (inputstring == "Go_Forward") {
                    switch (New_Player.roomnumber) {
                    case 0:
                        New_Player.roomnumber = 1;
                        fileToRead.seekg(550);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 1:
                        New_Player.roomnumber = 4;
                        fileToRead.seekg(2126);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 4:
                        New_Player.roomnumber = 5;
                        fileToRead.seekg(2371);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        killswitch = true;
                        break;
                    case 6:
                        fileToRead.seekg(7201);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.roomnumber = 11;
                        break;
                    case 7:
                        New_Player.roomnumber = 8;
                        fileToRead.seekg(4359);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 8:
                        New_Player.roomnumber = 9;
                        fileToRead.seekg(4725);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 11:
                        fileToRead.seekg(7346);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.roomnumber = 12;
                        break;
                    case 13:
                        fileToRead.seekg(8594);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.roomnumber = 14;
                        break;
                    case 14:
                        fileToRead.seekg(8901);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.roomnumber = 15;
                        break;
                    case 17:
                        fileToRead.seekg(15204);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.roomnumber = 24;
                        break;
                    }
                    break;
                }
                else if (inputstring == "Go_Left") {
                    switch (New_Player.roomnumber) {
                    case 1:
                        fileToRead.seekg(849);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.roomnumber = 2;
                        break;
                    case 6:
                        New_Player.roomnumber = 7;
                        fileToRead.seekg(4116);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 8:
                        New_Player.roomnumber = 10;
                        fileToRead.seekg(4998);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 17:
                        New_Player.roomnumber = 18;
                        fileToRead.seekg(10814);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    }
                    break;
                }
                else if (inputstring == "Go_Back") {
                    switch (New_Player.roomnumber) {
                    case 2:
                        New_Player.roomnumber = 1;
                        fileToRead.seekg(550);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 3:

                        New_Player.roomnumber = 1;
                        fileToRead.seekg(550);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 4:
                        New_Player.roomnumber = 1;
                        fileToRead.seekg(550);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 5:
                        if (killswitch == true) {
                            fileToRead.seekg(2646);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            killswitch = false;
                            Game_Over = true;
                            break;
                        }
                        else {
                            New_Player.roomnumber = 4;
                            fileToRead.seekg(2126);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            break;
                        }
                    case 8:
                        New_Player.roomnumber = 6;
                        fileToRead.seekg(3774);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 9:
                        if (killswitch == false) {
                            New_Player.roomnumber = 8;
                            fileToRead.seekg(16209);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            break;
                        }
                     else {
                          New_Player.roomnumber = 8;
                         fileToRead.seekg(6010);
                          getline(fileToRead, textoutput);
                         cout << textoutput << "\n";
                         break;
                        }
                        
                    case 10:
                            New_Player.roomnumber = 8;
                            fileToRead.seekg(16209);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            break;
                        
                    case 11:
                        fileToRead.seekg(3774);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.roomnumber = 6;
                        break;
                    case 12:
                        New_Player.roomnumber = 11;
                        fileToRead.seekg(7201);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 14:
                        New_Player.roomnumber = 6;
                        fileToRead.seekg(3774);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 15:
                        New_Player.roomnumber = 14;
                        fileToRead.seekg(8594);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 16:
                        New_Player.roomnumber = 14;
                        fileToRead.seekg(8594);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 18:
                        New_Player.roomnumber = 17;
                        fileToRead.seekg(10540);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 19:
                        New_Player.roomnumber = 18;
                        fileToRead.seekg(16433);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 20:
                        New_Player.roomnumber = 18;
                        fileToRead.seekg(16433);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 21:
                        New_Player.roomnumber = 18;
                        fileToRead.seekg(16433);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 22:
                        New_Player.roomnumber = 18;
                        fileToRead.seekg(16433);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 23:
                        New_Player.roomnumber = 18;
                        fileToRead.seekg(16433);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    }
                    break;
 }
                else if (inputstring == "Go_Right")
                {
                    switch (New_Player.roomnumber) {
                    case 1:
                        fileToRead.seekg(1363);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.roomnumber = 3;
                        break;
                    case 6:
                        New_Player.roomnumber = 13;
                        fileToRead.seekg(8393);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 12:
                        fileToRead.seekg(7659);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 14:
                        if (EngineVents == true) {
                            fileToRead.seekg( 9422);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            New_Player.roomnumber = 16;
                            break;
                        }
                        else {
                            fileToRead.seekg(9268);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            break;
                        }
                    }
                    break;
  }
                //Unique movement section : section for movements that only happen once and twice throughout the game
                else if (inputstring == "Turn_Around") {
                    switch (New_Player.roomnumber) {
                    case 5:
                        fileToRead.seekg(3085);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        killswitch = false;
                        break;
                    case 20:
                        fileToRead.seekg(14555);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        HGObtained = true;
                        killswitch = false;
                        break;
                    }
                    break;
  }
                else if (inputstring == "Go_Down" && New_Player.roomnumber == 5)
                {
                    New_Player.roomnumber = 6;
                    fileToRead.seekg(3774);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Go_Back" && killswitch == true && New_Player.roomnumber == 9) {
                    New_Player.roomnumber = 8;
                    fileToRead.seekg(6010);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Enter_Room_1001" && New_Player.roomnumber == 18 && killswitch == false) {
                    New_Player.roomnumber = 19;
                    fileToRead.seekg(11004);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Enter_Door_1002" && New_Player.roomnumber == 18 && killswitch == false) {
                    New_Player.roomnumber = 20;
                    fileToRead.seekg(11417);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Enter_Door_1003" && New_Player.roomnumber == 18 && killswitch == false) {
                    New_Player.roomnumber = 21;
                    fileToRead.seekg(11605);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Enter_Door_1004" && New_Player.roomnumber == 18 && killswitch == false) {
                    fileToRead.seekg(12213);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Enter_Door_1005" && New_Player.roomnumber == 18 && killswitch == false) {
                    New_Player.roomnumber = 22;
                    fileToRead.seekg(12312);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Enter_Door_1006" && New_Player.roomnumber == 18 && killswitch == false) {
                    New_Player.roomnumber = 23;
                    fileToRead.seekg(12809);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Go_Back" && New_Player.roomnumber == 23 && killswitch == true) {
                    New_Player.roomnumber = 18;
                    fileToRead.seekg(13295);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Enter_Door_1002" && New_Player.roomnumber == 18 && killswitch == true) {
                    New_Player.roomnumber = 20;
                    fileToRead.seekg(13735);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                //item Obtainment section : section where items will be obtained and added to the inventory
                else if (inputstring == "Open_Toolbox" && New_Player.roomnumber == 2 && New_Player.TBKObtained == true)
                {
                    fileToRead.seekg(1046);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    New_Player.inventorycountup();
                    break;
                }
                else if (inputstring == "Pick_Up_Key" && New_Player.roomnumber == 5)
                {
                    fileToRead.seekg(16080);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    New_Player.inventorycountup();
                    break;
                }
                else if (inputstring == "Look_At_Hole" && New_Player.roomnumber == 9 && CRNValve == false)
                {
                    fileToRead.seekg(5795 );
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    New_Player.inventorycountup();
                    killswitch = true;
                    break;
                }
                else if (inputstring == "Pick_Up_Keycard" && New_Player.roomnumber == 16)
                {
                    fileToRead.seekg(9652);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    New_Player.inventorycountup();
                    break;
                }
                else if (inputstring == "Look_Through_Pile" && New_Player.roomnumber == 19 && New_Player.firstkeycheck == false) {
                    fileToRead.seekg(11212);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    New_Player.keycountup();
                    break;
                }
                else if (inputstring == "Read_Papers" && New_Player.roomnumber == 21) {
                    fileToRead.seekg(11824);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Pick_Up_Coat_Hanger" && New_Player.roomnumber == 22) {
                    fileToRead.seekg(12632);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    New_Player.inventorycountup();
                    break;
                }
                else if (inputstring == "Get_Key") {
                    switch (New_Player.roomnumber) {
                    case 22:
                        if (New_Player.CHObtained == true && New_Player.secondkeycheck == false) {
                            fileToRead.seekg(12664);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            New_Player.keycountup();
                            break;
                        }
                        else {
                            fileToRead.seekg(12496);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            break;
                        }
                    case 23:
                        fileToRead.seekg(12940);
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.keycountup();
                        killswitch = true;
                        break;
                    case 20:
                        getline(fileToRead, textoutput);
                        cout << textoutput << "\n";
                        New_Player.inventorycountup();
                        break;
                    }
                    break;
 }
                //Unique interactions : Section where unique interactions shall take place
                else if (inputstring == "Look_At_Computer_Screen" && New_Player.roomnumber == 3) {
                    fileToRead.seekg(1558);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Look_At_Containers" && New_Player.roomnumber == 3) {
                    fileToRead.seekg(2001);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Cut_Metal_Bar" && New_Player.roomnumber == 5 && New_Player.BCObtained == true)
                {
                    fileToRead.seekg(3520);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    killswitch = false;
                    break;
                }
                else if (inputstring == "Look_At_Hole" && New_Player.roomnumber == 9 && CRNValve == false)
                {
                    fileToRead.seekg(4853);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Turn_Left_Valve" && New_Player.roomnumber == 10 && CRNValve == false)
                {
                    fileToRead.seekg(5242);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    CRNValve = false;
                    break;
                }
                else if (inputstring == "Turn_Middle_Valve")
                {
                    switch (New_Player.roomnumber) {
                    case 10:
                        if (ERValve == false && killswitch == true) {
                            fileToRead.seekg(6542);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            killswitch = false;
                            ERValve = true;
                            break;
                        }
                        else if (ERValve == false && killswitch == false) {
                            fileToRead.seekg(5367);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            ERValve = true;
                            break;
                        }
                        else {
                            fileToRead.seekg(5544);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            ERValve = false;
                            break;

                        }
                    }
                    break;
}
                if (inputstring == "Turn_Right_Valve")
                {
                    switch (New_Player.roomnumber) {
                    case 10:
                        if (killswitch == false) {
                            fileToRead.seekg(5669);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            CRSValve = true;
                            break;
                        }
                        else {
                            fileToRead.seekg(6877);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            killswitch = false;
                            Game_Over = true;
                            break;
                        }
                    }
                }

                else if (inputstring == "Look_At_Papers" && New_Player.roomnumber == 12) {
                    fileToRead.seekg(7953);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Turn_On_Vents" && New_Player.roomnumber == 15) {
                    fileToRead.seekg(9088);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    EngineVents = true;
                    break;
                }
                else if (inputstring == "Look_At_Papers" && New_Player.roomnumber == 16) {
                    fileToRead.seekg(9737);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Unscrew_Latches" && New_Player.roomnumber == 12 && New_Player.SDObtained == true) {
                    fileToRead.seekg(10146);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    latchstatus = true;
                    break;
                }
                else if (inputstring == "Swipe_KeyCard" && New_Player.roomnumber == 12 && New_Player.KCObtained == true && latchstatus == true) {
                    fileToRead.seekg(10334);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    doorstatus = true;
                    break;
                }
                else if (inputstring == "Open_Door" && New_Player.roomnumber == 12 && doorstatus == true) {
                    fileToRead.seekg(10540);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    New_Player.roomnumber = 17;
                    break;
                }
                if (inputstring == "Unlock_Box") {
                    switch (New_Player.roomnumber) {
                    case 20:
                        if (New_Player.keycount != 3 && killswitch == true)
                        {
                            fileToRead.seekg(14143);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            Game_Over = true;
                            break;
                        }
                        else {
                            fileToRead.seekg(13898);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            break;
                        }
                    }
                }
                else if (inputstring == "Enter_43652" && New_Player.roomnumber == 20 && killswitch == true) {
                    fileToRead.seekg(14370);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    New_Player.inventorycountup();
                    break;

                }
                else if (inputstring == "Look_At_Intruder" && New_Player.roomnumber == 20) {
                    fileToRead.seekg(14984);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    break;
                }
                else if (inputstring == "Unlock_Door")
                {
                    switch (New_Player.roomnumber) {
                    case 24:
                        if (New_Player.EKObtained == false) {
                            fileToRead.seekg(15438);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            break;
                        }
                        else {
                            fileToRead.seekg(15534);
                            getline(fileToRead, textoutput);
                            cout << textoutput << "\n";
                            gameclear = true;
                            break;
                        }
                        
                    }
                    break;
                }
                //Game Overs
                else if (inputstring == "Go_Back" && killswitch == true && New_Player.roomnumber == 8) {
                    fileToRead.seekg(6186);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    killswitch = false;
                    Game_Over = true;
                    break;
                }
                else if (inputstring == "Enter_Door_1005" && New_Player.roomnumber == 18 && killswitch == true) {
                    fileToRead.seekg(13457);
                    getline(fileToRead, textoutput);
                    cout << textoutput << "\n";
                    Game_Over = true;
                    break;
                }

                //inventory : Section where the inventory is read and all inventory actions take place
                else if (inputstring == "Check_Inventory")
                {
                    ifstream inventoryread("Inventory.txt");
                    switch (New_Player.numitemsinventory) {
                    case 2:
                        getline(inventoryread, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 3:
                        inventoryread.seekg(66);
                        getline(inventoryread, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 4:
                        inventoryread.seekg(143);
                        getline(inventoryread, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 5:
                        if (SDObtained = true)
                        {
                            inventoryread.seekg(248);
                            getline(inventoryread, textoutput);
                            cout << textoutput << "\n";
                            break;
                        }
                        else {
                            inventoryread.seekg(368);
                            getline(inventoryread, textoutput);
                            cout << textoutput << "\n";
                            break;

                        }
                    case 6:
                        inventoryread.seekg(484);
                        getline(inventoryread, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 7:
                        inventoryread.seekg(615);
                        getline(inventoryread, textoutput);
                        cout << textoutput << "\n";
                        break;
                    case 8:
                        inventoryread.seekg(761);
                        getline(inventoryread, textoutput);
                        cout << textoutput << "\n";
                        break;
                    }

                    break;
 }
                else {
                    throw 2;
                }
            }

            catch (int inttwo) {
                cout << "Sorry, it doesn't seem you can do that here." << "\n";
            }
        }
    }
}
void game_function::gameover() {
    string inputstring;
    cout << "You would gaze up into the sky,savouring the feeling of fresh air against your body and sunlight against your face" << "\n";
    cout << "You could hear the sounds of water beating against metal and the sounds of scratching and screaming from inside the ship" << "\n";
    cout << "You figured it would be hours before you'd be found where you finally be free from her and the St.Annes' wrath" << "\n";
    cout << "You wondered if the ship would be left here, bobbing up and down in the water." << "\n";
    cout << "But, despite your escape." << "\n";
    cout << "Within the St.Anne, she would still be screaming." << "\n";
    cout << "Type 'Quit' to quit" << "\n";
    cin >> inputstring;
    if (inputstring == "Quit") {
        exit(EXIT_SUCCESS);
    }
}
