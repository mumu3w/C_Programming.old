﻿#ifndef	LINE_H
#define LINE_H

void clear_line(void);
void add_word(const char *word);
int space_remaining(void);
void write_line(FILE **out_fp);
void flush_line(FILE **out_fp);

#endif