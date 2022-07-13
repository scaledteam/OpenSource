#pragma once
#include "render.h"
#include "collection.h"
#include "mempools.h"

typedef struct Texture {
	RTexture texture;
	struct AVec3f avg_color;
	char name[128];
} Texture;

const Texture *textureGet(const char *name, struct ICollection *collection, struct Stack *tmp);
