; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "djondb"
#define MyAppVersion "0.1"
#define MyAppPublisher "djon"
#define MyAppURL "http://djondb.com"
#define MyAppExeName "djondb_win.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{06E2AA02-A2E7-4DF2-8C18-0E4FE0F7D94C}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
OutputBaseFilename=setup
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Dirs]
Name: "{app}\"; Permissions: everyone-modify

[Files]

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\workspace\personal\djondb\db\windows\Release\djondb_win.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\workspace\personal\djondb\db\windows\Release\msvcm90.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\workspace\personal\djondb\db\windows\Release\msvcp90.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\workspace\personal\djondb\db\windows\Release\msvcr90.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\workspace\personal\djondb\db\windows\Release\pthreadVC2.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\workspace\personal\djondb\db\windows\Release\djondb_shell.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\workspace\personal\djondb\db\windows\djondb.conf"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\workspace\personal\djondb\db\windows\installer\vcredist_x86_vs2010.exe"; DestDir: {tmp}
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Run]
Filename: {tmp}\vcredist_x86_vs2010.exe; Parameters: "/passive /Q:a /c:""msiexec /qb /i vcredist.msi"" "; StatusMsg: Installing 2010 RunTime...

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{#MyAppName} shell"; Filename: "{app}\djondb_shell.exe"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

