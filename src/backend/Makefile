GCC=gcc
CFLAGS= -Wall -Werror -Wextra -std=c11 -lm -g
LIBS= -lcheck
LFLAGS= -fprofile-arcs -ftest-coverage
LINUX = -lrt -lpthread -lm -lsubunit
OS=$(shell uname -s)
FILES=s21_parsing_object.c matrix_lib/s21_matrix.c

all: clean test

test:
ifeq ($(OS), Darwin)
	$(GCC) $(CFLAGS) s21_test.c $(FILES) -o test.out $(LIBS)
	./test.out
else
	$(GCC) $(CFLAGS) s21_test.c $(FILES) -o test.out $(LIBS) $(LINUX)
	./test.out
endif

gcov_report: test
ifeq ($(OS), Darwin)
	$(GCC) $(CFLAGS) $(LFLAGS) s21_test.c $(FILES) -o test.out $(LIBS)
else
	$(GCC) $(CFLAGS) $(LFLAGS) s21_test.c $(FILES) -o test.out $(LIBS) $(LINUX)
endif
	./test.out
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info

open:
ifeq ($(OS), Darwin)
	open report/index.html
else
	xdg-open report/index.html
endif

check:
	cp ../../materials/linters/CPPLINT.cfg ./
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
	python3 ../../materials/linters/cpplint.py --extensions=c *.c *.h
ifeq ($(OS), Darwin)
	CK_FORK=no leaks --atExit -- ./test.out
else
	valgrind ./test.out --leak-check=full
endif
	make clean

clean:
	rm -rf *.a *.o *.gc* *.out *.info *.dSYM test.out report s21_smart_calc

rebuild: clean all

install:
	make clean
	mkdir ../build
	cd ../s21_3dviewer && qmake && make && make clean && rm Makefile && cd ../ && mv s21_3dviewer/s21_3dviewer.app build
	open ../build/s21_3dviewer.app/Contents/MacOS/s21_3dviewer
uninstall:
	rm -rf ../build*
open_detscop:
	open ../build/s21_3dviewer.app/Contents/MacOS/s21_3dviewer


# # distViewer2
# dist:
#  rm -rf ../distViewer2.0/
#  rm -rf distViewer2.0
#  mkdir ../distViewer2.0/
#  mkdir ../distViewer2.0/src
#  cp ../build/Viewer2.app/Contents/MacOS/Viewer2 ../distViewer2.0/src/
#  mv ../distViewer2.0/ .
#  tar cvzf distViewer2.0.tgz distViewer2.0
#  open .

# cl:
#  rm -rf distViewer2.0~
#  rm -rf ../../distViewer2.0/
#  rm -rf distViewer2.0