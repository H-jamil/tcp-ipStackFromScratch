CC=gcc
CFLAGS=-g
TARGET:test

OBJS=gluethread/glthread.o \
		  graph.o 		   \
		  topologies.o \
			net.o

test:testapp.o ${OBJS}
	${CC} ${CFLAGS} testapp.o ${OBJS} -o test

testapp.o:testApp.c
	${CC} ${CFLAGS} -c testApp.c -o testapp.o

gluethread/glthread.o:gluethread/glthread.c
	${CC} ${CFLAGS} -c -I gluethread gluethread/glthread.c -o gluethread/glthread.o
graph.o:graph.c
	${CC} ${CFLAGS} -c -I . graph.c -o graph.o
topologies.o:topologies.c
	${CC} ${CFLAGS} -c -I . topologies.c -o topologies.o
net.o:net.c
	${CC} ${CFLAGS} -c -I . net.c -o net.o
clean:
	rm *.o
	rm gluethread/glthread.o
	rm test
