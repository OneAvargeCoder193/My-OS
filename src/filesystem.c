#include "filesystem.h"

void addFile(struct file *f, struct dir *d)
{
    d->files[d->pt] = *f;
    d->pt++;
}

void addDir(struct dir *di, struct dir *d)
{
    d->dirs[d->pt] = *di;
    d->pt++;
}

struct file getFile(struct dir *d, int i)
{
    return d->files[i];
}

struct dir getDir(struct dir *d, int i)
{
    return d->dirs[i];
}