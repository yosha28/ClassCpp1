#ifndef LIST2LINK_H
#define LIST2LINK_H
#include "tgeom.h"

struct list2 {
	TGeom *geom;
	list2 *next;
	list2 *prev;
};

list2 *list2_create();
list2 *list2_ins(list2 *list);
list2 *list2_gotofirst(list2 *list);
list2 *list2_gotolast(list2 *list);
void list2_del(list2 *list);
void list2_print(list2 *list);
void list2_clear(list2 *list);
int list2_count(list2 *list);
int list2_savetofile(list2 *list, const char *filename);
list2 *list2_loadfromfile(list2 *list, const char *filename);
list2 *map_add_TPoint(list2 *map, short x, short y, TPointType t,
	ConsoleColors color, ConsoleColors bgcolor);
void printStatus1(short x, short y, short Left, short Top);
int map_contains(list2 *map, short x, short y);

#endif
