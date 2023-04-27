#pragma once
#include <cstdint>
#include <Windows.h>
#include <string>
#include "framepool.h"



class UObject {
public:
	void** VFTable;
	uint32_t ObjectFlags;
	uint32_t InternalFlags;
	struct UClass* ClassPrivate;
	struct FName NamePrivate;
	UObject* OuterPrivate;
	
	std::string GetName();
	std::string GetFullName();
	void ProcessEvent(void* fn, void* params);

	std::uintptr_t GetProcessEventAddr() {
		auto vtable = *reinterpret_cast<void***>(this);

		return (std::uintptr_t)vtable[0x44];
	}

};

class TUObjectArray {
public:
	BYTE** Objects;
	BYTE* PreAllocatedObjects;
	uint32_t MaxElements;
	uint32_t NumElements;
	uint32_t MaxChunks;
	uint32_t NumChunks;
	UObject* GetObjectPtr(uint32_t id) const;
	UObject* FindObject(const char* name) const;
};

template <class T>
class TArray 
{
public:
	T* Objects;
	int Count;
	int Size;
};


class FText
{
public:
	class FTextData* TextData; //0x0000
}; //Size: 0x0008
static_assert(sizeof(FText) == 0x8,"");

class FTextData
{
public:
	wchar_t* Text; //0x0000
}; //Size: 0x0008
static_assert(sizeof(FTextData) == 0x8,"");

class FString
{
public:
	TArray<TCHAR> Data;

	FORCEINLINE const wchar_t* c_str() const
	{
		return Data.Objects;
	}
};

class FVector {
public: 
	float x = 0.0f, y = 0.0f, z = 0.0f;
};

class FRotator {
public: 
	float x = 0.0f, y = 0.0f, z = 0.0f;
};


class UField : public UObject
{

public:
	char UnknownData_28[0x8]; // 0x28(0x08) why!



	// Functions 
public:
};

//Class CoreUObject.Struct Size 176
// Inherited 48 bytes 
class UStruct : public UField
{

public:
	char pad_30[0x10]; // 0x30(0x10)
	UStruct* SuperStruct; // 0x40(0x8)
	char UnknownData_48[0x68]; // 0x48(0x80)


	// Functions 
public:
};

class UClass : public UStruct
{

public:
	char UnknownData_B0[0x180]; // 0xb0(0x180)



	// Functions 
public:
};

class UScriptStruct : public UStruct
{

public:
	char pad_176[16];  // Offset: 176 Size: 16
	// Functions 
public:
};