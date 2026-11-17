FILE := ../compile_flags.txt
CFLAGS := $(strip $(file < $(FILE)))

build/hello : src/hello.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $<

.PHONY : clean
clean :
	$(RM) -r build
