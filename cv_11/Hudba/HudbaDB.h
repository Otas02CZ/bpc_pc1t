#pragma once

#define STRING_SIZE 40

struct t_album
{
    char  interpret[STRING_SIZE];
    char nazevAlba[STRING_SIZE];
    int   rokVydani;
    struct t_album* dalsi;
};

void add(char* interpret, char* nazevAlba, int rokVydani, struct t_album** uk_prvni);
void del(int rokVydani, struct t_album** uk_prvni);
