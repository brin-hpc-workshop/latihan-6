CC = gcc
CFLAGS = -fopenmp

hello_world: hello_world.c
	$(CC) $(CFLAGS) -o $@ $<

sections: sections.c
	$(CC) $(CFLAGS) -o $@ $<

lingkup_variabel: lingkup_variabel.c
	$(CC) $(CFLAGS) -o $@ $<

race_condition: race_condition.c
	$(CC) $(CFLAGS) -o $@ $<

all: hello_world sections lingkup_variabel race_condition

clean:
	rm -f hello_world
	rm -f sections
	rm -f lingkup_variabel
	rm -f race_condition