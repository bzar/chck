#ifndef __chck_pool__
#define __chck_pool__

#ifndef size_t
#  include <stddef.h> /* for size_t */
#endif

typedef struct _chckPool chckPool;
typedef size_t chckPoolItem;

chckPool* chckPoolNew(const char *name, size_t growStep, size_t initialItems, size_t memberSize);
void chckPoolFree(chckPool *pool);
void chckPoolFlush(chckPool *pool);
const char* chckPoolGetName(const chckPool *pool);
size_t chckPoolCount(const chckPool *pool);
void* chckPoolGet(const chckPool *pool, chckPoolItem item);
chckPoolItem chckPoolAdd(chckPool *pool, size_t size);
void chckPoolRemove(chckPool *pool, chckPoolItem item);
void* chckPoolIter(const chckPool *pool, size_t *iter);

#endif /* __chck_pool__ */

/* vim: set ts=8 sw=3 tw=0 :*/