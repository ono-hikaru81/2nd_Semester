#ifndef UNIT_H
#define UNIT_H

#include"Common.h"
#include"Difinition.h"

class Unit
{
public:
	// �R���X�g���N�^�[
	Unit();
	// �f�X�g���N�^�[
	~Unit();

	void PrintStatus();

private:
	Status status;
};

#endif
