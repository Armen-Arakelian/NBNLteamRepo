#pragma once
#include <stdlib.h>
#include <time.h>
#include "html_gen.h"
#include <string.h>
#include <Windows.h>
int main(int argc, char ** argv )
{
	garage_stats_entry entry = { 1,"OPEN",time(NULL) , "MANUALLY", };
	char * fileName = "HEYY.html"; 
	html_gen(fileName , &entry, 1);
	html_file_open(fileName);
	return EXIT_SUCCESS;
}