#ifndef LOGFILE_H_INCLUDED
#define LOGFILE_H_INCLUDED

#include <stdio.h>

extern FILE* LOG_FILE;
static const int MAX_LEN = 256;

void OpenLog(const char* FILE_NAME);
void CloseLogFile();

#endif // LOGFILE_H_INCLUDED