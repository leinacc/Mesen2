#include "pch.h"
#include "Shared/BaseState.h"
#include "SNES/SnesCpuTypes.h"
#include "SNES/SnesPpuTypes.h"
#include "SNES/SpcTypes.h"
#include "SNES/DSP/DspTypes.h"
#include "SNES/Coprocessors/DSP/NecDspTypes.h"
#include "SNES/Coprocessors/SA1/Sa1Types.h"
#include "SNES/Coprocessors/GSU/GsuTypes.h"
#include "SNES/Coprocessors/CX4/Cx4Types.h"
#include "SNES/DmaControllerTypes.h"
#include "SNES/InternalRegisterTypes.h"
#include "SNES/AluMulDiv.h"

struct SnesState
{
	uint64_t MasterClock;
	SnesCpuState Cpu;
	SnesPpuState Ppu;
	SpcState Spc;
	DspState Dsp;
	NecDspState NecDsp;
	DebugSa1State Sa1;
	GsuState Gsu;
	Cx4State Cx4;

	SnesDmaControllerState Dma;
	InternalRegisterState InternalRegs;
	AluState Alu;
};