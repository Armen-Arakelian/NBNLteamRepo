#pragma once
#include "nbnl_db.h"

void html_gen(char * fileName, garage_stats_entry * entries, size_t count);
void html_file_open(char * fileName);