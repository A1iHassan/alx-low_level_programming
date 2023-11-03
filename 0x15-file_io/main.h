#ifndef MAIN_H
#define MAIN_H

/**
 * struct ELF - a data struct for all e_ instances neede
 * @e_ident: first mamber
 * @e_type: second member
 * @e_machine: third member
 * @e_version: forth member
 * @e_entry: fifth member
 * @e_phoff: sixth member
 * @e_shoff: seventh member
 * @e_flags: eightth member
 * @e_ehsize: ninth member
 * @e_phentsize: tenth member
 * @e_phnum: eleventh member
 * @e_shentsize: twelvth meber
 * @e_shnum: therteenth member
 * @e_shstrndx: forteenth member
 * Description: ELF is a data struct neede for the program
 */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
