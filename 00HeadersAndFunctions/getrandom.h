#ifndef GRANDPARENT_H
#define GRANDPARENT_H

#define MAX_NAME_LENGTH     40

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <thread>
#include <chrono>
#include <cctype>
#include <random>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <fstream>
#include <mmsystem.h>
#include <Windows.h>

const int black = 0;
const int blue = 1;
const int green = 2;
const int cyan = 3;
const int red = 4;
const int magenta = 5;
const int brown = 6;
const int lightgrey = 7;
const int darkgrey = 8;
const int lightblue = 9;
const int lightgreen = 10;
const int lightcyan = 11;
const int lightred = 12;
const int lightmagenta = 13;
const int yellow = 14;
const int white = 15;

using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

const int murasame = 8;
const int broadsword = 3;
const int razorflail = 5;
const int hungryblade = 10;
const int stoneaxe = 14;

const int leatherarmor = 6;
const int steelarmor = 10;
const int carapace = 14;

void spellLearnAnimation2();
void refresh();
void printRefresh2();
void printRefresh();
void refreshOrNo(int nor, int eas, int sou, int wes, int floor);
void saveOrNo(int nor, int eas, int sou, int wes, int floor);
void saveLoad(int saveload);
int direction(int north, int east, int south, int west);
void keypress(int nn, int ee, int ss, int ww, int direct);
void boxMaker(int nor, int eas, int sou, int wes, int floor);
int map(int north, int east, int south, int west, int direction);
void trapRoom(int n, int e, int s, int w);
void monsterRoom(int n, int e, int s, int w);
void treasureRoom(int n, int e, int s, int w);
int selling(int n, int e, int s, int w, int fl);
void saveRoom(int n, int e, int s, int w);
void monsterRoomEmpty(int n, int e, int s, int w);
void merchantRoomEmpty(int n, int e, int s, int w);
void saveRoomEmpty(int n, int e, int s, int w);
void merchantRoom(int n, int e, int s, int w);
void emptyRoom(int n, int e, int s, int w);
int xVal(int xchange);
int yVal(int ychange);
int potion(int changepot);
int tincture(int changetin);
int hipotion(int changehipot);
int hitincture(int changehitin);
int elixir(int changelix);
int invMenu(int monstatype, int n, int e, int s, int w, int fl);
int monsterattack(int monstatype);
int inventory(int monstatype, int n, int e, int s, int w, int fl);
void monsterHP(int monstatypein, int damin, int n, int e, int s, int w, int fl);
int tincture(int changer);
int getArmor(int armortype);
int statDef();
void displayHPMP(int pain, int spellcost);
void display();
int newGame();
int oldGame();
int setCoord(int x, int y);
void printGame();
void printGame2();
int loadGame();
int detectArrow2();
int cure(int monstatype, int n, int e, int s, int w, int fl);
int main();
void changeColour(int colour);
void slowPrint(string message, int gimmetime);
int intro();
int statGold(int incomingGold);
int statXP(int incomingXP);
int getRandom(int upperBoundRdm);
void mainb(int monstatype, int n, int e, int s, int w, int fl);
int name(int n, int e, int s, int w, int fl);
int monsterpicker();
int statCurrentHP(int dam);
void getname();
int enemyattack(int monstatype);
int monsterattack(int monstatype);
int statCurrentMP(int spellcost);
int spell(int monstatype, int spellcostin, int spellnamein, int maxdamin, int maxmpin, int statwisdomin, int n, int e, int s, int w, int fl);
int statMaxHP();
void lvlupAnimation();
void spellLearnAnimation();
int statLevel();
int statMaxMP();
void merchant(int n, int e, int s, int w, int fl);
void wipe();
int cura(int monstatype, int n, int e, int s, int w, int fl);
int statStrength();
int statWisdom();
int attack(int monster);
void loadStore(int n, int e, int s, int w, int fl);
int storeMenu(int n, int e, int s, int w, int fl);
int zstoreMenu(int n, int e, int s, int w, int fl);
int buying(int n, int e, int s, int w, int fl);
void display();
void returnName(int monstatype);
void detectArrowStore(int n, int e, int s, int w, int fl);
int spellMenu(int monstatype, int n, int e, int s, int w, int fl);
int spellBook(int monstatype, int n, int e, int s, int w, int fl);
int magicMissile(int monstatype, int n, int e, int s, int w, int fl);
int immolate(int monstatype, int n, int e, int s, int w, int fl);
int aquarake(int monstatype, int n, int e, int s, int w, int fl);
void changeColour(int colour);
void rewards(int monstertype, int n, int e, int s, int w, int fl);
int weapon(int weaptype);
int potion(int change);
int statDef();

#endif