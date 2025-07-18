#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "logfile.h"

FILE* LOG_FILE = NULL; 

void OpenLog(const char* FILE_NAME) {
    if (FILE_NAME == NULL) {
        LOG_FILE = stderr;  
        return;
    }

    LOG_FILE = fopen(FILE_NAME, "w");
    if (LOG_FILE == NULL) {
        fprintf(stderr, "Error: Could not open log file '%s'\n", FILE_NAME);
        LOG_FILE = stderr;
    }

    atexit(CloseLogFile);
    fprintf(LOG_FILE, "\\----------------------------------------------------\\\n");
    fprintf(LOG_FILE, "OPEN\n");
    fflush(LOG_FILE);
}

void CloseLogFile() {
    if (LOG_FILE != NULL && LOG_FILE != stderr && LOG_FILE != stdout) {
        fprintf(LOG_FILE, "CLOSE\n");
        fprintf(LOG_FILE, "\\----------------------------------------------------\\\n");
        fclose(LOG_FILE);
    }
    LOG_FILE = stderr;  // Возвращаем на stderr после закрытия
}