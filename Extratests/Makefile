CC = diet sparc-linux-gcc
CXX = diet sparc-linux-g++

EXES =Calc.exe Prime.exe Pyramid.exe Fib.exe
CFLAGS = -DNDEBUG -DMINIZ_NO_STDIO -DMINIZ_NO_ARCHIVE_APIS -DMINIZ_NO_ARCHIVE_WRITING_APIS -DMINIZ_NO_TIME -DMINIZ_NO_ZLIB_COMPATIBLE_NAME

all: $(EXES)

%.exe: %.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -rf *.o *.exe
