# Simple Makefile for marxd

all : Marxd jobsender

Marxd : main.c
	@echo "Complie and Link Marxd"
	gcc  main.c -o Marxd -lpthread -lconfig -g

jobsender : jobsender.c
	@echo "Complie and Link jobsender"
	gcc  jobsender.c -o jobsender -lpthread -lconfig -g

clean :
	@echo "Cleanup Marxd and jobsender"
	rm -f Marxd jobsender
