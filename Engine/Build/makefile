OBJS = ../Game/*.cpp ../main.cpp ../PrecompiledHeaders/*.h ../Game/Events/*.cpp 
CC = g++
CFLAGS = -fpermissive -Wall -Wextra
LFLAGS = -lsfml-window -lsfml-graphics -lsfml-audio -lsfml-system
OBJ_NAME = engine

all: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LFLAGS) -o $(OBJ_NAME)
