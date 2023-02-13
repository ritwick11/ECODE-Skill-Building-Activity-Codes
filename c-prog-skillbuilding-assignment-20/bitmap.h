#include <stdio.h>
// #define NOTTESTING

enum OffOnStatus {Off, On};

struct VolumeButtonStruct
{
    enum OffOnStatus currentStatus;
    unsigned int volumeLevel;
};

// Structure
void RotateVolumeButtonClockStruct(struct VolumeButtonStruct* vB);
void RotateVolumeButtonAntiClockStruct(struct VolumeButtonStruct* vB);
void ToggleVolumeButtonStruct(struct VolumeButtonStruct *vB);
void ShowCurrentVolumeStruct(struct VolumeButtonStruct vB);

// Bit Fields
struct VolumeButtonBitFields
{
    enum OffOnStatus currentStatus: 1;
    unsigned int volumeLevel: 4;
};

void RotateVolumeButtonClockBitFields(struct VolumeButtonBitFields* vB);
void RotateVolumeButtonAntiClockBitFields(struct VolumeButtonBitFields* vB);
void ToggleVolumeButtonBitFields(struct VolumeButtonBitFields* vB);
void ShowCurrentVolumeBitFields(struct VolumeButtonBitFields vB);

// Array
void RotateVolumeButtonClockArray(int* volume, int size);
void RotateVolumeButtonAntiClockArray(int* volume, int size);
void ToggleVolumeButtonArray(int* volume, int size);
void ShowCurrentVolumeArray(int* volume, int size);

// Variables
void RotateVolumeButtonClockVariables(int* status, int* volume);
void RotateVolumeButtonAntiClockVariables(int* status, int* volume);
void ToggleVolumeButtonVariables(int* status);
void ShowCurrentVolumeVariables(int* status, int* volume);
