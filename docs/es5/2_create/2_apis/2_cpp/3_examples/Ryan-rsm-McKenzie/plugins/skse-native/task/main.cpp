#include "common/IDebugLog.h"  // IDebugLog
#include "skse64_common/skse_version.h"  // RUNTIME_VERSION
#include "skse64/gamethreads.h"  // TaskDelegate
#include "skse64/PluginAPI.h"  // SKSETaskInterface, SKSEInterface, PluginInfo

#include <ShlObj.h>  // CSIDL_MYDOCUMENTS

#include "version.h"  // VERSION_VERSTRING, VERSION_MAJOR


static SKSETaskInterface* g_taskInterface = 0;


class MyDelegate : public TaskDelegate
{
public:
	virtual void Run() override
	{
		_MESSAGE("This task is running on the main thread!");
	}
	

	virtual void Dispose() override
	{
		delete this;
	}
};


extern "C" {
	bool SKSEPlugin_Query(const SKSEInterface* a_skse, PluginInfo* a_info)
	{
		gLog.OpenRelative(CSIDL_MYDOCUMENTS, "\\My Games\\Skyrim Special Edition\\SKSE\\MyFirstPlugin.log");
		gLog.SetPrintLevel(IDebugLog::kLevel_DebugMessage);
		gLog.SetLogLevel(IDebugLog::kLevel_DebugMessage);

		_MESSAGE("MyFirstPlugin v%s", MYFP_VERSION_VERSTRING);

		a_info->infoVersion = PluginInfo::kInfoVersion;
		a_info->name = "MyFirstPlugin";
		a_info->version = MYFP_VERSION_MAJOR;

		if (a_skse->isEditor) {
			_FATALERROR("[FATAL ERROR] Loaded in editor, marking as incompatible!\n");
			return false;
		} else if (a_skse->runtimeVersion != RUNTIME_VERSION_1_5_73) {
			_FATALERROR("[FATAL ERROR] Unsupported runtime version %08X!\n", a_skse->runtimeVersion);
			return false;
		}

		return true;
	}


	bool SKSEPlugin_Load(const SKSEInterface* a_skse)
	{
		_MESSAGE("[MESSAGE] MyFirstPlugin loaded");

		g_taskInterface = static_cast<SKSETaskInterface*>(a_skse->QueryInterface(kInterface_Task));
		if (!g_taskInterface) {
			return false;
		}
		g_taskInterface->AddTask(new MyDelegate());

		return true;
	}
};
