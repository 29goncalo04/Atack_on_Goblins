#ifndef _ITEMS_H_
#define _ITEMS_H_

#include <stdbool.h>
#include <alloca.h>
#include <string.h>
#include <curses.h>
#include <math.h>
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/estruturas.h"


void create_flashlight(int max_x,int max_y, char **map);

void creat_weapon(int max_x,int max_y, char **map);

void creat_medicKit(int max_x,int max_y, char **map);

void remove_thing(Position pos,char **map);

int whats_around(player player, char **map);

int whats_around2(player player, char **map);

int whats_around5(player player, char **map);

Position collected(player player, char **map);

#endif