#pragma once
#include <fstream>
#include "Time.h"

using namespace System;

struct BLOCK {
	int id;
	char* text;
	char* hash;
	long long nonce;
	int control;
	bool found;
};
char* blockResult(BLOCK block);
char* tryForHash(BLOCK block, long long a);

class List
{
public:
	List()
	{
		nextListComponent = nullptr;
	}
	BLOCK block;
	char* blockResult;
	List* nextListComponent;
};
void addListComponent(BLOCK block);
void printListComponents();

void blockchain(int difficulty);
int controlHash(BLOCK block, int difficulty);
BLOCK generateHashParallel(BLOCK block, int difficulty, long long upToDateNonceValue, long long limit, int numOfThreads);

void printToTxt(std::ofstream& writeFile, BLOCK block, Time time, int i);