#pragma once
#include<stdio.h>
#include <stdlib.h>
#include <time.h>


#define H 3
#define L 3


void cleanQ(char Q[H][L], int h, int l);
void displayQ(char Q[H][L], int h, int l);
void Pmove(char Q[H][L], int h, int l);
void Cmove(char Q[H][L], int h, int l);
char IsWin(char Q[H][L], int h, int l);