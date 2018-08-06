#include <stdlib.h>
#include <stdio.h>

#define INITIAL_SIZE 10
#define BUCKET_SIZE 5

static int data_count; /* how many ints we have stored*/
static int data_size; /* how many ints we *can* store in this block */
static int *data; /* the block of data itself */

int main(void)
{
    void add_data(int new_data); /* function prototype */
    int i;

    /* initialize the data area! */
    data_count = 0;
    data_size = INITIAL_SIZE;
    data = malloc(data_size * sizeof(int)); /* allocate initial area */

    /* add a bunch of data */
    for (i = 0; i < 23; i++) {
        add_data(i);
    }
    return 0;
}

void add_data(int new_data)
{
    /* if data_count == data_size, the area is full and needs to be realloc()'d before we can add more */

    if (data_count == data_size) {
        /* We are full up, so add a bucket */
        data_size += BUCKET_SIZE;
        data = realloc(data, data_size * sizeof(int));
    }
    printf("Data count: %int\n", data_count);
    printf("Data_size: %int\n", data_size);
    printf("Data: %int\n", *data);

    /* now store the data */
    * (data+data_count) = new_data;

    /* ^^^ above line could have used array notation like so: */
    /* data[data_count] = new_data; */

    data_count++;
}