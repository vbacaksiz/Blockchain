#include <stdio.h>
#include <iostream>
#include <string>
#include <chrono>
#include <omp.h>
#include "sha256.h"
#include "blockchain.h"

using namespace std;

char* blockResult(BLOCK block)
{
	string createResultText = to_string(block.id) + block.text + block.hash;
	char* resultText;
	resultText = strcpy(new char[createResultText.length() + 1], createResultText.c_str());
	return resultText;
}

char* tryForHash(BLOCK block, long long tryingNonce)
{
	string tryForHashText = block.text + to_string(tryingNonce);
	char* tryForHashTextResult = strcpy(new char[tryForHashText.length() + 1], tryForHashText.c_str());
	return tryForHashTextResult;
}

List* head = NULL;

void addListComponent(BLOCK block)
{
	List* ptr = new List();
	ptr->block = block;
	ptr->nextListComponent = head;
	head = ptr;
}

void printListComponents()
{
	List* ptr = head;
	int i = 0;
	while (ptr != NULL)
	{
		cout << i << ". BLOCK" << endl;
		cout << "*********************";
		cout << ptr->block.id << endl;
		cout << ptr->block.text << endl;
		cout << ptr->block.hash << endl;
		cout << ptr->block.nonce << endl;
		cout << ptr->blockResult << endl;
		cout << endl << endl << endl;
		ptr = ptr->nextListComponent;
		i++;
	}
}

int controlHash(BLOCK block, int difficulty)
{
	int tempDifficulty;
	string controlHashText;
	int i = 0;
	int control = 0;
	tempDifficulty = difficulty;
	char* createControlHashText = tryForHash(block, block.nonce);
	controlHashText = sha256(createControlHashText);
	//cout << controlHashText << endl;
	for (i = 0; i < difficulty; i++)
	{
		if (controlHashText[i] == '0' && controlHashText[difficulty] != '0')
			tempDifficulty--;
	}
	//cout << "checkedDD" << controlHashText << endl;
	if (tempDifficulty == 0)
	{
		control = 1;
		//cout << "wWQRQWRQW" << control << endl;
	}
	else {
		control = 0;
	}
	return control;
}

BLOCK generateHashParallel(BLOCK block, int difficulty, long long upToDateNonceValue, long long limit, int numOfThreads)
{
	string hash = "";
	string tempHash = "";
	char* tryForHashText;
	int tempDifficulty;
	int i = 0;
	long long j = 0;
	long long tempNonce = 0;
	int abort = 0;
	int status = 0;
	int control = 0;
	omp_set_num_threads(numOfThreads);
#pragma omp flush(status) 
	while (!status)
	{
#pragma omp parallel for schedule(dynamic,1) private(i, tempDifficulty, hash, tryForHashText, tempNonce)
		for (j = upToDateNonceValue; j < limit; j++)
		{
#pragma omp flush(abort)
			if (!abort)
			{
				tempNonce = j;
				tempDifficulty = difficulty;
				tryForHashText = tryForHash(block, tempNonce);
				hash = sha256(tryForHashText);
				free(tryForHashText);
				//#pragma omp parallel for schedule(dynamic,1)
				for (i = 0; i < difficulty; i++)
				{
					if (hash[i] == '0' && hash[difficulty] != '0')
						tempDifficulty--;
				}
				if (tempDifficulty == 0)
				{
					block.found = true;
					abort = 1;
					status = 1;
					tempHash = hash;
					block.nonce = tempNonce;
				}
			}
		}
		status = 1;
		///pragma
	}
#pragma end
	block.hash = strcpy(new char[tempHash.length() + 1], tempHash.c_str());
	return block;
}

void printToTxt(ofstream& writeFile, BLOCK block, Time timer, int i)
{
	writeFile << i << ". BLOCK" << endl;
	writeFile << "ID            : " << block.id << endl;
	writeFile << "BLOCK TEXT    : " << block.text << endl;
	writeFile << "BLOCK HASH    : " << block.hash << endl;
	writeFile << "BLOCK NONCE   : " << block.nonce << endl;
	writeFile << "BLOCK CONTROL : " << block.control << endl;
	writeFile << "TIME          : " << timer.hour << " hour :: " << timer.min << " min :: " << timer.sec << " sec:: " << timer.ms << " ms" << endl;
	writeFile << endl << endl << "---------------------------------------------" << endl << endl;
}
