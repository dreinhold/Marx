/*Experimenting with defining constansts to self modify functions.. they are in hex! */

#define ZERO_OUT_VALUE 0x0000

#define SEND_HOSTNAME 0x0001
#define SEND_BENCHSCORE 0x0002
#define SEND_PRIORITY_NUM 0x0003
#define RECIEVED_OK 0x0004 //this should be very important
#define KILL_PEER 0x0005

#define QUEUE_JOBS 0x0006
#define SEND_DIRECTIVE 0x0007
#define ROUND_ROBIN 0x0008
#define SPECIFIC_PEERS 0x0009
#define MIN 0x000A
#define MAX 0x000B
#define QUEUE_JOBS_END 0x000C

#define SEND_JOB 0x000D
#define SEND_JOB_UNAME 0x000E
#define JOB_RECIEVED_OK 0x000F

#define JOB_RECIEVED_ERROR 0x0010
#define KILL_SERVER 0x0011
#define READY_FOR_JOBS 0x0012

#define RECIEVED_ERROR 0x0013


#define SEND_CPULOAD 0x0014
#define DISPLAY_PEERS 0x0015

//~ #define CONTINUE_ADDING_TO_QUEUE 0x0014
//~ #define CONTINUE_ADDING_TO_QUEUE 0x0015
//~ #define CONTINUE_ADDING_TO_QUEUE 0x0016
//~ #define CONTINUE_ADDING_TO_QUEUE 0x0017
//~ #define CONTINUE_ADDING_TO_QUEUE 0x0018
//~ #define CONTINUE_ADDING_TO_QUEUE 0x0019

#define NEW_PEER 0xFFFF


//more work needs to be done here


char const *appUsageString = "\n\n\"History repeats itself, first as tragedy, second as farce.\"" \
" -Karl Marx\n\nMarx Usage : Marxd [switches] [hostname]\n\n \
\t -s : Executes the server\n \t -p : Executes the peer\n\n\
Sending jobs : jobsender [a list of commands] [hostname] \
";
