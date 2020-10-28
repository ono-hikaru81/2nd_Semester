#include "Test.h"
#include <stdlib.h>
#include <stdio.h>

// static�����o�ϐ��̏�����(��`��)
// �^�� �N���X��::�ϐ���(= �����l)
// �� : static�����o�ϐ��́A�錾�ƕʂɎ��Ԃ�����Ă����K�v������
//	���Ԃ���鎞�́A�K��cpp���ɏ�������
int Test::staticValue = 0;
int Test::instanceCount = 0;

Test::Test()
{
	value = 0;
	instanceCount++;
}

Test::~Test()
{
	instanceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::PrintValue()
{
	printf("value       = %d\n", value);
	printf("staticValue = %d\n", staticValue);
}

// static�����o�֐��̏�����(��`��)
// �߂�l �֐���(����)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;

	// �� : static�����o�֐��̒��ł́A
	//		static�łȂ������o�֐��𑀍삷�邱�Ƃ͏o���Ȃ�
//	value = value_; // <- error!
}

void Test::PrintCount()
{
	printf("Instance Count = %d\n", instanceCount);
}
