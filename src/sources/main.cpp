#include "main.h"
#include <SDL2/SDL.h>

int main( int argc, char* args[] )
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}
	SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	SDL_Delay(5000);
	SDL_DestroyWindow(win);
	SDL_Quit();
	return 0;
}