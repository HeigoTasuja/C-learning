FILE := ../compile_flags.txt
CFLAGS := $(strip $(file < $(FILE)))

hello : src/hello.c
	$(CC) $(CFLAGS) -o $@ $^

.PHONY : clean
clean :
	$(RM) hello
