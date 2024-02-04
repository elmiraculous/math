CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11
CHECK_FLAGS = -lcheck -lm -lpthread
LDFLAGS=-L/usr/local/lib
GCOV_FLAGS=-fprofile-arcs -ftest-coverage
#Флаги для тестов линукс


all: test gcov_report

s21_math.a:
	$(CC) $(CFLAGS) -c s21_*.c
	ar -rc s21_math.a s21_*.o
	ranlib s21_math.a
	rm -f *.o

build: s21_math.a

rebuild: clean build

test: rebuild
	$(CC) $(CFLAGS) $(LDFLAGS) -o tests.out ../test/test.c s21_math.a $(CHECK_FLAGS) $(GCOV_FLAGS)
	./tests.out
test_valgrind: rebuild
	$(CC) $(CFLAGS) $(LDFLAGS) -o tests.out ../test/test.c s21_math.a $(CHECK_FLAGS) $(GCOV_FLAGS)
	valgrind --log-file=valgrind.log --leak-check=full --track-origins=yes ./tests.out

test_manual: rebuild
	$(CC) $(CFLAGS) ../test/main_test.c s21_math.a -o main_test.out
	./main_test.out

gcov_report: test
	lcov --capture --directory . --output-file coverage.info --exclude '/usr/*'
	genhtml coverage.info --output-directory gcov_report
	open ./gcov_report/index.html

clean:
	@rm -rf ../src/*.o ../*/*.out ./*/*.a ../src/*.a
	@rm -rf *.gcda *.gcno *.info gcov_report
style:
	cp ../materials/linters/.clang-format .
	find .. -name "*.c" -exec clang-format -i {} \;
	find .. -name "*.h" -exec clang-format -i {} \;
	rm -rf .clang-format

style_test:
	cp ../materials/linters/.clang-format .
	find .. -name "*.c" -exec clang-format -n {} \;
	find .. -name "*.h" -exec clang-format -n {} \;
	rm -rf .clang-format
