#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#define MAX_NUM 25
#define getClock() ((double)clock() / CLOCKS_PER_SEC)

// Definição das estruturas
typedef struct operation
{
    int job;
    int time;
    int machine;
} Operation;

typedef struct job
{
    int n;
    Operation operations[MAX_NUM];
} Job;

typedef struct solution
{
    int initialTime;
    int endTime;
} Solution;

typedef struct machine
{
    int n;
    bool isFree;
    int endTime;
} Machine;


int main(int argc, char **argv)
{
    FILE *inputFile;
    FILE *outputFile;
    Job jobs[MAX_NUM];
    Machine machines[MAX_NUM];

    int nrJobs;
    int nrMachines;

    inputFile = fopen(argv[1], "r");
    outputFile = fopen("output.txt", "w");
    fscanf(inputFile, "%d%d", &nrJobs, &nrMachines);
    return true;
}