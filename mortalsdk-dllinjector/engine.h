#pragma once
#include <cstdint>


class UObject {
public:
	char pad_00[40];
};

template <class T>
class TArray 
{
public:
	T** Objects;
	int Count;
	int Size;
};

class FName {
public:
	int index;
	int number;

};

class FVector {
public: 
	float x = 0.0f, y = 0.0f, z = 0.0f;
};

class FRotator {
public: 
	float x = 0.0f, y = 0.0f, z = 0.0f;
};

