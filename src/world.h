#ifndef _world_h_
#define _world_h_

typedef void (*world_func)(int, int, int, int, void *);

void create_world(int p, int q, world_func func, int pixelArray[2000][2000], void *arg);

#endif
