INCLUDE_PATH = -IC:\msys64\mingw64\include\SDL2
LIB_PATH = -LC:\msys64\mingw64\lib
LIBS = -lmingw32 -lSDL2main -lSDL2
FLAGS = -w -Wl,-subsystem,windows

SDL = $(INCLUDE_PATH) $(LIB_PATH) $(FLAGS) $(LIBS)

# Para windows

bin/01_hello_SDL : src/01_hello_SDL.cpp
	g++ $< -o $@ $(SDL)
	
runHello : bin/01_hello_SDL
	./bin/01_hello_SDL

#Para mac
bin/main : src/main.cpp include/*.hpp
	c++ src/main.cpp -I include -o bin/main -lcurses

run : bin/main
	./bin/main
