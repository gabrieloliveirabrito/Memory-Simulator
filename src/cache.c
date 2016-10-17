#include "includes.h"

void initCache(Cache *cache)
{
	cache->lines = malloc(sizeof(Line) * CACHE_LINES);
	
	int i;
	for(i = 0; i < CACHE_LINES; i++)
	{
		initLine(&cache->lines[i]);
	}
}
