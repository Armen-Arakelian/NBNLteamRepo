#pragma once

#include <ñstdlib>
#include "list\list.h"

using namespace std;
#define BUFFER_LEN 1024
#define TYPE_OPEN_STR "OPEN"
#define TYPE_CLOSE_STR "CLOSE"
#define CALLED_MANUALLY_STR "MANUALLY"
#define CALLED_AUTOMATICALLY_STR "AUTOMATICALLY"

typedef struct db_con_s db_con_t;
typedef struct garage_stats_entry {
	size_t id;
	char type[BUFFER_LEN];
	time_t actionTime;
	char called[BUFFER_LEN];
} garage_stats_entry;

db_con_t * db_connect(char * file_name);
list_t * db_get_garage_stats(db_con_t * self);
list_t * db_get_garage_stats_filtered(db_con_t * self, time_t from);
size_t db_add_entry(db_con_t * self, char * type, time_t actionTime, char * called);
char * time_to_string(time_t time, char * buffer);
void db_close(db_con_t * self);
