TESTS = checkBoardPositions
check_PROGRAMS = checkBoardPositions
TESTS_ENVIRONMENT = \
CK_DEFAULT_TIMEOUT=600

checkBoardPositions_SOURCES = checkBoardPositions.c  $(top_srcdir)/src/board.c  $(top_srcdir)/src/pieces.c

checkBoardPositions_CFLAGS = @CHECK_CFLAGS@
checkBoardPositions_CPPFLAGS = -DUNITTEST_BOARDPOSITIONS
checkBoardPositions_LDADD = @CHECK_LIBS@
