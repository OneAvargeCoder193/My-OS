#ifndef FILESYSTEM

struct file
{
    const char *name;
    const char *text;
};

struct dir
{
    const char *name;
    struct file *files;
    struct dir *dirs;

    int pt;
};

void addFile(struct file *f, struct dir *d);
void addDir(struct dir *di, struct dir *d);

struct file getFile(struct dir *d, int i);
struct dir getDir(struct dir *d, int i);

#endif