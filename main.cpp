#include <flecs.h>

int main(int argc, char **argv) {
	flecs::world world(argc, argv);

	bool ret = world.progress();

	return !ret;
}
