#pragma once

using namespace System::Collections;
using namespace System::ServiceProcess;
using namespace System::ComponentModel;

#include "service.h"
#define WINDOWS
#include "util.h"

namespace windowsservice {

	/// <summary>
	/// Summary for windowsserviceWinService
	/// </summary>
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	public ref class windowsserviceWinService : public System::ServiceProcess::ServiceBase
	{
	public:
		windowsserviceWinService()
		{
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~windowsserviceWinService()
		{
			if (components)
			{
				delete components;
			}
		}

		/// <summary>
		/// Set things in motion so your service can do its work.
		/// </summary>
		virtual void OnStart(array<System::String^>^ args) override
		{
			__stopRunning = false;
			//service_startup();

			while(true) {
				if (__stopRunning) {
					break;
				}
				//sleep(30000);
			}
		}

		/// <summary>
		/// Stop this service.
		/// </summary>
		virtual void OnStop() override
		{
			__stopRunning = true;
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		bool __stopRunning;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->CanStop = true;
			this->CanPauseAndContinue = true;
			this->AutoLog = true;
			this->ServiceName = L"windowsserviceWinService";
		}
#pragma endregion
	};
}
