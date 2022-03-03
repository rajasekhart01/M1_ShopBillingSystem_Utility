PROJ_NAME = proj
TEST_PROJ_NAME= Test_$(PROJ_NAME)

Build= build

SRC=src/login.c\
src/quantity.c\
src/billgeneration.c

INC= inc/bill.h
INC_TEST= unity

TEST_SRC=test/test.c\
unity/unity.c

ifdef OS
	RM=del
	FixPath=$(subst /,\,$1)
	EXE=exe

else
	ifeq ($(shell uname),Linux)
		RM=rm -rf
		FixPath=$1
		EXE=out
	endif

endif	

all:
	gcc -I $(INC) $(SRC) Billing.c -o $(call FixPath, $(PROJ_NAME).$(EXE))


run:
	$(call FixPath,$(PROJ_NAME).$(EXE))	


cppcheck:
	cppcheck --enable= all $(SRC) Billing.c

debug:
	gcc -I $(INC) $(SRC) Billing.c -g -o $(PROJ_NAME).$(EXE)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXE)	 


cppcheck:
	cppcheck --enable= all $(SRC) Billing.c

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXE)	 

test:
	gcc -I $(INC) -I $(INC_TEST) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXE))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXE)