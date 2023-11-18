# Comp-3016-Set-Exercises

#### Visual Studio and operating system Version
For this project I used was Visual Studio 2022 and my operating system I used is Windows 11 Home version 22H2

#### How Does it play
My game, called St.Anne, is a text adventure game where the player is stuck on a submarine called the St.Anne where they are last member of the crew, being hunted by a mysterous entity. The game is played with text prompts so if you want to go forward then you type "Go_Forward" and you'll move deeper into the St.Anne. Throughout the game you with not only have to interact with the enviroment to solve puzzles and gain items so you can escape the ship but also use the items and enviroment around you to defend yourself against the intruder when her scenarios start to play out.

#### UML Design Diagram
Below is the UML Design diagram that i sued to design the two classes of my project : ![image](https://github.com/Rhyspascoe01/Comp-3016-Set-Exercises/assets/91668493/220eb97e-ead4-415c-a685-4dfa609b5c31)

#### Exception handling and test cases
During the coding my project i have Exception handling to the inputs that the player uses as a Player could type something in that i have not coded a response for so i have coded that the program tries the certain input triggers and if none of those have been triggered then it triggers the catch statement which shows a error message and allows the user to type a different input. I have also done several test cases for my project of which you can read below :
![image](https://github.com/Rhyspascoe01/Comp-3016-Set-Exercises/assets/91668493/a398ef2f-c1c6-4723-aff3-576138ca48b3)

#### Futher Details
My prototype has two classes, a base class for the game function which contains the four main voids within the game which control the start and end of the game as well as store all variables and a player class that inherites all of the  variables that the player is able to use such as the inventory status and which room the player is in. It also contains several unique voids such as the KeyCountUp which counts the three keys in the final puzzle, the inventory void which adds things to your inventory and the restart which resets all of the players inventory and position in the ship. My code also includes several private variables that aren't able to be controlled by the player such as the valves within the boiler room or the vents in the engine room. Most of the repeated commands such as movement are done using switch statements using the roomnumber as the cases to switch between rooms and almost all the text is loaded in using file loading.
#### Video Link
https://youtu.be/xoe4K8kC5jk 
#### Link to repository
https://github.com/Rhyspascoe01/Comp-3016-Set-Exercises/tree/main
