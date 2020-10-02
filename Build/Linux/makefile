OBJS = ../main.cpp
CC = g++
CFLAGS = -fpermissive -Wall -Wextra
LFLAGS = -lsfml-window -lsfml-graphics -lsfml-audio -lsfml-system

ifeq ($(OS),Windows_NT)
OBJ_NAME = Abalrose.exe
else
OBJ_NAME = Abalrose
endif

all: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LFLAGS) -o $(OBJ_NAME)
