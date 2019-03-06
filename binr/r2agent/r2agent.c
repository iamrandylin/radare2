/* radare2 - LGPL - Copyright 2013-2019 - pancake */

#include <r_main.h>

#if __APPLE__ && (__arm__ || __arm64__ || __aarch64__)
#define USE_IOS_JETSAM 1

#define MEMORYSTATUS_CMD_SET_JETSAM_TASK_LIMIT 6
extern int memorystatus_control(uint32_t command, pid_t pid, uint32_t flags, void *buffer, size_t buffersize);

#else
#define USE_IOS_JETSAM 0
#endif

int main(int argc, char **argv) {
#if __WINDOWS__
	eprintf ("r2agent: Not yet implemented for this platform.\n");
	return 1;
#else
	return r_main_r2agent (argc, argv);
#endif
}
