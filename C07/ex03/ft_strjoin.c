#include <unistd.h>
#include <stdlib.h>

int doublestrlen(int size, char **strs) {
    int i;
    int count = 0;
    int j = 0;

    while(j < size) {
        i = 0;
        while (strs[j][i] != '\0') {
            count++;
            i++;
        }
        j++;
    }
    return count;
}

int addsep(char *join, char *sep, int position) {
    int i = 0;

    while (sep[i]) {
        join[position] = sep[i];
        i++;
        position++;
    }
    return position;
}

char *strjoin(int size, char **strs, char *sep) {
	int begin = 0;
	int sep_len = 0;
	int total_len;
	char *join;

    if (size == 0) {
		char *empty = malloc(1);
		if (empty)
			empty[0] = '\0';
		return empty;
	}

	while (sep[sep_len] != '\0')
		sep_len++;
    total_len = doublestrlen(size, strs) + (sep_len * (size - 1));

    join = malloc(total_len + 1);
    if (!join)
        return NULL;

    int add = 0;
    while (begin < size) {
        int i = 0;
        while (strs[begin][i] != '\0') {
            join[add] = strs[begin][i];
            add++;
            i++;
        }
        if (begin + 1 < size)
            add = addsep(join, sep, add);
		begin++;
    }
    join[add] = '\0';
    return join;
}


#include <stdio.h>

int main() {
    char *strings[] = {"Hello", "World", "42"};
    char *separator = " ";
    int size = 3;

    char *result = strjoin(size, strings, separator);
    if (result) {
        printf("Joined string: %s\n", result);
        free(result);
	}

    return 0;
}