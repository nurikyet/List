CC = gcc
CFLAGS = -Wall -Wextra -I../list/include -I../log/include
LDFLAGS = 

SRCS = ../Main.c ../list/src/List.c ../log/src/logfile.c
OBJS = $(SRCS:.c=.o)

EXECUTABLE = ../hello

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@

../Main.o: ../Main.c
	$(CC) $(CFLAGS) -c $< -o $@

../list/src/List.o: ../list/src/List.c
	$(CC) $(CFLAGS) -c $< -o $@

../log/src/logfile.o: ../log/src/logfile.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)