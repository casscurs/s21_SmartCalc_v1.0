#Makefile by Casscurs

PROJECT_NAME = calculator
VERSION = 1.0

# Цвета для оформления вывода
COLOR_TITLE = \033[1;36m
COLOR_SUCCESS = \033[1;32m
COLOR_RESET = \033[0m
# Исходники
NAME = calc.a
SRC_FILES = $(wildcard ./Backend/main_calculator/*.c) $(wildcard ./Backend/deposit_calculator/*.c) $(wildcard ./Backend/credit_calculator/*.c)
HEADER_FILES = $(wildcard ./Backend/main_calculator/*.h) $(wildcard ./Backend/deposit_calculator/*.h) $(wildcard ./Backend/credit_calculator/*.h)
OBJ_FILES = $(patsubst %.c, %.o, $(SRC_FILES))
DEP_FILES = $(patsubst %.c, %.d, $(SRC_FILES))
CPP_FILES = $(wildcard ./Frontend/Calculator/*.cpp)
CPP_HEADERS = $(wildcard ./Frontend/*.h)
# Тесты
TESTS_DIR = Backend/tests/
TESTS_SRC = $(wildcard $(TESTS_DIR)*.c)
TESTS_OBJ = $(patsubst %.c,%.o,$(TESTS_SRC))
# Флаги
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O2 -g -std=c11
#-g -fsanitize=address,undefined,unreachable -fno-sanitize-recover -fstack-protector
AR = ar rcs
LIBS = -lcheck
COVERAGE =
# Документация .dvi
DVI_TARGET = doc.dvi
TEXI2DVI = texi2dvi
SRC_DIR = documentation
# Дистрибутируемый архив 
DIST_DIR = dist/$(PROJECT_NAME)-$(VERSION)
DIST_FILES = $(SRC_FILES) $(HEADER_FILES) $(CPP_FILES) $(CPP_HEADERS) $(TESTS_SRC) $(SRC_DIR)/* Makefile

all : clean test install

gcov_report: clean add_coverage test
	@echo "$(COLOR_TITLE)=== Running tests ===$(COLOR_RESET)"
	./test
	@echo "$(COLOR_TITLE)=====================$(COLOR_RESET)"
	mkdir -p report
	lcov -o report/test.info -c -d .
	genhtml -o report report/test.info
	@rm -rf *.gcda *.gcno tests/*.gcda tests/*.gcno
	open report/index.html
	@rm -rf Backend/tests/*.d Backend/tests/*.o Backend/tests/*.gcda Backend/tests/*.gcno
	@rm -rf Backend/main_calculator/*.o Backend/main_calculator/*.gcda Backend/main_calculator/*.gcno
	@rm -rf Backend/deposit_calculator/*.o Backend/deposit_calculator/*.gcda Backend/deposit_calculator/*.gcno
	@rm -rf Backend/credit_calculator/*.o Backend/credit_calculator/*.gcda Backend/credit_calculator/*.gcno

add_coverage:
	$(eval COVERAGE += --coverage)

test: $(NAME) $(TESTS_OBJ)
	$(CC) $(CFLAGS) $(COVERAGE) $(TESTS_OBJ) $(LIBS) $(NAME) -o $@
	./test

$(NAME) : $(OBJ_FILES)
	 $(AR) $(NAME) $?
	@echo "$(COLOR_SUCCESS)=== Build complete ===$(COLOR_RESET)"

%.o : %.c
	$(CC) $(CFLAGS) $(COVERAGE) -c $< -o $@ -MMD

include $(wildcard $(D_FILES))

install: $(NAME)
	cd Frontend/Calculator && mkdir -p build && cd build && cmake .. && make
	 mv Frontend/Calculator/build ../src 

start:
	open build/Calck.app
	
uninstall:
	rm -rf build 

dvi: $(DVI_TARGET)

$(DVI_TARGET): $(TEXI_FILES)
	 cd $(SRC_DIR) && $(TEXI2DVI) documentation.texi

undvi:
	@rm -f $(SRC_DIR)/*.aux $(SRC_DIR)/*.dvi $(SRC_DIR)/*.log $(SRC_DIR)/*.toc

dist: dvi
	@echo "$(COLOR_TITLE)=== Creating distribution archive ===$(COLOR_RESET)"
	mkdir -p $(DIST_DIR)
	cp -r $(DIST_FILES) $(DIST_DIR)/
	tar czvf $(DIST_DIR).tar.gz -C dist $(PROJECT_NAME)-$(VERSION)/
	rm -r $(DIST_DIR)
	@echo "$(COLOR_SUCCESS)=== Distribution archive created ===$(COLOR_RESET)"

distclean:
	@rm -rf dist

clean : uninstall undvi distclean
	@echo "$(COLOR_TITLE)=== Cleaning ===$(COLOR_RESET)"
	@rm -rf *.a *.o report *.gcda *.gcno $(DEP_FILES) $(NAME) test
	@rm -rf Backend/tests/*.d Backend/tests/*.o Backend/tests/*.gcda Backend/tests/*.gcno
	@rm -rf Backend/main_calculator/*.o Backend/main_calculator/*.gcda Backend/main_calculator/*.gcno
	@rm -rf Backend/deposit_calculator/*.o Backend/deposit_calculator/*.gcda Backend/deposit_calculator/*.gcno
	@rm -rf Backend/credit_calculator/*.o Backend/credit_calculator/*.gcda Backend/credit_calculator/*.gcno

cppcheck :
	@echo "$(COLOR_TITLE)=== Running cppcheck ===$(COLOR_RESET)"
	cppcheck --enable=all --suppress=missingIncludeSystem $(SRC_FILES) $(HEADER_FILES) $(TESTS_SRC)

format :
	@echo "$(COLOR_TITLE)=== Formatting code ===$(COLOR_RESET)"
	clang-format -i -style=Google $(SRC_FILES) $(HEADER_FILES) $(CPP_FILES) $(CPP_HEADERS) $(TESTS_SRC)


check-format :
	@echo "$(COLOR_TITLE)=== Checking code formatting ===$(COLOR_RESET)"
	clang-format -n -style=Google $(SRC_FILES) $(HEADER_FILES) $(CPP_FILES) $(CPP_HEADERS) $(TESTS_SRC)

.PHONY : all clean cppcheck cpplint format check-format dvi undvi dist distclean