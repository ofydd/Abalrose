OBJS = ../Game/TextureLoader.cpp ../main.cpp ../Config/includeHeader.h ../Config/eventTypes.h ../Game/Events.cpp ../Game/Game.cpp
CC = g++
CFLAGS = -fpermissive -Wall -Wextra
LFLAGS = -lsfml-window -lsfml-graphics -lsfml-audio -lsfml-system
OBJ_NAME = engine

all: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LFLAGS) -o $(OBJ_NAME)
