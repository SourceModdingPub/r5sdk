#pragma once

namespace
{
//-------------------------------------------------------------------------
// CSTUDIORENDERCONTEXT
//-------------------------------------------------------------------------
#if defined (GAMEDLL_S1)
	ADDRESS CStudioRenderContext__LoadModel = g_mGameDll.FindPatternSIMD((std::uint8_t*)"\x4C\x89\x44\x24\x00\x53\x55\x56\x41\x54\x41\x57", "xxxx?xxxxxxx");
#elif defined (GAMEDLL_S2)
	ADDRESS CStudioRenderContext__LoadModel = g_mGameDll.FindPatternSIMD((std::uint8_t*)"\x4C\x89\x44\x24\x00\x48\x89\x54\x24\x00\x53\x57\x41\x55\x48\x81\xEC\x00\x00\x00\x00", "xxxx?xxxx?xxxxxxx????");
#elif defined (GAMEDLL_S3)
	ADDRESS CStudioRenderContext__LoadModel = g_mGameDll.FindPatternSIMD((std::uint8_t*)"\x4C\x89\x44\x24\x00\x48\x89\x54\x24\x00\x48\x89\x4C\x24\x00\x53\x55\x56\x57\x48\x83\xEC\x78", "xxxx?xxxx?xxxx?xxxxxxxx");
#endif// 0x1404554C0 // 4C 89 44 24 ? 48 89 54 24 ? 48 89 4C 24 ? 53 55 56 57 48 83 EC 78 //

#if defined (GAMEDLL_S0) || defined (GAMEDLL_S1)
	ADDRESS CStudioRenderContext__LoadMaterials = g_mGameDll.FindPatternSIMD((std::uint8_t*)"\x4C\x89\x44\x24\x00\x55\x56\x41\x57", "xxxx?xxxx");
#elif defined (GAMEDLL_S2) || defined (GAMEDLL_S3)
	ADDRESS CStudioRenderContext__LoadMaterials = g_mGameDll.FindPatternSIMD((std::uint8_t*)"\x48\x8B\xC4\x4C\x89\x40\x18\x55\x56\x41\x55", "xxxxxxxxxxx");
#endif// 0x140456B50 // 48 8B C4 4C 89 40 18 55 56 41 55 //
}

///////////////////////////////////////////////////////////////////////////////
class HStudioRenderContext : public IDetour
{
	virtual void debugp()
	{
		std::cout << "| FUN: CStudioRenderContext::LoadModel      : 0x" << std::hex << std::uppercase << CStudioRenderContext__LoadModel.GetPtr()     << std::setw(npad) << " |" << std::endl;
		std::cout << "| FUN: CStudioRenderContext::LoadMaterials  : 0x" << std::hex << std::uppercase << CStudioRenderContext__LoadMaterials.GetPtr() << std::setw(npad) << " |" << std::endl;
		std::cout << "+----------------------------------------------------------------+" << std::endl;
	}
};
///////////////////////////////////////////////////////////////////////////////

REGISTER(HStudioRenderContext);