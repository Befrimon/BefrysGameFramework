#ifndef EVENT_H
#define EVENT_H

#include <memory>
#include <future>
#include <unordered_map>

/* Befry Engine includes */
#include "scene.h"

namespace bgf
{
	class Event
	{
	public:
		enum Input
		{
			KEY_A, KEY_B, KEY_C, KEY_D, KEY_E, KEY_F, KEY_G, KEY_H, KEY_I, KEY_J, KEY_K, KEY_L, KEY_M,
			KEY_N, KEY_O, KEY_P, KEY_Q, KEY_R, KEY_S, KEY_T, KEY_U, KEY_V, KEY_W, KEY_X, KEY_Y, KEY_Z,
			KEY_UP, KEY_DOWN, KEY_RIGHT, KEY_LEFT
		};

	protected:
		static int game_fps;

		static std::future<int> input;
		static int input_res;

	public:
		static void update();
		static int getInput();

		static void setFPS(const int& fps);
		static int getFPS();

	};
}

#endif
